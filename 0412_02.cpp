#include <iostream>
#include <string>

using namespace std;

void report(const char* cstr){
    for(int i = 0; cstr [i] != '\0'; i++){
        cout << '[' << i << "]: " << cstr[i] << endl;
    }
}

int main(){
    char cstr1[] = "hello, world";

    string str = cstr1;
    cout << str.size() << endl;

    const char* cstr2 = str.c_str();
    report(cstr2);
}