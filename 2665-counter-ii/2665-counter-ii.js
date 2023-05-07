/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let cc=init;
    return{
        increment: function(){
        cc+=1;
        return cc;
    },
        decrement: function(){
            cc-=1;
            return cc;
        },
        reset: function(){
            cc= init;
            return cc;
        },
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */