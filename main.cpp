#include "plane.h"
#include "box.h"
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <Windows.h>
using namespace std;

void print(string s) {
	cout << s << endl;
}

int main() {
	while (true) {
		print("");
		print("");
		print("");
		print("");
		print("");
		print("					GameOS 1.0欢迎您！！！");
		print("");
		print("					  本游戏由周睿洋编写。");
		print("");
		print("					请选择游戏：");
		print("				1、飞机大战    2、推箱子    #、退出游戏");
		print("");
		print("");
		print("");
		print("");
		print("			  若想获得GameOS源代码，请加入德尔塔工作室咨询！！！");
		char x = _getch();
		system("cls");
		if (x == '1') {
			Plane();
		}
		else if (x == '2') {
			Box();
		}
		else {
			break;
		}
	}
	return 0;
}
