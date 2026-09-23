class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) //check if they same length, if not immediately return false
            return false;
        unordered_map <char, int> freqS, freqT;
        for (int i =0; i < s.length() ; i++) //they will be same length of if statement
        {
            //go through each string and update the freq of each char that appears
            freqS[s[i]]++;
            freqT[t[i]]++;
        }
        return (freqS == freqT); //check if maps are same size and same key-value pairs
    }
};
