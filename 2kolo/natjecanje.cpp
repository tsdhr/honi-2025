#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  vector<int> zgrade(100);
  cin >> n;

  int visina;
  for (int i = 0; i < n; i++) {
    cin >> visina;
    zgrade.push_back(visina);
  }

  int zgrada = 1;
  for (int i = 0; i < n - 1; i++) {
    if (zgrade[i + 1] >= zgrade[i] + 2) {
      break;
    }
    zgrada++;
  }
  cout << zgrada << endl;
  cout << "proba";
}
