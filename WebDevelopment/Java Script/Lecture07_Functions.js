// Functions in Java Script
function sum(a,b)
{
    console.log("Function Call");
    console.log('Sum is ',a+b);
}
let a=5,b=15;
console.log(sum);
sum(a,b);
// Function Expression in Java Script
const multiply=function (a,b)
{
    console.log("Function Expression");
    console.log('Multiplication is ',a*b);
}
console.log(multiply);
multiply(a,b);

// What if We name same both of them?
/*
let x=10,y=2;
function div(a,b)
{
    console.log("Function Call");
    console.log('Division is ',a/b);
}
const div=function (a,b)
{
    console.log("Function Expression");
    console.log('Division is ',a/b);
}
// Which will Print?
console.log(div);
console.log(div(x,y));
// Error as Two of Them cannot be same name
*/
// Nested Functions in Java Script
function addSquare(a,b){

    console.log("add Sqare function is Called for ",a,b);
    let x=Square(a);
    let y=Square(b);

    function Square(z)
    {
    console.log("Sqare function is Called for ",z);
    return z*z;
    }

    return x+y;
} 

console.log('Sum of Square 2 & 3 is = 2^2 + 3^2 = 4 + 9 =',addSquare(2,3));
