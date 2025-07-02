#include <iostream>
#include <algorithm>
#include <string> // to do any string functions 
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];
        string output = "";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return output;
            }
            output+=first[i];
        }
        return output;
    }
};