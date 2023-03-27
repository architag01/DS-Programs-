#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5};
    arr.push_back(11);

    cout<<arr.size();
    cout<<arr.capacity();
    return 0;

}