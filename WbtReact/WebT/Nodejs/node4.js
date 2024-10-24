const http=require('http');
const myModule=require('./node3.js');
const PORT=4600;
const server=http.createServer((request,response) =>{
    var x=4;
    var y=8;
    var z=myModule.sum(1,2);
    response.write(`sum of ${x} and ${y} is ${z}`);
    response.end();


});

server.listen (PORT,() =>{
    console.log("SERVER IS LISTENING ON ${PORT}");

});

