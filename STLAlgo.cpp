#include<iostream>

using namespace std;
/* this works with mac
* to make it work on linux or windows include #include<algorithm>
*/
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[2]={1,2};

    int arr3[5]={3,1,2,4,5};

    int dst[7];
    int *ptr=find(arr,arr+5,5);

    cout<<*ptr<<endl;
    cout<<ptr-arr<<endl;

    int cnt=count(arr,arr+5,2);
    cout<<cnt<<endl;

    int *ptr2=search(arr,arr+5,arr2,arr2+1);
    cout<<ptr2-arr<<endl;

    merge(arr,arr+5,arr2,arr2+2,dst);

    sort(arr3,arr3+5);

    for(int i=0;i<5;i++)
        cout<<arr3[i];

    cout<<endl;
    for(int i=0;i<7;i++)
    cout<<dst[i]<<" ";

}