#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;                               //input from user

    int sum=0;                            //initially take sum =0
    while (n!=0){
        sum = sum + n%10 ;                 // % used for taking remainder value for single sum
        n = n/10;                          // / is used for eleminate last digit value
    }
    cout<<"sum of digit:"<<sum;
    cout<<endl;
    return 0;
}
