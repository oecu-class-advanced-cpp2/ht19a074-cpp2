#define CPP2_PRIME_UPPER_LIMIT 1000000 
#include <iostream> 
using namespace std;

bool is_prime(int num) {
	if (num == 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int nth_prime(int a, int b, int n) {
	int count = 0;
	int e = a;
	if (0 >= b && 0 >= e && 0 >= n) {
		return 0;
	}

	while (e < CPP2_PRIME_UPPER_LIMIT) {
		if (is_prime(e)) {
			count++;
		}
		if (count == n) {
			break;
		}
		e += b;
	}
	return e;
}

bool hikaku(int num) {
	int list[12] = { 22699,92809,6709,12037,103,93523,14503,2,899429,5107,412717,25673 };
	for (int i = 0; i < 12; i++) {
		if (num == list[i]) {
			return true;
			break;
		}
	}
	return false;
}

int main()
{
	int num = nth_prime(259, 170, 40);

	cout << hikaku(num) << endl;

	int num1 = nth_prime(367, 186, 151);

	cout << hikaku(num1) << endl;

	int num2 = nth_prime(271, 37, 39);

	cout << hikaku(num2) << endl;

	int num3 = nth_prime(179, 10, 203);

	cout << hikaku(num3) << endl;

	int num4 = nth_prime(103, 230, 1);

	cout << hikaku(num4) << endl;

	int num5 = nth_prime(27, 104, 185);

	cout << hikaku(num5) << endl;

	int num6 = nth_prime(253, 50, 85);

	cout << hikaku(num6) << endl;

	int num7 = nth_prime(1, 1, 1);

	cout << hikaku(num7) << endl;

	int num8 = nth_prime(9075, 337, 210);

	cout << hikaku(num8) << endl;

	int num9 = nth_prime(307, 24, 79);

	cout << hikaku(num9) << endl;

	int num10 = nth_prime(331, 221, 177);

	cout << hikaku(num10) << endl;

	int num11 = nth_prime(269, 58, 102);

	cout << hikaku(num11) << endl;


	cout << nth_prime(259, 170, 40) << " " << "22699" << endl;

	cout << nth_prime(367, 186, 151) << " " << "92809" << endl;

	cout << nth_prime(179, 10, 203) << " " << "6709" << endl;

	cout << nth_prime(271, 37, 39) << " " << "12037" << endl;

	cout << nth_prime(103, 230, 1) << " " << "103" << endl;

	cout << nth_prime(27, 104, 185) << " " << "93523" << endl;

	cout << nth_prime(253, 50, 85) << " " << "14503" << endl;

	cout << nth_prime(1, 1, 1) << " " << "2" << endl;

	cout << nth_prime(9075, 337, 210) << " " << "899429" << endl;

	cout << nth_prime(307, 24, 79) << " " << "5107" << endl;

	cout << nth_prime(331, 221, 177) << " " << "412717" << endl;

	cout << nth_prime(269, 58, 102) << " " << "25673" << endl;

	cin.get();
	cin.get();
	return 0;
}