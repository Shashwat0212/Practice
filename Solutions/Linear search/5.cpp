#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin >> t;
    while(t--) {
        int n;
        cin >> n;
		bool f = true;
        if(n < 21){
            f = true;
        }
        else if(n % 21== 0){
            f = false;
        }
        else{
            string s = to_string(n) ;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '2' && s[i+1] == '1'){
                    f = false;
					break;
                }
            }
        }
        if(f)
			cout << "The streak lives still in our heart!" << '\n';
		else
			cout << "The streak is broken!" << '\n';
    }
}