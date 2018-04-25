#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int numOfDivisors(int n){
    int divisors = 0;

    for(int i = 1 ; i <= n ; ++i){
        if(n%i==0){
            ++divisors;
        }
    }
    return divisors;
}

bool less1l(int lhs, int rhs){
    return numOfDivisors(lhs) < numOfDivisors(rhs);
}

struct less2{
    bool operator()(int lhs, int rhs){
        return numOfDivisors(lhs) < numOfDivisors(rhs);
    }
};

int main(){
    const int N = 16;
    vector<int> v; //1からNまでの整数を格納するvector
    
    for(int i = 1 ; i <= N ; ++i){
        v.push_back(i);
    }

    vector<int> v1 = v;
    sort(v1.begin(), v1.end(), less1l); //lessl:関数ポインタ

    std::cout << "pattern1: " << endl;

    for(auto i : v1){
        std::cout << i << ", ";
    }

    std::cout << endl;

    std::cout << "pattern2: " << endl;
    vector<int> v2 = v;
    less2 obj;
    sort(v2.begin(), v2.end(), obj); //OK
    for(auto i : v2){
        std::cout << i << ", ";
    }
    std::cout << endl;

    std::cout << endl;

    std::cout << "pattern3: " << endl;
    vector<int> v3 = v;
    sort(v3.begin(), v3.end(), [](int lhs, int rhs) -> bool{
        return numOfDivisors(lhs) < numOfDivisors(rhs);
    }); 

    for(auto i : v3){
        std::cout << i << ", ";
    }
    std::cout << endl;

}