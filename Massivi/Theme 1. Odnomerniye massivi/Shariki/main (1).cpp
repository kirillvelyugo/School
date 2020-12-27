#include <iostream>
 
int N;
int* m;
 
int go(int& L, int& R)
{   if(m[L] != m[R]) return 0;
 
    int cnt   = 2;
    int color = m[L];
    
    while(--L >= 0)
    {   if(m[L] == color) cnt++;
        else break;
    }
    
    while(++R < N)
    {   if(m[R] == color) cnt++;
        else break;
    }
    
    if(cnt > 2) return cnt + go(L, R);
    return 0;
}
 
int main()
{
    std::cin >> N; m = new int[N];
    
    int left  = -1;
    int right = -1;
    
    for(int i = 0; i < N; i++) std::cin >> m[i];
    
    for(int i = 0; i < N-2; i++)
    {   if((m[i] == m[i+1]) && (m[i] == m[i+2]))
        {   left  = i;
            right = i+1;
            break;
        }
    }
    
    if(left == -1) std::cout << 0;

    else           std::cout << go(left, right);
    
    delete[] m;
    return 0;
}