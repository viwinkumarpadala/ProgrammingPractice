#include <bits/stdc++.h>
using namespace std;

int count_digits_brute(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
    // T.C: O(N)
    // S.C: O(1)
}

int count_digits_optimal(int n){
    // log 10 gives the number of zeros, and +1 will give the number of digits
    int count=0;
    count=(int)(log10(n)+1);
    return count;
    // T.C: O(log10N)
    // S.C: O(1)
}

int reverse_number(int n){
    int ans=0;
    while(n>0){
        int res=n%10;
        ans=ans*10+res;
        n/=10;
    }
    return ans;
    // T.C: O(N)
    // S.C: O(1)
}

bool checkPalindrome(int n){
    int rev=reverse_number(n);
    if(rev==n){
        return 1;
    }
    return 0;
    // T.C: O(log10N+1)
    // S.C: O(1)
}

int main(){
    // Taking inputs and outputs
    int x,y;
    cin>>x>>y;
    cout<<x<<" "<<y<<endl;

    // Data types
    char c='c';
    int i=1;
    float f=1.0;
    double d=1.0;
    long l=1;
    long long ll=1;

    // Printing sizes: 1 4 4 4 8 8 ( size of long can be varied between devices can be 4 or 8)
    cout<<sizeof(c)<<" "<<sizeof(i)<<" "<<sizeof(f)<<" "<<sizeof(l)<<" "<<sizeof(d)<<" "<<sizeof(ll)<<" "<<endl;

    // if else statements
    if(x>y){
        cout<<"x is greater than y"<<endl;
    }
    else if(x<y){
        cout<<"x is less than y"<<endl;
    }

    // switch statements
    // Note: If break is not applied then it will continuosly execute the next ones until the end or until break
    // Switch statements are supported by only int type and char type
    // default case is optional
    switch(x){
        case 1:
        cout<<"x is 1"<<endl;
        break;
        case 2:
        cout<<"x is 2"<<endl;
        break;
        case 3:
        cout<<"x is 3"<<endl;
        break;
        case 4:
        cout<<"x is 4"<<endl;
        break;
        case 5:
        cout<<"x is 5"<<endl;
        break;
        case 6:
        cout<<"x is 6"<<endl;
        break;
        default:
        cout<<"x is 1"<<endl;
        break;
    }

    // Arrays vs strings:
    // Arrays are fixed size and strings are dynamic size
    // Arrays are stored in contiguous memory and strings are stored in non-contiguous memory
    // Arrays have a collection of characters of a same data type, whereas string is a collection of characters represented with a single data type called string
    // strings have more library support
    // Both arrays and strings provide O(1) access time to their elements.
    // Arrays are faster than strings in terms of access time.
    // String operations (especially with std::string) can be more complex and slower compared to basic array operations, particularly when involving frequent resizing or concatenation.
    
    // For loops: when fixed number of iterations are required, this is prefered
    for(int i=0;i<5;i++){
        cout<<i<<endl;
    }
    // while loop: when we dont know the number of iterations, this is prefered(execute a block of code repeatedly until a certain condition is met)
    int k=0;
    while(k<5){
        cout<<k<<endl;
        k++;
    }
    // do while loop: when we want to execute a block of code at least once, this
    // is prefered
    int m=0;
    do{
        cout<<m<<endl;
        m++;
    }while(m<5);

    // Pass by value vs pass by reference
    // Pass by value: when we want to pass a copy of the variable to the function, this is prefered
    // Pass by reference: when we want to pass the address of the variable to the function, this is prefered
    
    // Time complexity: number of steps will it take to execute: O(number of steps)
    // Space complexity: number of memory locations will it take to execute: O(number of memory locations)
    // We will always calculate the time complexity for the worst-case scenario.
    // We will avoid including the constant terms.
    // Big O: worst case time complexity ; upper bound
    // Big Omega: best case time complexity ; lower bound
    // Big Theta: average case time complexity ; tight bound

    // count digits:
    int temp=1234321;
    cout<<count_digits_brute(temp)<<" "<<count_digits_optimal(temp)<<endl;
    // reverse number:
    cout<<reverse_number(temp)<<endl;
    // check palindrome
    cout<<checkPalindrome(temp)<<endl;
    return 0;
}