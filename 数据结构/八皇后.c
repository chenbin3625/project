#include <bits/stdc++.h>
using namespace std;
int n, ans;
int a[20];  //每一行放的位置，第i行放在a[i]列
void f(int dep) {
    if (dep > n) {
    	for(int i=1;i<=n;i++){
    		cout<<a[i]<<" ";
		}
		cout<<endl;
        ans++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        bool flag = true;
        //检测与前面的是否冲突 (dep,i),(j,a[j])
        for (int j = 1; j < dep; j++)
            if (i == a[j] || dep + i == j + a[j] || dep - i == j - a[j]) {
                flag = false;
                break;
            }
        if (flag) {
            a[dep] = i;
            f(dep + 1);
        }
    }
}
int main() {
    cin >> n;
    ans = 0;
    //第一层开始做
    f(1);
    cout << ans;
    return 0;
}
