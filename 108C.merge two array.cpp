#include<iostream>
using namespace std;
class merge{
 public:
 void cal()
 {
 int s1,s2;
 cin>>s1;
 cin>>s2;
 int* arr1=new int[s1];
 int* arr2=new int[s2];
 int* arr3=new int[s1+s2];
 for(int i=0;i<s1;i++)
 {
 cin>>arr1[i];
 }

 for(int i=0;i<s2;i++){
 cin>>arr2[i];
 }
 for(int i=0;i<s1;i++)
 arr3[i]=arr1[i];
 for(int i=0;i<s2;i++)
 arr3[s1 + i]=arr2[i];

 for(int i=0;i<s1+s2;i++)
 {
 cout<<arr3[i]<<" ";

 }
 }
};
int main()
{
 merge obj;
 obj.cal();
}
