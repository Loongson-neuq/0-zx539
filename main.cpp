#include ".assignment/test.h"
using namespace std;
struct
{
    int min; 
    int  mid;
    int max;
};
struct Result result;

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result& result)
{
    // 在这里完成你的代码
    cin >> a >> b >> c;
    if (a > b > c)
        min = c; mid = b; max = a;
    else if (a > c > b)
        min = b; mid = c; max = a;
    else if (b > a > c)
        min = c; mid = a; max = b;
    else if (b > c > a)
        min = a; mid = c; max = b;
    else if (c> a > b)
       min = b; mid = a; max = c;
    else if (c > b> a)
       min = a; mid = b; max = c;
    result.min = min;
    result.mid = mid;
    result.max = max;
}

 