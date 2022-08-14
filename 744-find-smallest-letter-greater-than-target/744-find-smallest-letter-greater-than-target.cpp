class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int it = 0; it < letters.size(); it++){
            if(letters[it] - '0' > target - '0')
                return letters[it];
        }
        return letters[0];
    }
};