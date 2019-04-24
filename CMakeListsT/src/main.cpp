/*************************************************************************
	> File Name: src/main.cpp
	> Author: vach
	> Mail: vacheart@163.com 
	> Created Time: 一  4/22 23:14:41 2019
 ************************************************************************/

#include<iostream>
#include"../include/java.h"
using namespace std;
using namespace vach;

int main(int argc , char**argv)
{
 JavaOpt opt ;
 if(argc <= 1)
 {
	opt.printUsge();
	return -1;
 }
 cout << "~~~~~argv :" << *argv << endl;
 cout << "~~~~~argv :" << *(argv++) << endl;
}

