//                         _ooOoo_                               //
//                        o8888888o                              //
//                        88= . =88                              //
//                        (| ^_^ |)                              //
//                        O╲  =  /O                              //
//                      ____/`---'╲____                          //
//                    .'  ╲∖|     |//  `.                        //
//                   /  ╲∖|||  :  |||//  ╲                       //
//                  /  _||||| -:- |||||-  ╲                      //
//                  |   | ╲╲╲  -  /// |    |                     //
//                  |  ╲ _|  ''╲ ---/''  |  |                    //
//                  ╲ .-╲ __  `-`  ___/-.  /                     //
//                ___`. .'  /--.--╲   `. . ___                   //
//              .“” '<  `.___╲ _<|>_/___.'  >'“”.                //
//            | | :  `- ╲ `.;`╲  _ /`;.`/ - ` : | |              //
//            ╲  ╲  `-.   ╲ _ __╲  /__ _/   .-` / /              //
//      ========`-.____`-.___╲ _____/___.-`____.-'========       //
//                           `=---='                             //
//      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^       //
//                  佛祖保佑       永不宕机     永无BUG            //

#include <iostream>
#include "test.h"
#include "util.h"

using namespace std;

// ----------------------------------------------------------------
// 中文注释
// ----------------------------------------------------------------
int main()
{
    // 这是一个测试
    PrintLine();
    // 输出一句话
    cout << "my ss " << endl;
    TestLine();
    std::cout << "这是一个测试" << std::endl;
    // 新增一句测试
    cout << "new test " << endl;
    TestOut();
    int a = 9;
    int b = 8;
    string str = "aahjgkjang";

    std::cout << TestOut(a, b) << std::endl;
    TestOutStr(str);

    return 0;
}
