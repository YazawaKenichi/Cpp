#include <iostream>

using namespace std;

class MyPrinter
{
	public:
		const char *str;
		void print(const char *);
};

void MyPrinter::print(char *str)
{
	cout << str << endl;
	cout << mp::str << endl;
}

int main()
{
	MyPrinter mp;
	mp.str = "これはメンバ変数です。";
	mp.print("これはメンバ関数です。");

	return 0;
}



