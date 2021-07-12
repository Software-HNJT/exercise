#include <iostream>
using namespace std;

void test(int A[])
{
    int temp = 0;
    for (int i = 1; i < sizeof(A); ++i) //从第二个元素开始
    {
        while (i > 0 && A[i] < A[i - 1]) //当该元素前面还有元素，且比前面的数小，就进行下面的交换
        {
            temp = A[i];
            A[i] = A[i - 1];
            A[i - 1] = temp;
            --i; //递减，往前比较
        }
    }
}
void print(int A[])
{
    for (int i = 0; i < sizeof(A)-1; i++)
    {
        cout << A[i];
    }
}
int main(int argc, char const *argv[])
{
    int a[5] = {3, 7, 5, 2, 9};
    test(a);
    print(a);
}
