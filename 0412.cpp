#include <iostream>
#include <string>

using namespace std;

int main(){
    std::string str1 = "Hello, ";
    std::string str2 = "World!";

    std::cout << str1[4] << endl;

    str1 += str2;
    std::cout << str1 << endl;

    std::cout << (str1 == str2) << endl;
    std::cout << str1.compare("Hello, Z!") << endl;

    std::cout << str1.find("World") << endl;

    if(str1.find("world") == string::npos){
        std::cout << "Œ©‚Â‚©‚ç‚È‚¢\n";
    }

    std::cout << str1.rfind("o") << endl;

    str1.replace(7, 5, "Nippon");
    std::cout << str1 << endl;

    std::cout << str1.substr(7,6) << endl;
}
