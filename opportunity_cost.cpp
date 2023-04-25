#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    vector<double> x(n), y(n), z(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i] >> z[i];
    double max_dist = 0;
    int central_point = 0;
    for (int i = 0; i < n; i++) {
      double min_dist = 1e18;
      for (int j = 0; j < n; j++) {
        if (i != j) {
          double dist = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2) + pow(z[i] - z[j], 2));
          min_dist = min(min_dist, dist);
        }
      }
      if (min_dist > max_dist) {
        max_dist = min_dist;
        central_point = i;
      }
    }
    cout << central_point + 1 << " " << x[central_point] << " " << y[central_point] << " " << z[central_point] << endl;
  }
  return 0;
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