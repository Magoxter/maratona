#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <fstream>
#include <functional>
#include <iomanip>

using namespace std;

#define PI acos(-1)
#define cnt PI/180
#define INF 99999999
typedef vector<vector<pair<int, int> > > graph;

bool mapefy (string S, string A, string B){
	
	map<char, int> mapa;
	mapa['?'] = 100;

	for (int i=0; i<A.size(); i++)
		mapa[A[i]] += 1;
	
	for (int i=0; i<B.size(); i++)
		mapa[B[i]] += 1;

	for (int i=0; i<S.size(); i++){
		mapa[S[i]] -= 1;
		if (mapa[S[i]] < 0) return false;
	}

	return true;
}

class MergeStrings {
	public:
	string getmin(string S, string A, string B) {
		
		if (!mapefy (S, A, B))
			return " ";

		
	}
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const string &expected, const string &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: \"" << expected << "\"" << std::endl; 
			std::cerr << "    Received: \"" << received << "\"" << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			string S                  = "??CC??";
			string A                  = "ABC";
			string B                  = "BCC";
			string expected__         = "ABCCBC";

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string S                  = "WHAT?";
			string A                  = "THE";
			string B                  = "WA";
			string expected__         = "";

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string S                  = "PARROT";
			string A                  = "PARROT";
			string B                  = "";
			string expected__         = "PARROT";

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string S                  = "???????????";
			string A                  = "AZZAA";
			string B                  = "AZAZZA";
			string expected__         = "AAZAZZAAZZA";

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string S                  = "????K??????????????D???K???K????????K?????K???????";
			string A                  = "KKKKKDKKKDKKDDKDDDKDKK";
			string B                  = "KDKDDKKKDDKDDKKKDKDKKDDDDDDD";
			string expected__         = "KDKDKDKKKDDKDDKKKDKDKKDKDDDKDDDKKDKKKDKKDDKDDDKDKK";

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string S                  = ;
			string A                  = ;
			string B                  = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string S                  = ;
			string A                  = ;
			string B                  = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string S                  = ;
			string A                  = ;
			string B                  = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = MergeStrings().getmin(S, A, B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}


#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
