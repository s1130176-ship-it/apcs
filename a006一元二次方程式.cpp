int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	int D =pow(b, 2) - 4 * a * c;
	if (D == 0) {
		int roots = -b / (2 * a);
		cout << "Two same roots x=" << roots << "\n";
	}else if (d > 0) {
		int x =-b;
		int y = sprt(D);
		cout << "Two different roots x1="<<(x - y) / (2 * a) <<" ,x2=" <<(x - y) / (2 * a) << "\n";
	}else {
		cout << "No real root";
	}
	
	return 0;
