#include <iostream>
/*
	stdio.h の代わりが iostream
*/

int main()
{
	char str[65536];	//文字列を格納するための char 型配列を作成。
	std::cout << "Please Input Your Name. > ";	//標準出力
	/*
		Cpp では入出力に関数（例えば printf() ）などを用いず、入出力演算子を用いる。
		>> が入力演算子
		<< が出力演算子
		stream << value; //とすることで stream オブジェクトにに value の値を出力することになる。
		iostream の定義する標準出力のストリームは cout とされている。

		名前空間の名前::モジュール とすることで同じ名前のモジュールが使用されても名前空間が違うので同名のモジュールが同じプログラム内で共存できる
		つまりクラスとか、構造体とかと一緒よ
		ConstructName.Member で構造体のメンバが指定できるように
		NamespaceName::ModuleName で名前空間のモジュールが使用できるようになる
		？？？include と割と似てるぞ？？？
	*/
	std::cin >> str;	//C 言語で言うところの scanf("%c", &str[0]); と同じで str 文字列変数に標準入力を代入する。
	std::cout << "Hello, " << str << "!";	//標準出力

	return 0;	//関数のルールは C と同じ。
}

/*
	不思議なところとしては << や >> がシフト演算になっていないところが不思議。
	cin 入力はタブやスペースで入力単位を区切ることができる。

	謎
	include <iostream>
*/
