#include <stdio.h>
#include <time.h> // measuring run time

int n, t;
int A[100000000];

int linear_search(int A[], int n, int t) {
    // write you code
    // linear complexity n
    for (int i=0;i<n;i++){
        if (A[i]==t){
            printf("%s %d\n","Lin found", A[m]);
            return 1;
        }
        
    }

    return 0; // not found
}

int binary_search(int A[], int n, int t) {
    // write your code
    // log complexity log n
    int l = 0;
    int r = n-1;
    int m;
    while (l<=r){
        m=(l+r)/2;
        if (A[m] == t){
            printf("%s %d\n","Bin found", A[m]);
            return 1;
        }
        if (t<A[m]){
            r=m-1;
        }
        else{
            l=m+1;
        }
        
    }
    
    return 0;
    // not found
    
    
    
}

int main() {
    clock_t start, end;
    printf("Enter an integer for n: ");
    scanf("%d", &n); 
    printf("Generate an array with %d distinct integers from 1 to %d.\n", n, n);
    for(int i = 0; i < n; i++) A[i] = i + 1;
    printf("Enter an integer for t: \n");
    scanf("%d", &t); 

    
    start = clock();
    linear_search(A, n, t); // your implementation
    end = clock();
    double run_time = ((double)(end - start))/(CLOCKS_PER_SEC/1000);
    printf("Linear search takes : %f millseconds\n", run_time); 
    

    start = clock();
    binary_search(A, n, t); // your implementation
    end = clock();
    double run_time2 = ((double)(end - start))/(CLOCKS_PER_SEC/1000);
    printf("Binary search takes : %f millseconds\n", run_time2); 
}