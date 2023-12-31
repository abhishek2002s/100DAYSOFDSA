#include <bits/stdc++.h>
using namespace std;
//Seive of Erosthesis  Algo to find prime number::::

vector<bool>Sieve(int n){

        vector<bool>prime(n,true);
int ans = 0;
prime[0] = prime[1] = false;

//  i*i<=n // optimization 2
        for(int i=2;i<sqrt(n);i++)
        {
            if(prime[i]){
                // ans++;
            
            // int j =2*i;

            int j =i*i; //optimization 1
            //first umarked number would be i*i,as others have been marked by zero(i*2)
           
            while(j<=n){
                prime[j] = false;
                j+=i;
            }
            }
        }
        return prime;
    }

    vector<bool> segSieve(int L,int R){

        //get no. primary array , i will use it tom mark seg sieve.
        vector<bool>sieve=Sieve(sqrt(R));
        vector<int>basePrimes;

        for(int i=0;i<sieve.size();i++)
        {
            if(sieve[i]){
                basePrimes.push_back(i);
            }
        }
        vector<bool>segSieve(R-L+1,true);

        if(L==1 || L==0)
        {
            segSieve[L] = false;
        }

        for(auto prime:basePrimes)
        {
            int first_mul = (L / prime)*prime;
            if(first_mul<L){
                first_mul+=prime;
            }

            int j = max(first_mul,prime*prime);

            while(j<= R)
            {
                segSieve[j- L] = false;
                j +=prime;
            }
        }
        return segSieve;
    }

    int main()
    {
        // vector<bool>sieve = Sieve(25);
        // for(int i =0 ;i<=25;i++){
        //     if(sieve[i])
        //     {
        //      cout<<i<<" "; 
        //     }
        // }

        int L = 110;
        int R = 130;
        vector<bool>sSieve = segSieve(L,R);

        for(int i=0;i<sSieve.size();i++)
        {
            if(sSieve[i])
            {
                cout<<i + L<<" ";
            }

        }
    }