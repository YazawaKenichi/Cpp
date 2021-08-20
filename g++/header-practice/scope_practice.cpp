#include </home/shiokaze/Documents/Cpp/header-practice/scope_practice.h>
#include <iostream>

using namespace std;

int main()
{
    ClassName obj;
    obj.str = "これはメンバ変数";
    obj.print("これはメソッドの引数");

    return 0;
}
