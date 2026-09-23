class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map <string, vector<string>> anagrams;
        for (string s : strs){ 
            vector<int> freq (26,0); //set up a freq array for the alphabet
            for (char c : s)
                freq[c-'a']++; //increase the index in respect to the letter
            string key ="";
            for (int i =0;i<freq.size(); i++)
                key += freq[i]; //create a key of digits that correspond to the freq
            anagrams[key].push_back(s); //look up the key in the map to add string with the same key
        }
        for (auto pair : anagrams)
            output.push_back(pair.second); //push the vector of strings with same key
        return output;
    }
};
