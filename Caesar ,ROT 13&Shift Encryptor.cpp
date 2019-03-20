#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the key";//if key is 13 then cipher is ROT13
    cin>>n;//if key is 3 then cipher is Caesar
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("text.txt","r+");
    fp2=fopen("file2.txt","w+");
    cout<<"Your file is ready";
while(feof(fp1)==0)
{
    ch=fgetc(fp1);
    if(!feof(fp1))
    {
     ch=ch+n;
     fputc(ch,fp2);
    }
}
fclose(fp1);
fclose(fp2);
return 0;
}
