#include<iostream>
using namespace std;
//方法1画星形 
void ShowPic1(char a,int w)
{
	//第一行到中间行的上一行 ，line为当前行， 
	for(int line=0;line<w/2;line++){
		for(int i=0;i<w/2-line-(w%2!=0?0:1);i++){
			cout<<" ";
		}
		for(int j=0;j<line*2+1;j++){
			cout<<a;
		}
		if(w%2==0) cout<<a;
		cout<<endl;
	}
	//中间行
	if(w%2!=0){
		for(int i=0;i<w;i++)
			cout<<a;
		cout<<endl;
	}
	//中间行的下一行到最后一行
	//此处是把上面的line反过来写了 
	for(int line=w/2-1;line>=0;line--){
		for(int i=0;i<w/2-line-(w%2!=0?0:1);i++){
			cout<<" ";
		}
		for(int j=0;j<line*2+1;j++){
			cout<<a;
		}
		if(w%2==0) cout<<a;
		cout<<endl;
	}
}
//方法2画星形 
void ShowPic2(char a,int w)
{
	//输出一个方阵，线性规划控制输出的区域 
	//横向x，纵向y 
	//x+y>=((w%2==0)?(w/2-1):w/2)控制奇数与偶数行（列）数的区别 
	for(int y=0;y<w;y++){
		for(int x=0;x<w;x++){
			if(	x+y>=((w%2==0)?w/2-1:w/2)		&& 
				x+y<=w/2+w-1	&&
				x-y>=-w/2		&&
				x-y<=w/2)
				cout<<a;
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
//对话函数 
void ask()
{
	int line;char a;
	cout<<"请选择一种图案：";
	cin>>a;
	cout<<"请输入打印行数：";
	cin>>line;
	cout<<"方法1输出的星形："<<endl;
	ShowPic1(a,line);
	cout<<"方法2输出的星形："<<endl;
	ShowPic2(a,line);
}
int main()
{
	for(int i=0;i<2;i++){
		ask();
	}
	return 0;
}
