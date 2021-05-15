/*
题目描述

小明非常喜爱物理，有一天，他对物理实验室中常用的弹簧拉力计产生了兴趣。实验室中有两种质量不同的砝码，小明分别用a个第一种砝码放在弹簧拉力计上和b个第二种砝码放在弹簧拉力计上，假设每增加单位重量的砝码，弹簧拉力计的长度增加1，那么两次称量弹簧拉力计的长度差是多少呢？（假设拉力计不发生非弹性形变）

输入
第一行一个整数T，表示有T组数据。
之后T行，每行数据包含四个正整数，分别表示第一种砝码重量a，第一种砝码数量b，第二种砝码重量c，第二种砝码数量d。
T<25  (0<a,b,c,d<=100)

输出
对于每组数据，输出一个正整数，表示弹簧拉力计的长度差值。

样例输入
3
1 2 3 4
1 4 2 2
1 3 2 1
样例输出
10
0
1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    cout<<abs((a*b)-(c*d))<<endl;
	}
	return 0;
}
