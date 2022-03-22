class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        istringstream iss(s1);
        unordered_map<string, int> stringMap;
        vector<string> resultString;
        
        // add s1 to the map
        do{
            string copyString;
            iss >> copyString;
            
            if(stringMap.count(copyString)){
                (stringMap.find(copyString)->second)++;
            }
            else{
                stringMap.insert(make_pair(copyString, 1));
            }
            
        }while(iss);
        
        istringstream s2StringStream(s2);
        
        // add s2 to the map 
        do{
            string copyString;    
            s2StringStream >> copyString; 
            
            if(stringMap.count(copyString)){
                // resultString.push_back(copyString);
                (stringMap.find(copyString)->second)++;
            }
            else{
                stringMap.insert(make_pair(copyString, 1));
            }
        }while(s2StringStream);
        
        // traverse map and only push words that occur once in the map
        for(auto words = stringMap.begin(); words != stringMap.end(); words++){
            if(words->second == 1){
                resultString.push_back(words->first);
            }
        }
        
        return resultString;
    }
};