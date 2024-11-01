// Solution for 4A_watermelon
#include <iostream>
using namespace std ;

class Solution {
    public:
    string decision(int weight ){
    string str1="Yes";
    string str2="No";

       int w = weight ;
       if(w %2 == 0 && w > 2){
        return str1  ;
       }
       else{
        return str2;
       }
    };
};
int main(){
    Solution s ;
    int weight_watermelon  ;
    cin >> weight_watermelon ;
    cout << s.decision(weight_watermelon);
}