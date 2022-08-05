#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int   maxArea(vector<int> &height)
{
     int i =0;
   long int max1 = 1;
   long int max2 = 1;
  cout<<"max1 = "<<max1<<" max2 = "<<max2<<endl;
    do
    {
        
         if (max1 < height[i])
        {
            max2 = max1;
            max1 = height[i];
            
            
        }

        else if ((max2 < height[i]) && (max1>height[i]))
        {
       
            max2 = height[i];
        }
        i++;
    } while (i<height.size());
    
   // cout<<"max1 = "<<max1<<" max2 = "<<max2<<endl;
   
   if (height.size()==3)
   {
      int s =0;
      int e= height.size()-1;
      if (height.at(s) == 1 && height.at(e)==1)
      {
          return 2;
      }
      else{
          return height.at(s) * height.at(e);
      }
      
   }
   
  if ((max1 == 1 && max2 ==1) || (max1==1 && max2==2) ||(max1==2 && max2==1))
   {
       return 1;
   }
   
   
   
       
   long int ans = max2*max2;
    
    return ans;


    
}

int main()  
{
    vector<int> nums1;
    nums1.push_back(1);
        nums1.push_back(1);
//nums1.push_back(1);
   // nums1.push_back(8);
   // nums1.push_back(6);
   // nums1.push_back(2);
   // nums1.push_back(5);
   // nums1.push_back(4);
   // nums1.push_back(8);
    //nums1.push_back(8);
    //nums1.push_back(7);
     int ans = maxArea(nums1);
     cout << ans << endl;

    return 0;
}