#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
//      continue;
	break;
    }
    cout << i << "\n";
  }   
  return 0;
}

