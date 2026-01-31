#include <vector>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res= letters[0];
        bool flag = false;
        for(char ch : letters){//to iterate through all letters
            if(!flag){//means found a greater no. flag=true
                if(ch>target){
                    res=ch;
                    flag=!flag;
                }
            }else{
                if(ch>target && ch<res)res=ch;
            }
        }
        return res;
    }
};