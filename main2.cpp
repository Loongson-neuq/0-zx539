#include<iostream >
using namespace std;
int main () {
	int a;
	int b;
	int	c;
	int min;
	int mid;
	int	max;

    cin >> a >> b >> c;
    if (a > b > c)
        min = c; mid = b; max = a;
    else if (a > c > b)
        min = b; mid = c; max = a;
    else if (b > a > c)
        min = c; mid = a; max = b;
    else if (b > c > a)
        min = a; mid = c; max = b;
    else if (c > a > b)
        min = b; mid = a; max = c;
    else if (c > b > a)
        min = a; mid = b; max = c;
    cout << "max" << max << "mid" << mid << "max<" << max;
    return 0;
}