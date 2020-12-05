//#include <iostream>
//#include <iomanip>
//#include <math.h>
//#include<windows.h>
//using namespace std;
//
//float A[15][15];
//int m, n;
//float temp[15];
//float d, value;
//
//
//int main() {
//	while (1) {
//		cin >> m >> n;
//		if (m == 0 && n == 0) break;
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> A[m][n];
//			}
//		}
//		for (int k = 0; k < n - 2; k++) {
//			double maxv = 0;
//			int hang = 0;
//			for (int j = k; j < n - 1; j++) {     //找每列最大值
//				maxv = max(maxv, abs(A[j][k]));
//				hang = j;
//			}
//			if (A[hang][k] == 0) break;
//			if (k != hang) {                        //换行
//				for (int i = 0; i < m + 1; i++) {
//					temp[i] = A[k][i];
//					A[k][i] = A[hang][i];
//					A[hang][i] = temp[i];
//				}
//			}
//			for (int i = k + 1; i < m; i++) {
//				value = A[i][i] / A[k][k];
//				for (int j = 0; j < n; j++) {
//					A[i][j] = A[i][j] - value * A[k][j];
//				}
//			}
//		}
//		memset(temp, 0, 15 * sizeof(float)); //将temp清0，准备存放解向量
//		for (int i = m - 1; i >= 0; i--) {
//			d = 0;
//			for (int j = 0; j < n - 1; j++)
//			{
//				d = d + temp[j] * A[i][j];
//			}
//			temp[i] = (A[i][n - 1] - d) / A[i][i];
//		}
//		for (int i = 0; i < m; i++)
//		{
//			cout << "( " << fixed << setprecision(5) << temp[i];//5位小数
//		}
//		cout << " )" << endl;
//	}
//	return 0;
//}