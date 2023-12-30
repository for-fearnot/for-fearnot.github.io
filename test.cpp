#include <iostream>
using namespace std;
int main(){
    int n,tmp,space;cin>>n;tmp=n;
    if(n % 2 == 0){
        cout<<"This is a Xmas tree."<<endl;
    }else{
        for(int i=1;i<=n;i++){
            space = tmp-1;
            tmp--;
            for (int j = 1; j <= space; j++) {
                cout << " ";
            }
            for(int k=1;k<=i-1+i;k++){
                cout << i;
            }cout<<endl;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n-1;j++) {
                cout << " ";
            }
            cout << i << endl;
        }
    }
}
