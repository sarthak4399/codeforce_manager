// Solution for 71_waytooLongWord
#include<iostream>
#include<vector>
using namespace std ;
class Solutions{
    public:
        string abrivation(string word){
            if(word.length()> 10 ){
                return string(1, word[0]) + to_string(word.length() - 2) + word[word.length() - 1];
            }else{
                return word ;
            }
        }
};

int main() {
    Solutions s ;
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    for (const string& word : words) {
        cout << s.abrivation(word) << endl;
    }
}