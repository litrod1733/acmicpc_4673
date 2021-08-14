//
// Created by 이인성 on 2021/08/14.
//

#include <cstdio>

using namespace std;

int getSelfNum(int n) {
  int self_num = n;
  while(n) {
    self_num += n%10;
    n /= 10;
  }
  return self_num;
}

int main() {
  int self_number[10001];
  for(int i=0; i<10001; i++) {
    self_number[i] = i;
  }
  for(int i=0; i<10001; i++) {
    int m;
    m = getSelfNum(i);
    if(m < 10001) {
      self_number[m] = 0;
    }
  }
  for(int i=0; i<10001; i++) {
    if(self_number[i] != 0) {
      printf("%d\n", self_number[i]);
    }
  }
  return 0;
}