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
       memset(n,0,256);//�������

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
/*��Ҫ����һ��cin.get()��ʹ�ã���ʵ�����cin.get()��cin.getline()��������û����ģ�Ψһ��������ǣ�cin.get(name,16)���������Ļس�����ѹ�������ˣ�Ҫ���׳�����س��ţ���������ʹ�ã����Ǿͼ���һ��cin.get()��Ҳ����cin.get()�������ˡ�

 

3cin.getline()����һ���ַ��������Խ��տո������س���������

����Ļ���getline(),gets(),getchar()����strintg����Ҫ����#include<string.h>,����c���ԣ�ǰ3���Ѿ����������е�����ˡ�
*/