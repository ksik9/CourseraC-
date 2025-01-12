#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//add class definitions below this line

class Median{
  public:
    double CalculateMedian(int n1, int n2, int n3, int n4, int n5){
      vector<int> vect = {n1, n2, n3, n4, n5};
      return Calculation(vect);
    }
    double CalculateMedian(int n1, int n2, int n3, int n4){
      vector<int> vect = {n1, n2, n3, n4};
      return Calculation(vect);
    }
    double CalculateMedian(int n1, int n2, int n3){
      vector<int> vect = {n1, n2, n3};
      return Calculation(vect);
    }
    double CalculateMedian(int n1, int n2){
      vector<int> vect = {n1, n2};
      return Calculation(vect);
    }
  private:

    double Calculation(vector<int> vect){
      double median;
      sort(vect.begin(), vect.end());
      size_t size = vect.size();
      if (size % 2 == 0) {
          median = (vect[size / 2 - 1] + vect[size / 2]) / 2.0;
      } else {
          median = vect[size / 2];
      }
      return median;
}
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}

/*Sample Solution:

class Median {
  public:
    double CalculateMedian(int n1, int n2) {
      return (double) (n1 + n2) / 2;
    }
  
    double CalculateMedian(int n1, int n2, int n3) {
      vector<int> nums = {n1, n2, n3};
      sort(nums.begin(), nums.end());
      return nums.at(1);
    }

    double CalculateMedian(int n1, int n2, int n3, int n4) {
      vector<int> nums = {n1, n2, n3, n4};
      sort(nums.begin(), nums.end());
      return (double) (nums.at(1) + nums.at(2)) / 2;
    }

    double CalculateMedian(int n1, int n2, int n3, int n4, int n5) {
      vector<int> nums = {n1, n2, n3, n4, n5};
      sort(nums.begin(), nums.end());
      return nums.at(2);
    }
};*/
