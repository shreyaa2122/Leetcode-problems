#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestBalanced(string s) {
        int n =s.length();
        int maxLen=0;

        for(int i =0;i<n;i++){// for the starting index
            int freqMap[26]={};//26 characters in total thats why
            int maxFreq =0,distincts=0;
            for(int j=i;j<n;++j){//for the ending index 
                int idx=s[j]-'a';
                distincts +=(freqMap[idx]==0);//inc distincts only when the character appears for the first time 
                maxFreq=max(maxFreq,++freqMap[idx]);

                if(j-i+1 == distincts*maxFreq){//j-i+1 is the length of the string and distinct defines the new characters that appeared and maxfreq defines the no. of time the character appeared for eg d=a,b,c ,a,b,c so 3*2
                    maxLen = max(maxLen,j-i+1);
                }
            }
        }
        return maxLen;
    }
};