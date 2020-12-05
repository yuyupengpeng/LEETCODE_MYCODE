//#include<bits/stdc++.h>
//using namespace std;
//const int maxn = 1e3 + 10;
//int m[maxn], p[maxn];
//int ans[maxn], n, k;
//int main()
//{
//    while (cin >> n && n)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            cin >> m[i];
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            cin >> p[i];
//            ans[i] = p[i];
//        }
//        cin >> k;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = i - 1; j >= 1; j--)
//            {
//                if (m[i] - m[j] >= k)
//                    ans[i] = max(ans[i], ans[j] + p[i]);
//            }
//        }
//        ans[0] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            if (ans[i] > ans[0])
//            {
//                ans[0] = ans[i];
//            }
//        }
//        cout << ans[0] << endl;
//    }
//    return 0;
//}