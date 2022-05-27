/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
 var topKFrequent = function(nums, k) {
    let bucket = {};
    let freq = [];
    let result = [];
    
    for(let i = 0; i < nums.length + 1; i++){
        let newArray = [];
        
        freq.push(newArray);
    }

    
    for(let i = 0; i < nums.length; i++){
        if(bucket[nums[i]] !== undefined){
            bucket[nums[i]]++;
        }
        else{
            bucket[nums[i]] = 1;
        }
    }
    
    for(const key in bucket){
        console.log(bucket[key]);
        freq[bucket[key]].push(key);
    }
    
    for(let i = freq.length - 1; i > 0; i--){
    
        for(let j = 0; j < freq[i].length; j++){
            if(k == 0){
                return result;
            }
            
            result.push(freq[i][j]);
            k--;
        }
    }
    return result;
    
};