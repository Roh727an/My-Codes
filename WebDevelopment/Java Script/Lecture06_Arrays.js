const arr = [1, 2, 4, 3, 5];
console.log('Array is ', arr);
// arr.indexOf() = tells the index of element
console.log('indexof(3) ', arr.indexOf(3));
// arr.includes() = tells if the element is present or not
console.log('includes(3) ', arr.includes(3));
//arr.push(x) = Push from back  & return the new size of array
console.log('push(6) ', arr.push(6));
console.log('Array is ', arr);
//arr.unshift(x) = Push from front  & return the new size of array
console.log('unshift(0) ', arr.unshift(0));
console.log('Array is ', arr);
//arr.pop()= Pop last element of Array & return the Element
console.log('pop() ', arr.pop());
console.log('Array is ', arr);
// arr.shift() = Pop first element of Array & return the Element
console.log('shift() ', arr.shift());
console.log('Array is ', arr);
// arr.sort() = sort the array in ascending order & returns it
console.log('sort() ', arr.sort());
console.log('Array is ', arr);
// arr.slice(1,3)=Slice the Array to (1-3)index elements & return the new array containing 1-3 index elements only
console.log('slice(3) ', arr.slice(1, 3));
console.log('Array is ', arr);
