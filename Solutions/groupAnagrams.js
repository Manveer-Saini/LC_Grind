/**
 * @param {string[]} strs
 * @return {string[][]}
 */
 var groupAnagrams = function(strs) {
    let result = {};
    
    for(let i = 0; i < strs.length; i++){
        let count = new Array(26).fill(0);
        
        for(let j = 0; j < strs[i].length; j++){
            count[strs[i][j].charCodeAt(0) - 'a'.charCodeAt(0)]++;
        }
        
        if(result[count] !== undefined){
            result[count].push(strs[i]);
        }
        else{
            let newList = [];
            newList.push(strs[i]);
            result[count] = newList; 
        }
    }
    
    return Object.values(result);
    
};