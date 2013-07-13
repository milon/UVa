//UVa Ppproblem-10551(Basic remains)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int power(int base, int exp);

int main(){
    int b, p_len, m_len, m_value, s;
    char p[1002], m[11];
    while(cin >> b){
        if(b == 0)
            break;
        cin >> p >> m;
        m_len = strlen(m);
        m_value = 0;
        for(int i = m_len - 1, j = 0; i >= 0, j < m_len; i--, j++){
            int t = ( m[i] - 48 ) * power(b, j);
            m_value += t;
			}
        s = 0;
        p_len = strlen(p);
        for(int i = 0; i < p_len; i++){
            s *= b;
            s += ( p[i] - 48 );
            s %= m_value;
			}
        if(s == 0)
            cout << "0" << endl;
        else{
            int exp = int(floor(log(s) / log(b)));
            for(int i = exp; i >= 0; i--){
                int tmp = power(b,i);
                cout << s / tmp;
                s %= tmp;
				}
            cout << endl;
			}
		}
    return 0;
	}

int power(int base, int exp)
{
    int answer = 1;
    for(int i = 0; i < exp; i++)
        answer *= base;
    return answer;
}

