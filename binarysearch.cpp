#include <iostream>
using namespace std;

int binary(int arr[], int key, int start, int end)
{
 
//    int mid = (start + end) / 2;
int mid = start+ (end -start)/2;
    while (start <= end)
    {
        

        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
            {
                end = mid - 1;
            }
            mid = start+ (end -start)/2;

    }
            return -1;

}

int main()
{
    int arr[6] = {12, 13, 14, 15, 16, 17};
     int size = sizeof(arr)/sizeof(int);
    int start = 0;
    
    int res = binary(arr, 10, start, size);
    cout << res<<endl;
   
    // cout<<size;
    return 0;
}