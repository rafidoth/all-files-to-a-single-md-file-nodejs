const fs = require('fs');
const { type } = require('os');

const commonPart = ".c";
let numArr = [...Array(26).keys()]
let fileNameArr = numArr.map((element)=> {
    let fileName = (element+1).toString();
    fileName += commonPart;
    return fileName;
});


const fileReader = (file)=>{
    return new Promise((resolve, reject)=>{
        fs.readFile(file,'utf-8',(error, data)=>{
            if(error) reject(error);
            else resolve(data);
        })
    })
}

const outputFile = "result.md";
const fileWriter = (data)=>{
    fs.writeFile(outputFile, data,(error)=>{
        if(error) reject(error);
    });
}


const processResult = async ()=>{
    let result = "";
    for(const file of fileNameArr){
        let data = await fileReader(file);
        let preString = "```c"
        let postString = "```"
        let finalString = `File name : ${file}\n${preString}\n${data}\n${postString}\n`;
        result+=finalString;
    }
    console.log(result);
    fileWriter(result);
}

processResult();