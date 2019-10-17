// Name: Shiuhin Chon
// CIS 9310
// Assignment 2

#include <iostream>
using namespace std;

double power(double b, int e){
  int count = 1;
  double result = b;
  bool e_neg=false;

  if (e<0){
    e_neg=true;
    e=e*-1;
  }

  if (e==0){
    return 1;
  }else{
    while(count!=e){
      result = result*b;
      count++;
    }
  }

  if(e_neg){
    return 1/result;
  } else{
    return result;
  }
}

bool MoreData(){
  char ans;
  bool result;

  do{
    cout << "Would you like to continue(y/n)? ";
    cin >> ans;

    if(ans=='y' || ans=='Y')
      return true;
    else if(ans=='n' || ans=='N')
      return false;
    }while(1);
}

double Sqrt(double v){
  double old_v = 1, new_v, diff;

  do{
    new_v = 0.5*(old_v + v / old_v);
    diff = new_v-old_v;

    old_v = new_v;
    if(diff<0) {
      diff = diff*-1;
    }
  }while(diff>=0.005);

  return new_v;
}

int main(){
  int x,y;

  do{
    cout << "Please enter a value for x: ";
    cin >> x;
    cout << "Please enter a value for y: ";
    cin >> y;

    if(x>y){
      int temp;
      temp = x;
      x = y;
      y = temp;
    }

    cout << "N\tN Squared\tSquare Root(N)" << endl;
    for(int i=x; i<=y; i++){
      cout << i << "\t" << power(i,2) << "\t\t" << Sqrt(i) << endl;
    }
  }while(MoreData());

  return 0;
}
