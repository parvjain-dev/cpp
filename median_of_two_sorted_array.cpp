#include<iostream>
#include<vector>
#include<math.h>
// #include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int size= nums1.size()+nums2.size();
        vector<int> nums3(size);
         int index =0;
        int i =0, j=0, k=0;
        while(i<nums1.size() &&j<nums2.size()){
             if(nums1[i]<=nums2[j]){
                 nums3[k]=nums1[i];
                 k++;
                 i++;
             }
            else{
                nums3[k] = nums2[j];
                k++;
                j++;
            }
            // cout<<"check1"<<endl;
        }
        while(i<nums1.size()){
            nums3[k] = nums1[i];
            k++;
            i++;
                        // cout<<"check1"<<endl;

        }
        while(j<nums2.size()){
            nums3[k] =nums2[j];
            k++;
            j++;
                        // cout<<"check1"<<endl;

            
        }





         vector<int> ::iterator itstart = nums3.begin();
         vector<int> ::iterator itend = nums3.end()-1;
        
         double mid = (*itstart) +(*itend)/2;
        // double res = mid + (mid+1)/2;
        // return res;

  

         
if (nums3.size()+1 %2 !=0) 
{
    return mid;
}
else{

// auto it = find(nums3.begin(), nums3.end(), mid);
  
//     // If element was found
//     if (it != nums3.end()) 
//     {
      
//         // calculating the index
//         // of K
//   index = it - nums3.begin();
//         cout << index << endl;
//     }
        
//         int preindex = index -1;
//         // cout<<"preindex"<<preindex<<endl;
//   int previousnum = nums3.at(preindex);
// //   cout<<"prevnum -->" <<previousnum<<endl;
//        double res = ((mid) + (previousnum))/2;
//   return res;
   

return mid;
}

     

    }



int main(){



vector<int> nums1 ;
nums1.push_back(1);
nums1.push_back(3);

vector<int> nums2;
nums2.push_back(2);
 nums2.push_back(4);


double res = findMedianSortedArrays(nums1,nums2);
cout<<"result ="<<res<<endl;

//   int arr1[2] = {1,2};
//   int arr2[2]= {3,4};
// int arr3[4] ={0};
// double res = merge(arr1,2,arr2,2,arr3);

//   for (int i = 0; i <4; i++)
//   {
//       cout<<arr3[i]<<endl;
//   }
//   cout<<endl;
//   cout<<res<<endl;
  
return 0;
}






// double merge(int arr1[] ,int size1, int arr2[], int size2 , int arr3[]){
//     int size3 = size1+size2;
//     int i =0 , j =0, k=0;

//     while (i<size1 && j<size2)
//     {
//        if (arr1[i] <=arr2[j])
//        {
//            arr3[k] =arr1[i];
//            k++;
//            i++;
//        }
//        else{
//            arr3[k] =arr2[j];
//            k++;
//            j++;
//        }
       
//     }
//     while (i<size1 )
//     {
//           arr3[k] =arr1[i];
//            k++;
//            i++;
//     }
//    while(j<size2)
//    {
//        arr3[k] = arr2[j];
//        k++;
//        j++; 
//    }
    
//     int s = 0;
//     int e = 4;
//     int mid = s+e/2;
//     double res = (arr3[mid+1])+arr3[mid] /2;

//     return res;

// }

// void merge(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3){
//     int i =0; 
//     int j=0 ;
//     int k=0 ;
    

//     while (i <= nums1.size() && j<=nums2.size())
//     {
//         if (nums1[i] <= nums2[j])
//         {
//             nums3[k] = nums1[i];
//             i++;
//             k++;
//         }
//         else{
//             nums3[k] = nums2[j];
//             k++;
//             j++;
//         }
        
//     }
    
// }





// bool found = false;
//          for (int p = 0; p < nums3.size(); p++)
//          {
//              if (nums3[i] == mid)
//              {
//                  cout<<"position is "<<i<<endl;
//                  found = true;
//                   break;
//              }
//              else{
//                 //  cout<<"not found"<<endl;
//              }
//          }