#include <iostream>
#include <vector>
#include <memory>
using namespace std;

int total(std::vector<std::vector<int>> m){
    int result = 0;
    for(size_t i = 0 ; i < 2 ; ++i){
        for(size_t j = 0 ; j < 3 ; ++j){
            result += m[i][j];
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> m{{1,2,3},{4,5,6}};
    std::cout << total(m)<< endl;
    return 0;
}
