/*#include<iostream>
using namespace std;
void main()
{
	char  n[256];
   int sum;
   int ln;
   while(cin.getline(n,256)&&n[0]!='#')
   {
   ln=strlen(n);
   sum=0;
       for(int i=0;i<ln;i++)
       {
               if(n[i]==' ')sum+=0;
               else if(n[i]>='A'&&n[i]<='Z')
                   sum+=(i+1)*(n[i]-'A'+1);
       }
       cout<<sum<<endl;
       memset(n,0,256);//清空数组

   }
}
*/
#include<iostream> 
using namespace std;

void main(){
	char a[256];
	while(cin.getline(a,256)&&a[0]!='#'){
		int sum=0;  
		for(int i=0;i<strlen(a);i++)  {  
               if(a[i]==' ')sum+=0;
               else if(a[i]>='A'&&a[i]<='Z')
                   sum+=(i+1)*(a[i]-'A'+1); 
		}
		printf("%d\n",sum); 
		memset(a,0,256);
	}
}


/******************************************/
/*主要就是一个cin.get()的使用，其实上面的cin.get()和cin.getline()基本上是没区别的，唯一的区别就是，cin.get(name,16)将最后输入的回车符号压入流中了，要想抛出这个回车号，才算正常使用，于是就加了一句cin.get()这也就是cin.get()的作用了。

 

3cin.getline()接受一个字符串，可以接收空格，遇到回车结束。，

其余的还有getline(),gets(),getchar()属于strintg流，要加上#include<string.h>,属于c语言，前3种已经够处理所有的情况了。
*/