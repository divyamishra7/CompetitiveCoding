class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int size = s.size();
        int result = m[s[size-1]];
        for(int i = size-2; i >= 0; --i){
            if(m[s[i]] < m[s[i+1]]){
                result = result - m[s[i]];
                //cout<<i<<" : "<<result<<endl;
            }
            else{
                result = result + m[s[i]];
                //cout<<i<<" in else : "<<result<<endl;
            }
        }

      return result;  
    }
    
};






