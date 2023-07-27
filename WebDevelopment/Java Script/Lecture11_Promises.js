// Create a Promise Object
let flight=new Promise(
    // Promise Takes A Function which works(Not Promise)
    function (resolve,reject)
    {
        // The Function takes resolve & reject as Parameters
        const condition=true;
        if(condition)
        {
            // Resolve is Called When Promise is Successfull
            // resolve(.then->data)
            resolve("Your Flight is Successfully Landed");
        }
        else
        {
            // Reject is Called When Promise is not Successfull
            // reject(.catch->data)
            reject("Your Flight is Cancled")
        }
    }
);

// Use a Promise -> 1.then() 2.catch() 3.
// 1) .then() -> if Promise is Successfull -> Promise() -> resolve(data) => data -< .then()
// 2) .catch() -> if Promise is UnSuccessfull -> Promise() -> reject(data) => data -< .catch()
// 3) .finally() -> if Promise is UnSuccessfull or Successfull -> Promise() -> reject(data)||resolve(data) => data -< .finally()
flight
        .then
        (
        (resolve_data) =>{
            console.log("Whoohooooo ",resolve_data);
        }
        )
        .catch
        (
        (reject_data)=>{
            console.log("Ohhh Noo ",reject_data);
        }
        )
        .finally(
            (data)=>{
                console.log("Execute Both Cases");
            }
        )