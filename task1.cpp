#include<iostream>
using namespace std; 

class printGrade
{
    private:
        int marks,n;
        char nm[10];
    public:
        void grade(int marks,char g[])
        {
            
             if(marks>=420 && marks<=500)
            {
                cout<<endl<<"Grade A"<<endl;
            }
            else if(marks>=340 && marks<420)
            {
                cout<<endl<<"Grade B"<<endl;
            }
            else if(marks>=260 && marks<340)
            {
                cout<<endl<<"Grade C"<<endl;
            }
            else if(marks>=180 && marks<260)
            {
                cout<<endl<<"Grade D"<<endl;
            }
            else
            {
                cout<<"Fail"<<endl;
            }
                        
            
        }
        
};

int main(){
    
    int h;
    char a[10];
    printGrade s1;
    cout<<"Enter total marks from 500:";
    cin>>h;
    cout<<"Enter Name :";
    cin>>a;
    s1.grade(h,a);
    
}