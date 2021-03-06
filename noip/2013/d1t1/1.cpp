/*-----------------
* author: Rainboy
* email: rainboylvx@qq.com
* time: 2019年 05月 28日 星期二 14:35:02 CST
* problem: luogu-1965
*----------------*/
#include <bits/stdc++.h>
using namespace std;

int _n,m,k,x;

/* 快速幂 */
typedef long long LL;

/* 求 a^n */
LL _pow(LL a,LL n){
	LL base = a;
	LL ret =1;

	for(; n ; n = n >> 1){
		if(n & 1)//取最低位, 是不是很像判断奇偶
			ret = ret * base % _n ; //是1就乘
		base = base*base % _n;     //base增增
	}

	return ret;
}

int main(){
    scanf("%d%d%d%d",&_n,&m,&k,&x);
    int i;
    long long r = _pow(10,k);
    int base = 0;
    for(i=1;i<=r;i++){
        base = (base + _n-m) % _n;
    }
    for(i=0;i<_n;i++){
        int t = (base + i) %_n;
        if( t == x){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
