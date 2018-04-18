#include <iostream>
#include <string>

using namespace std;


int main(){
    cout << "OK?(y/n)\n";
    string str;
    cin >> str; //標準入力から文字列を読み込む

    if(str == "y"){
        cout << "yが入力されました。\n";
    }else if(str == "n"){
        cout << "nが入力されました。\n";
    }else{
        cout << "不正な入力です。\n";
    }

}