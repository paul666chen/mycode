#pragma once
#include "util.h"
#include<iostream>
int TestOut()
{

    int a = 1;
    return a;
}

int TestOut(int a)
{

    int temp = a;
    return --temp;
}
int TestOut(int a, int b){

    return a*b;
}


// int TestOut(int & a){

//     return a=10;
// }

// int TestOut(int & a, int & b)
// {

//     return a&b;

// }
void TestOutStr(std::string s){

    std::cout<<"Testing string"<<std::endl;

    for (size_t i = 0; i < s.size(); i++)
    {
       std:: cout<<s[i]<<std::endl;
    }
    


}