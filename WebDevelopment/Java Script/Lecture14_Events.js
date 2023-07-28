// Event Handler
/*
function Click(){
    console.log("I was Clicked");
}
function Over(){
    console.log("I was Over");
}
function Move(){
    console.log("I was Move");
}
function Press(){
    console.log("Key was Pressed");
}
*/
// Event Listner
/*
const box1=document.getElementById('box-1');
box1.addEventListener('click',(eventObject)=>{
    console.log("Click by Event",eventObject.pageX,eventObject.pageY);
})
*/
// Bubbling & Capture
// box-1 is inside ctr
// Bubble=> Acess box-1 before ctr =>Inner First=> box-1 -> ctr
// Capture-> Acess box-1 after ctr =>Outer First=> ctr -> box-1
// getElementById('event',function,useCapture);
const box1=document.getElementById('box-1');
box1.addEventListener('click',()=>{
    console.log("Clicked on Box");
});
const ctr=document.getElementById('ctr');
box1.addEventListener('click',()=>{
    console.log("Clicked on Ctr");
},true);