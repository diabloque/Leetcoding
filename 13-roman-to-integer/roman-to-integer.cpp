#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        int num =0;

        for ( int i=0; i < s.size() ; i++){
            if (s[i] == 'I'){
                if (s[i+1] == 'V' || s[i+1] == 'X' ){
                    num = num -1;
                }
                else{
                    num = num+1;
                }
            }
            else if(s[i]== 'V'){
                num = num+5;
            }
            else if(s[i]=='X'){
                if(s[i+1]== 'L' || s[i+1] == 'C'){
                    num = num-10;
                }
                else{
                    num = num+10;
                }

            }
            else if(s[i]=='L'){
                num = num+50;
            }
            else if ( s[i] == 'C'){
                if (s[i+1] == 'D' || s[i+1] =='M'){
                    num = num-100;
                }
                else{
                    num= num +100;
                }
            }
            else if (s[i] == 'D'){
                num = num +500;
            }
            else if (s[i] == 'M'){
                num = num +1000;
            }
            else{
                cout << "This aint a roman number" << endl;
            }


        }
        return num;
           


        


        
    }
};