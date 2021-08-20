#ifndef SCOPE_PRACTICE_H
#define SCOPE_PRACTICE_H

#include <iostream>

using namespace std;

class ClassName
{
    public:
        char *str;
        void print(char *); //メソッドの定義
};

void ClassName::print(char *str)   //ClassName のメンバ変数と同じ名前で引数を作ってしまう。
{
    cout << str << endl;    //ClassName() の引数に渡した方の値が優先的に出力される。
    cout << ClassName::str << endl; //ClassName のメンバ変数に指定されている方が出力される。
}

#endif
