/*# include <bits/stdc++.h>
using namespace std;
void print (int,int);
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    print(1,n);
    return 0;
}

void print (int x,int n)
{
    if (x == n+1)
       return;
    print(x+1,n);
    cout << x << endl;
    return;   
}*/

//n times 'Good Morning'

# include <bits/stdc++.h>
# include <string>
void print(int,std :: string);
int main()
{
    int n;
    std :: string a;
    std :: cout << "Enter a number : ";
    std :: cin >> n;
    std :: cin.ignore();
    std :: cout << "Enter something : "; //due to \n in the buffer getline skips input process
    std :: getline(std :: cin,a);
    print(n,a);
}

void print(int n,std :: string s)
{
    if (n == 0)
       return;
    print(n-1,s);
    std :: cout << n << " " << s << std :: endl;
    return;
}