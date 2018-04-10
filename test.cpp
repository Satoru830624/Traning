#include <iostream>
#include <vector>

using cplx = complex<double>;

std::vector<int> v1;
v1.push_back(2);
v1.push_back(3);
v1.push_back(5);
v1.push_back(7);

std::vector<int> v2(4);
v2[0]=2;
v2[1]=3;
v2[2]=5;
v2[3]=7;

std::vector<int> v3{2,3,5,7};
std::cout << (v1 == v2 ? "等しい" : "等しくない")<< endl;
std::cout << (v1 == v1 ? "等しい" : "等しくない")<< endl;
size_t s = v1.size();
for(size_t i = 0; i < s; i++){
    std::cout << v[i]<< ", "
}
std::cout << endl;

for(aoto x : v2){
    std::cout << x << endl;
}

std::vector<cplx> v4;
cplx z(3.,4.);
v.push_back(z);
/*
int x;
namespace nameA{
    int x =1;
}
namespace nameB{
    int x = 2;
}

int main()
{
    int x = 3;
    std::cout << x << std::endl;
    std::cout << ::x << '\n';
    std::cout << nameA::x << '\n';
    std::cout << nameB::x << '\n';
    return 0;
}*/
