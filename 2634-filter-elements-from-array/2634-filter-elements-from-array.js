/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const NewArr=[];
    for(let i=0;i<arr.length;i++){
        if(fn(arr[i],i)){
            NewArr.push(arr[i]);
        }
    }
    return NewArr;
};