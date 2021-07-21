#include <C:\Users\tonfa\Documents\CPP\header-practice\enu_header.h>
#include <C:\Users\tonfa\Documents\CPP\header-practice\enu_header.h>
#include <C:\Users\tonfa\Documents\CPP\header-practice\enu_header.h>
#include <C:\Users\tonfa\Documents\CPP\header-practice\enu_header.h>
//自作ヘッダファイルのインクルードに成功！
//ヘッダファイル内の #ifndef の動作確認用に複数回重複してインクルードしてみる。
#include <iostream>
#define YONEDA 1

using namespace std;

int main(int argc, char *argv[])
{
    adrobo = int(argv[1]);
    switch(adrobo)
    {
        case KASAI:
            cout << "I'm Kasai!" << endl;
            break;
        case KASHIWAGI:
            cout << "Oh! What's!? Why are my computer broken?" << endl; //g++ でコンパイルすると日本語が出力できないみたい。仕方なく英語で出力するしかない。
            break;
        case KACHI:
            cout << "I don't like this source cord written by fujie professor!" << endl;
            break;
        default:
            #ifndef YONEDA  //YONEDA が定義されていないとき
                #define YONEDA 1    //YONEDA を 1 に読み替える
            #endif  //#ifndef YONEDA の条件文を抜ける
            #ifdef YONEDA //YONEDA が定義されているとき、以下を実行する
                #if !YONEDA //YONEDA が清の時、!YONEDA は偽になって以下を実行
                    cout << "I belong Advanced Robotics Class." << endl;
                #else   //YONEDA が偽の時、!YONEDA は真になって以下を実行
                    cout << "We love Yoneda Professor!!!" << endl;
                #endif  //if YONEDA の条件文を抜ける
            #endif //ifdef YONEDA の条件文を抜ける
            break;
    }

    return 0;
}
