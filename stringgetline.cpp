#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
using namespace std;
void init_code()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

// *************************************************************


// here are two cin statements for integer and string, but only number is taken. 
// When we press enter key, it skips the getLine() function without taking any input. 
// Sometimes it can take input but inside the buffer of integer variable, so we cannot 
// see the string as output.

// Now to resolve this issue, we will use the cin.ignore() function. 
// This function is used to ignore inputs upto given range. 
// If we write the statement like this −


int main()

{   
      init_code();
        
        // int n;
        // cin>>n;
        //  cout<<n<<endl;
        //  cin.ignore();
        // string s, t;
        // getline(cin,s);
        // // stringstream X(s);  
        // stringstream X;
        // X << s;    // reading the the string storing in  X
          
        //   int cnt =0 ;
        // while(getline(X, t , ' ') ) // extracting every word from the sentence
        // {
        //     cout<<t<<endl;
        //     cnt++;   // counting total number of words.
        // }
             

         int n;
        cin>>n;
         cin.ignore();
        string s, t;
        getline(cin,s);
        int x;
        cin>>x;
        // stringstream X(s);  
        stringstream X;
        X << s;    // reading the the string storing in  X
          int cnt = 0;
        while(getline(X, t , ' ') ) // extracting every word from the sentence
        {
             int num = stoi(t);

             if(num > x) cnt++;
             

        }
          
          double prob = (cnt/(1.0* n));
          cout<<cnt<<" "<<n<<endl;

          cout<<fixed<<setprecision(2)<<prob<<endl;
          // cout<<prob<<endl;

}


