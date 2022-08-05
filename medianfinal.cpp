#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int size = nums1.size() + nums2.size();
    vector<int> nums3(size);
    int index = 0;
    int i = 0, j = 0, k = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            nums3[k] = nums1[i];
            k++;
            i++;
        }
        else
        {
            nums3[k] = nums2[j];
            k++;
            j++;
        }
    }
    while (i < nums1.size())
    {
        nums3[k] = nums1[i];
        k++;
        i++;
    }
    while (j < nums2.size())
    {
        nums3[k] = nums2[j];
        k++;
        j++;
    }

    //vector<int>::iterator itstart = nums3.begin();
    //vector<int>::iterator itend = nums3.end() - 1;

double s = 0;
double e = nums3.size()-1;
   // cout<<s<<" "<<e<<endl;
    
    

    double mid = (s +e )/2;

  int midtemp = (int)mid;
  //cout<<"mid = "<<mid <<"mid temp = "<<midtemp<<endl;

//THIS IS FOR ODD
    if (nums3.size() %2 !=0) 
{
   // cout<<" nums3 size ="<<nums3.size()<<endl;
   double ans = nums3.at(midtemp);
    return ans;
}

//THIS IS FOR EVEN
else{
   
   int ans1 = nums3.at(midtemp);
   double aans1 = (double)ans1;
   int temp2 = midtemp+1;
   int ans2 = nums3.at(temp2);
    double aans2 = (double)ans2;
  double ans = (aans1+aans2) /2;
   
   return ans;
}

      //  return mid;
    
}

int main()
{

    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(3);
    

    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(7);
   // nums2.push_back(5);


    double res = findMedianSortedArrays(nums1, nums2);
    cout << "result = " << res << endl;

    return 0;
}
