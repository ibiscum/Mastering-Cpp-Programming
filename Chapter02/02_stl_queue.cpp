#include <algorithm>
#include <iostream>
#include <iterator>
#include <queue>
using namespace std;

int main() {

  queue<int> q;

  q.push(100);
  q.push(200);
  q.push(300);

  cout << "\nValues in Queue are ..." << endl;
  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }

  return 0;
}
