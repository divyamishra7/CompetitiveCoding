class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mCode= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> u;
        
        for(int i = 0; i < words.size(); i++){
            string temp;
            for(int j = 0; j < words[i].size(); j++){
                temp = temp + mCode[words[i][j]-'a'];
            }
            u.insert(temp);
        }
        return u.size();
    }
};















  