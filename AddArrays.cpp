#include <iostream>

using namespace std;

int main()
{
    int arr1[10], arr2[10], sum[10];

    for(int i=0; i<10; i++)
    {
        cin>>arr1[i]>>arr2[i];
        sum[i]=arr1[i]+arr2[i];
        cout<<"RESULT: "<<sum[i]<<endl;
    }
    return 0;
}