/*
// Arrow Function
const variable=()=>{
    console.log("HELLO");
}
variable();

// ShortHand Arrow Function
const add=(a,b)=> a+b;
console.log(add(4,5));

// Normal Function
function fun1(a,b){
    console.log("This is Normal Function");
    return a+b;
}
console.log(fun1(4,5));

// Function Expression
const fun2= function (a,b){
    console.log("This is Function Expression");
    return a+b;
}

// Arrow Function
console.log(fun2(4,5));
const fun3=(a,b) =>{
    console.log("This is  Arrow Function");
    return a+b;
}
console.log(fun3(4,5));
*/




// Call Back Functions
function calculate(a, b, operation) {
    console.log("This is Calculate Function");
    console.log(operation, "is CallBack Function");
    return operation(a, b);
}

// 1.Sum Function -> Arrow Function
const sum = (a, b) => a + b;

// 2.sub Function-> Function Expression
const sub = function (a, b) {
    return a - b;
};

// 3.multiplication -> Normal Function
function mul(a, b) {
    return a * b;
}

// ******Remember-> Callback fnction is a Function which is passed not called********

// Sum is Passed as CallBack Function
// Here we pass Sum function not call it
// const result=calculate(3,2,sum);

// Sub is Passed as CallBack Function
// const result=calculate(3,2,sub);

// Mul is Passed as CallBack Function
// const result=calculate(3,2,mul);
// console.log('result is ', result);

// 4.Annomous Function as CallBack Function
const res2=calculate(3,2,
    function (x,y){
        return x/y;
    }
    );
// We Define a Function & at the same time we Pass the function as well
    console.log('result is ', res2);