
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);

int main()
{
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    
    
      return 0;
}


int kthSmallest(int mat[MAX][MAX], int n, int k)
{
     
     int v=0;
     int a[n*n];
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             a[v]=mat[i][j];
             v++;
         }
     }
     sort(a,a+(n*n));
     int result=a[k-1];
     return result;
}
