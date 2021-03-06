// Traning_Cpp_0331.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
#include <string>

template<typename T>
void mySwap(T& x, T& y) {
        T tmp = x;
        x = y;
        y = tmp;
}

int main()
{
    int a = 1;
    int b = 2;
    mySwap(a, b);
    std::cout << a << std::endl; //出力値：2
    std::cout << b << std::endl; //出力値：1

    double x = 1.23;
    double y = 4.56;
    mySwap(x, y);
    std::cout << x <<  std::endl;//出力値：4.56
    std::cout << y << std::endl;//出力値：1.23

    std::string s = "abc";
    std::string t = "xyz";
    mySwap(s,t);

    std::cout << s << std::endl;//出力値：xyz
    std::cout << t << std::endl;//出力値：abc


    return 0;
}

