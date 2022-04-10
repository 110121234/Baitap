#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Nhap kich thuoc mang n  = ";
	cin  >> n;
	int arr[n];
	int i;
	for (i = 0; i < n; i++) {
		cout << "Nhap phan tu mang thu " << i << ": ";
		cin >> arr[i];
	}
	int c = INT_MIN; // c la chieu rong toi da 
	int x = 0, y = 0, index_start = 0; // x la chieu rong toi da ban dau , y la chieu rong toi da sau cung 
	for ( i = 0; i < n; i++) {
		int sum = 0; int j;
		for(j = i; j < n; j++) {
			if (sum + arr[j] < arr[j]) {
				sum = arr[j];
				index_start = j;
			} else {
				  sum += arr[j];
			}
			if (c < sum) {
				c = sum;
				x = index_start;
				y = j;
			}
		}
	}
    cout << c << "\n";
    cout << "bat dau tu " << x << " den " << y << "\n";
	return 0;
}
