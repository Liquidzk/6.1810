#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int isprime(int x)
{
	int IsPrime = 1;     //定义变量IsPrime并赋初值1 即x为素数
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			IsPrime = 0;
			break;
		}
	}
	return IsPrime;
}
int main(){
    int m = 2;
    int flag = 0;
    for (; m < 35; m++)
    {

        if (flag ==0 || m)
        {
            /* code */
        }
        
    }
    
}