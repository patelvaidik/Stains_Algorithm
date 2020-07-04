//--------------------Vaidik Patel(DAIICT)-----------------------------//
//-------------------Proud to be Indian--------------------------------//
#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp> // include the associative containers or group of templates such as set,multi multimap, map etc.
#include<ext/pb_ds/tree_policy.hpp> // include the tree_order_statistics_node update
using namespace __gnu_pbds;
#define int long long int
#define ld long double
#define pii pair<int,int>
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set; // find_by_order()
#define deb1(x) cout<<#x<<" : "<<x<<"\n";
#define deb2(x,y) cout<<#x<<": "<<x<<" "<<#y<<": "<<y<<"\n";
#define deb3(x,y,z) cout<<#x<<": "<<x<<" "<<#y<<": "<<y<<" "<<#z<<": "<<z<<"\n";
#define deb4(x,y,z,w) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<"\t"<<#w<<" : "<<w<<endl;
#define deb5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl;
#define deb6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,a,b) for(int i=a;i>=b;i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pii>
#define M 1000000007
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int powermodm(int x,int n,int m)
{int ans=1;   while(n){if(n&1){ans=(ans*x)%m;}x=(x*x)%m;n=n>>1;}return ans;}



int FastBinaryGCD(int a,int b)  // Stein’s algorithm
{

		if(!a || !b)
		{
			//this condition cover 3 case: gcd(0,0)=0 , gcd(a,0)=a , gcd(0,b)=b
			return a|b;
		}
		//__builtin_ctz(N) this function find # of trailing zeros in it's binary representation.

		int shift=__builtin_ctz(a|b); //pow(2,shift) divides both a and b.

		a=a>>__builtin_ctz(a); //now a become odd number.

		b=b>>__builtin_ctz(b); // now b become odd number.

		while(!(b==0 || a==b))
		{
				//this loop continue untill a==b or (b==0 where assume that a>=b)
				if(a<b)
				{
					swap(a,b);
				}
				// now a>=b

				a=a-b; //now a is even;

				a=a>>__builtin_ctz(a); //now a is odd;
		}

		return a<<shift; //  final ans is (a * pow(2,shift)).
}

void solve()
{
	int a,b;
	cin>>a>>b;
	int ans=FastBinaryGCD(a,b);
	cout<<ans<<"\n";
	/*
		" Stain's Algo "

		-> Stein’s algorithm replaces division with arithmetic shifts, comparisons, and subtraction.

		-> Time Complexity:O(N*N) where N is Number of bits in it's binary representation.

		-> Let assume Na = no of bits of a and Nb = no of bitd of b.
		Na= ceil(log2(a));
		Nb= ceil(log2(b));

		O(Na * Nb) =======> O(log2(n)*log2(n)) ========> O(log2(n)^2) ==========> O(2* log2(n)) =======>O(log2(n)).

		So this algo take approximately O(log2(n)).

		-> In theory, binary GCD can be about 60% more efficient (in terms of the number of bit operations) on average than the Euclidean algorithm.


		//Reference Link:http://www.cse.unt.edu/~tarau/teaching/PP/NumberTheoretical/GCD/Binary%20GCD%20algorithm.pdf
	*/

}
signed main()
{
		#ifndef ONLINE_JUDGE
		freopen("ip.txt","r",stdin);
		freopen("op.txt","w",stdout);
		#endif
		FIO
		int t;
		t=1;
		//cin>>t;
		FOR(i,0,t)
		{
				solve();
		}
}
