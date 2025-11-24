#include <iostream>
using namespace std;

class CPU{
public:
 unsigned int freq:12;
 unsigned int ws:1;
 unsigned int core:2;
 unsigned int ht:1;

 CPU(unsigned int f=0,unsigned int w=0,unsigned int c=0,unsigned int h=0)
 :freq(f),ws(w),core(c),ht(h){}
 void show(){
   cout<<"频率"<<freq<<"MHz\n";
   cout<<"字长"<<(ws?64:32)<<"\n";
   int cc = core==0?1: core==1?2:4;
   cout<<"核数"<<cc<<"\n";
   cout<<"HT:"<<(ht?"Yes":"No")<<endl;
 }
};

int main(){
   CPU x(2500,1,2,1);
   x.show();
   cout<<"sizeof="<<sizeof(CPU)<<endl;
}
