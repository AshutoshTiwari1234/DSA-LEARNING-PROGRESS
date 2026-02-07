//this progam ia also can be used to find minimum element.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number Of elements:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];//To find min let minimum be first element
    for(int ele:arr){
        if(ele>max){//here arrow will reverse for find minimum ele.
            max=arr[0];
        }
    }
       cout<<"largest element in the array is :"<<max<<endl;
       return 0;
}