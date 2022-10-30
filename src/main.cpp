#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	while (cin >> a >> b) {
		if (0 == a && 0 == b) {
			break;
		}

		// c + a + b = 3a
		const auto& c = 2 * a - b;
		cout << c << '\n';
	}

	return 0;
}