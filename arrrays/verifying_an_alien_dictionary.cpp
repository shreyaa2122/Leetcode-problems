#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,char>map;
        for(int i=0;i<26;i++){
            map[order[i]]= ('a'+i);
        }
        //to convert alien order to normal order
        //words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
        //considering the values as:
        //'h'=0, 'l'=1, 'a'=2 etc 
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                words[i][j]=map[words[i][j]];
            }
        }
        //to replace all letters with mapped normal letter 
        return is_sorted(words.begin(),words.end());
    }
};