#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count[255]={0};

    for(size_t i=0;i<str.length();i++){
        count[(unsigned char)str[i]]++;
    }

    char chars[255]={0};
    int fre[255]={0};
    int num = 0;
    for(int i=0;i<255;i++)
    {
        if(count[i]>0)
        {
            fre[num]=count[i];
            chars[num]=(char)i;
            num++;
        }
    }

    for(int i=0;i<num-1;i++)
    {
        for(int j=0;j<num-1;j++)
        {
            if(fre[j]>fre[j+1])
            {
                int temp = 0;
                fre[j]=temp;
                fre[j]=fre[j+1];
                fre[j+1]=temp;
                char temp_char = '\0';
                chars[j]=temp_char;
                chars[j]=chars[j+1];
                chars[j+1]=temp_char;
            }
        }
    }

    char encode[255];
    for(int i=0;i<num/2;i++)
    {
        encode[(unsigned char)chars[i]]=chars[num-1-i];
        encode[(unsigned char)chars[num-1-i]]=chars[i];
    }
    if(num%2==1){
        encode[(unsigned char)chars[num/2]]=chars[num/2];
    }

    for(size_t i=0;i<str.length();i++)
    {
        cout<<encode[(unsigned char)str[i]];
    }
    cout<<endl;
    return 0;
}