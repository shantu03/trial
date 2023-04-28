#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  while (cin >> N) {
    vector<int64_t> X(N), Y(N), Z(N);
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i] >> Z[i];
    vector<int64_t> ret(N);
    for (int b = 1; b < 7; b++) {
      int64_t mx = 0;
      for (int i = 0; i < N; i++) {
        int64_t cur = (b&1 ? X[i] : 0) + (b&2 ? Y[i] : 0) + (b&4 ? Z[i] : 0);
        mx = max(mx, cur);
      }
      for (int i = 0; i < N; i++) {
        int64_t cur = (b&1 ? X[i] : 0) + (b&2 ? Y[i] : 0) + (b&4 ? Z[i] : 0);
        ret[i] = max(ret[i], mx - cur);
      }
    }
    int64_t mn = 1e18, mni = 0;
    for (int i = 0; i < N; i++) {
      if (ret[i] < mn) { mn = ret[i]; mni = i; }
    }
    cout << mn << ' ' << mni+1 << endl;
  }
}

/*
#include <iostream>
using namespace std;

int main() {
   
    int cost_option_1;
    cout << "Enter the cost of the first option: ";
    cin >> cost_option_1;

    int benefit_option_1;
    cout << "Enter the benefit of the first option: ";
    cin >> benefit_option_1;

    int cost_option_2;
    cout << "Enter the cost of the second option: ";
    cin >> cost_option_2;

    int benefit_option_2;
    cout << "Enter the benefit of the second option: ";
    cin >> benefit_option_2;

    // Calculate the net benefit of each option
    int net_benefit_option_1 = benefit_option_1 - cost_option_1;
    int net_benefit_option_2 = benefit_option_2 - cost_option_2;

    // Calculate the opportunity cost
    int opportunity_cost = abs(net_benefit_option_1 - net_benefit_option_2);

    cout << "The opportunity cost is: " << opportunity_cost << endl;

    return 0;
}

*/