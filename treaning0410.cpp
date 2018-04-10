#include <iostream>
#include <vector>

void g1(std::vector<int> v){
     v[0] = 100; //パラメータの変更
}

int g2(const std::vector<int>& v) {
    //v[0] = 1000; //error(v is const)
    return v[0];
}

void g3(std::vector<int> v) {
    v[0] = 1000;
}

auto h(){
    std::vector<int> v{11,13,17,19};
    return v;
}

int main(){
    std::vector<int> v1{2,3,5,7};
    g1(v1);
    std::cout << v1[0] << std::endl;//出漁地２

    std::cout << g2(v1) << std::endl;//g2はｖ１を変更しない

    g3(v1);
    std::cout << v1[0] << std::endl;


    auto v2 = h();       //h()で構築したvectorお受け取る
    //auto v2 = h();    //OK
    for(auto x : v2){
        std::cout << x << ", ";
    }

    std::cout << std::endl;

    return 0;
}
