const http=require('http');
const PORT=4500;
const server=http.createServer((request,response)=>{
    response.write("hello world");
    response.end();

})
server.listen(PORT,()=>{
    console.log(`SERVER IS LISTENING ON ${PORT}` );
});

