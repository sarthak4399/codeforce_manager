// Solution for 231A_Team
#include<iostream>
#include<vector>
using namespace std ;
class Solutions{
    public:
    int num_questions_solved(int a , int b ,int c ){
        return (a + b + c) >= 2 ? 1 : 0;
    }
};

int main() {
    Solutions s ;
    int n ;
    int a , b , c ;
    int problems_solved = 0;
    cin >> n ;
    for (int i = 0; i < n; i++) {
        int a, b, c; 
        cin >> a >> b >> c; 
        problems_solved += s.num_questions_solved(a, b, c); 
    }
    cout << problems_solved <<endl ;
    return 0 ;
}