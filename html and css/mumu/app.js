///promt 
/*let num = Number(prompt("Enter a number: "));
console.log("Square is: "+num*num);*/

//while loop demo
/*let count = 0;
while(count<10){
    console.log(count);
    count++;
}*/
//function declaration aproches 
//1
/*let squre = function(num1){
    return num1*num1;
}
console.log(squre(4));*/

//2 general rules of declaring function

//arrow function
/*const printHello = () => {
    document.write("<h1>Hello world!</h1>");
}
printHello();*/

const numType = (num) =>{
    if(num%2 == 0){
        console.log("Even");
    }else{
        console.log("Odd");
    }
}
numType(21);
numType(22, 34, 33);



























//page 55 exercises
/*function minimum(num1, num2){
    if(num1<num2){
        return num1;
    }else{
        return num2;
    }
}
console.log(minimum(10, 20));*/
