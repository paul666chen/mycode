#ifndef __UTIL_H
#define __UTIL_H
#include<string>
//----------------------------------------------------------------
//输出一个测试样例

int TestOut();
int TestOut(int a);
int TestOut(int a,int b);
int TestOut(int& a);
int TestOut(int& a,int& b);
std::string TestOutStr(std::string s);

#endif