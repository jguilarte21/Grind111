//242. Valid Anagram 

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mapS;
        map<char, int> mapT;
        if (s.size() != t.size()){
            return false;
        }
        
        for (int i = 0; i < s.size(); i++){
            mapS[s[i]]++;
            cout << s[i] << ' '<< mapS[s[i]] << endl;
        }
        for (int i = 0; i < t.size(); i++){
            mapT[t[i]]++;
            cout << t[i] << ' ' << mapT[t[i]] << endl;
        }
        for (int i = 0; i < s.size(); i++){
            if (mapS[s[i]] != mapT[s[i]]){
                return false;
            }
        }
        return true;
    }
};