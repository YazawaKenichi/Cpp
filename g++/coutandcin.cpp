#include <iostream>
using namespace std;

int main(void)
{
    char yourname[1024];
    cout << "あなたの名前はなんですか？ >";
    cin >> yourname;
    cout << "あなたの名前は" << yourname << "ですね？";

    return 0;
}