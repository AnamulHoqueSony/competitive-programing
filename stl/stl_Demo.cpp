#include<bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
  return x>y;
}
void vectorDem()
{
  vector<int> A = {11,2,3,14};
  //cout<< A[1] <<endl;

  //sort(A.begin(),A.end());
  bool present = binary_search(A.begin(),A.end(),3);
  present = binary_search(A.begin(),A.end(),4);
  cout<< present <<endl;
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);

  A.push_back(123);
  auto it1 = lower_bound(A.begin(),A.end(),100);
  auto it2 = upper_bound(A.begin(),A.end(),100);

  cout<< *it1 <<" "<< *it2<<endl;
  cout<< it2 - it1<<endl;

  for(int &x: A)
  {
    x++;
    //cout<<x<<" ";
  }
  for(int x: A)
  {
  
    //cout<<x<<" ";
  }
  sort (A.begin(),A.end(),f);
  for(int x : A)
  {
    cout<<x<<" ";
  }

}
void mapDemo()
{
  map<int , int> A;
  A[1] = 100 ;
  A[2] = -1 ;
  A[3] = 200;
  A[1000002] = 1;
  map<char,int> cnt ;
  string x = "rachit jain";
  for(char c : x){
    cnt[c]++;
  }
  cout<< cnt['a']<<" "<< cnt['z']<<endl;
}
void setDemo()
{
  set<int>s;
  s.insert(-10);
  s.insert(-1);
  s.insert(1);
  s.insert(12);
  for(int x:s)
  {
    cout<< x <<" ";
  }
  cout<<endl;

  auto it = s.find(-1);
  if(it == s.end())
  {
    cout<< " not present \n"<<endl;
  }
  else
  {
    cout << "present "<<endl;
    cout << *it <<endl;
  }
  
  auto it2 = s.upper_bound(2);
  auto it3 = s.upper_bound(-10) ;

  cout << *it2 << " "<<*it3;
  auto it4 = s.upper_bound(100);
  if(it4 == s.end())
  {
    cout<<"oops i cant get any number like that"<<endl;
  }

}
void PowersSet()
{
  set<pair<int,int>
}
int main()
{
   // vectorDem();
   //setDemo();
   //mapDemo();

}