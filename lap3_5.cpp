#include <iostream>

using namespace std;
string text1,text2;

int main()
{
    int count=0,N;
    cout<<"Enter first text:";
    cin>>text1;
    cout<<"Enter second text:";
    cin>>text2;
    cout<<"Enter N:";
    cin>>N;
    while(count<N)
    {
    if(count%2==0){
                  cout<<text1<<" ";
                  
                  }
                  else{
                     cout<<text2<<" ";  
                     }
                     count++;
                     }
       /*   int i=0;
          while(i==0)
          {
                     if(i==1)
                     {
                             ;
                             }
                             }    */   
                             return 0;
                                
                     
}
