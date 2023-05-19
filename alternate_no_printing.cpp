#include <iostream>
using namespace std;

int func(int n,int i){
    
        for (int j = 1; j <=i; j++)
        {
            if (n==0)
            {
                cout<<n<<" ";
                n=1;
            }
            else if (n==1)
            {
                cout<<n<<" ";
                n=0;
            }
            
            
        }
        cout<<"\n";

    return 0;
    
}

int main(){
    int n;
    cout<<"Enter value of n "<<endl;
    cin>>n;
    
    for (int i = 1; i <=7 ; i++)
    {
    
        for (int j = 1; j <=i; j++)
        {
            if (n==0)
            {
                cout<<n<<" ";
                n=1;
            }
            else if (n==1)
            {
                cout<<n<<" ";
                n=0;
            }
            
            
        }
       if (i%2==0)
       {
          if (n==0)
            {
                n=1;
            }
        else if (n==1)
            {
                n=0;
            }
       }
        
        cout<<"\n";
    //    func(n,i);
        
    }
}