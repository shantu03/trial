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
