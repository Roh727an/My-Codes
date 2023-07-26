const arr=[1,2,3,-2,4,-8,5];

// We create a Function to check if the Number is negative or not
function check(num)
{
    console.log("The Function is Called for ",num);
    return num<0;
}

// Array CallBack Functions -> We have to pass a Callback Functon as an arguments

// find() -> returns the first value of an array element that passes a test
// let res=arr.find(check);
// console.log(res);

// findIndex() -> returns the first index of an array element that passes a test
let res=arr.findIndex(check);
console.log(res);

// forEach() -> calls a function for each element
arr.forEach((val,idx)=>{
    console.log("Array elemnt value is ",val,"at index",idx);
})