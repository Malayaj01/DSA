// print name n times 
# include<iostream>
using namespace std;
int i, n;
void fun(int i,int n){
    if(i>n){
        return ;
    }
    cout<<"Raja babu"<<endl;
    fun(i+1,n);
}

int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    fun(1,n);

}