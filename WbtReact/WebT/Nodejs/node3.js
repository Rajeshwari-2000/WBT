const http=require('http');
const PORT=4500;
const server=http.createServer((request,response)=>{
    var x=34;
    var y=53;
    response.write(`sum of ${x}and ${y} is${x+y}`);
    response.end();
});
server.listen(PORT,()=>{
console.log(`SERVER IS LISTENING ON ${PORT} `)
});