#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(){
    string str = "Hello, World!";
    string buf_str = str;
    size_t s = str.size();//str.end()- str.begin() + 1;
    for(auto i = 0; i < s ;i++){
        str[i] = buf_str[(s-1) - i];
    }
    cout << str << endl;
}