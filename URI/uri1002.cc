#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef long long ll;
typedef vector<vector<int> > graph;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f

int main (){
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  double pi = 3.14159;
  double r;
  cin >> r;
  cout << fixed << setprecision(4) << "A=" << r*r*pi << endl;
  
  return 0;
}
