#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int n=0,sum,find = 0, count = 0, line=0;
  ifstream fin;
  fin.open("tripletslist.txt");
  int arr[1000];
  int inc=0;
  while (!fin.eof()){
    fin >> arr[inc];
    inc++;
  }
  cout << "Triplets list: \n";
  for(int i=0;i<inc;i++){
     for(int j=i+1;j<inc;j++){
       for(int k=j+1;k<inc;k++){
         sum = arr[i]+arr[j]+arr[k];
         if(sum==0){
           cout << "("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")\n";
             find = 1;
           count++;
         }
       }
     }
   }
     cout << endl << "The number of triplets found are: " << count;

  if (find==0){
    cout << "No triplets found.\n";
  }
  fin.close();
  return 0;
}