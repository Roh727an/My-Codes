/*
// Acess HTML Elements
// 1.By Id
const bx2=document.getElementById("box-1")
console.log(bx2);
// 2.By Tag
const tg=document.getElementsByTagName('div');
console.log(tg);
// 3.By Class
const cl=document.getElementsByClassName('conatiner');
console.log(cl);
// 4.By Selector
const rdm=document.querySelector('conatiner.random');
console.log(rdm);
*/
/*
// Changing HTML 
const box1 = document.getElementById('box-1');
console.log(box1);
// Changing HTML content
box1.innerHTML= "<h1>Hello</h1>"
// Changing HTML attribute Value
box1.style.backgroundColor= "grey";
// Modifying Class in HTML
box1.classList.add("roundBorder");
box1.classList.remove("roundBorder");


// Suppose We Wnat to Add round Borderclass in All the Box  
// We access Box by ClassName
const boxes=document.getElementsByClassName("box");
// Boxes contains an List/Array of All Box class Elements
console.log(boxes);
// Run a For Loop to Acces all The Box
for( let i=0;i<boxes.length;i++)
{
    boxes[i].classList.add("roundBorder");
}
*/
// Create New HtmL with the Help of Java Script
// 1.Create a Paragraph Tag with is store in newPara =>document.createElement('p')
const newpara=document.createElement('p');
// 2.Adding HTML =>innerHTML
newpara.innerHTML= "Hello My Name is New Para";
// 3.Make a Child or Append this new element inside other element
const ctr=document.getElementById('ctr');
ctr.appendChild(newpara);