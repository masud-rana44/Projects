#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for(int row=1; row<=2*n-1; row++)
    {  
         int totalColsInRow = row<=n? row : 2*n-row;

        for(int col=1; col<=totalColsInRow; col++){
            cout << "* ";
        }
    cout << endl;
    }
}

void pattern6(int n)
{
    for(int row=1; row<=n; row++)
    {  
        for(int spaces=1; spaces<=n-row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=row; col++){
            cout << "*";
        }
    cout << endl;
    }
}

void pattern7(int n)
{
    for(int row=1; row<=n; row++)
    {  
        for(int spaces=1; spaces<=n-(n+1-row); spaces++){
            cout << " ";
        }

        for(int col=1; col<=n+1-row; col++){
            cout << "*";
        }
    cout << endl;
    }
}

void pattern8(int n)
{
    for(int row=1; row<=n; row++)
    {  
        for(int spaces=1; spaces<=n-row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=2*row-1; col++){
            cout << "*";
        }
    cout << endl;
    }
}

void pattern9(int n)
{
    for(int row=1; row<=n; row++)
    {  
        for(int spaces=1; spaces<row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=2*n-(2*row-1); col++){
            cout << "*";
        }
    cout << endl;
    }
}

void pattern10(int n)
{
    for(int row=1; row<=n; row++)
    {  
        for(int spaces=1; spaces<=n-row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=row; col++){
            cout << "* ";
        }
    cout << endl;
    }
}

void pattern11(int n)
{
    for(int row=1; row<=n; row++)
    {  
        for(int spaces=1; spaces<row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=n+1-row; col++){
            cout << "* ";
        }
    cout << endl;
    }
}

void pattern12(int n)
{
    for(int row=1; row<=2*n; row++)
    {  
        int totalColsInRow = row<=n? n+1-row : row-n;
        int totalSpaces = row<=n? n-totalColsInRow : 2*n-row;

        for(int spaces=1; spaces<=totalSpaces; spaces++){
            cout << " ";
        }
        for(int col=1; col<=totalColsInRow; col++){
            cout << "* ";
            }
    cout << endl;
    }
}

void pattern13(int n)
{
    for(int row=1; row<=n; row++)
    {  
        int totalColsInRow;
        if(row==1)
            totalColsInRow = row;
        if(row==n)
            totalColsInRow = 2*n-1;
        if(row!=1 && row!=n)
            totalColsInRow = 2;

        int totalMidSpaces = row==n? 0 : 2*row-2;

        for(int spaces=1; spaces<=n-row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
            for(int midSpace=1; midSpace<totalMidSpaces; midSpace++){
                cout << " ";
            }
        }
    cout << endl;
    }
}

void pattern14(int n)
{
    for(int row=1; row<=n; row++)
    {  
        int totalColsInRow;
        if(row==1)
            totalColsInRow = 2*n-1;
        if(row==n)
            totalColsInRow = 1;
        if(row!=1 && row!=n)
            totalColsInRow = 2;

        int totalMidSpaces = row==1? 0 : 2*n-(2*row);

        for(int spaces=1; spaces<row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
            for(int midSpace=1; midSpace<totalMidSpaces; midSpace++){
                cout << " ";
            }
        }
    cout << endl;
    }
}

void pattern15(int n)
{
    for(int row=1; row<=2*n-1; row++)
    {  
        int totalColsInRow = row==1 || row==2*n-1? 1 : 2;
        int totalSpaces = row<=n? n-row: row-n;
        int totalMidSpaces = row<=n? 2*row-2 : (2*n)-2*totalSpaces-totalColsInRow;
        for(int spaces=1; spaces<=totalSpaces; spaces++){
            cout << " ";
        }
        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
             for(int midSpace=1; midSpace<totalMidSpaces; midSpace++){
                cout << " ";
            }
        }
    cout << endl;
    }
}

void pattern16(int n)
{
    for(int row=1; row<=n; row++)
    {  
        int num = 1;
        for(int spaces=1; spaces<=n-row; spaces++){
            cout << "  ";
        }

        for(int col=1; col<=row; col++){
           cout << num <<"   ";
           num = num * (row - col) / col;
        }
    cout << endl;
    }
}

void pattern17(int n){
    for(int row=1; row<=2*n-1; row++)
    {   
        int totalColsInRow = n>=row? row : 2*n-row;

    for(int spaces=1; spaces<=n-totalColsInRow; spaces++){
        cout << " ";
    }   
        for(int col=totalColsInRow; col>=1; col--){
            cout << col;
        }
        for(int col=2; col<=totalColsInRow; col++){
            cout << col;
        }

    cout << endl;
 }
}

void pattern18(int n)
{
    for(int row=1; row<=2*n; row++)
    {  
        int totalColsInRow = row<=n? n-row+1 : row-n;
        int totalMidSpaces = row<=n? 2*row-2 : (2*n)-2*totalColsInRow;

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
        }
             for(int midSpace=1; midSpace<=totalMidSpaces; midSpace++){
                cout << " ";
            }

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
        }

    cout << endl;
    }
}

void pattern19(int n)
{
    for(int row=1; row<=2*n-1; row++)
    {  
        int totalColsInRow = row<=n? row : 2*n-row;

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
        }
             for(int midSpace=1; midSpace<=(2*n)-2*totalColsInRow; midSpace++){
                cout << " ";
            }

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
        }

    cout << endl;
    }
}

void pattern20(int n)
{
    for(int row=1; row<=n; row++)
    {  
        int totalColsInRow = row==1 || row==n? n-1 : 2;
        int totalMidSpaces = row==1 || row==n? 0 : n-3;

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
             for(int midSpace=1; midSpace<=totalMidSpaces; midSpace++){
                cout << " ";
            }
        }
    cout << endl;
    }
}

void pattern21(int n)
{   
    int num = 1;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern22(int n)
{   
    int i;
    for(int row=1; row<=n; row++)
    {   
        for(int col=1; col<=row; col++){
        i = (row%2==0)? 0:1;
            if(col%2==0){
                if(i==0)
                    i = 1;
                else
                    i = 0;
            }
        
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern23(int n)
{
    for(int row=1; row<=n; row++){
        int totalColsInRow;
        if(row==1)
            totalColsInRow = 1;
        else if(row==n)
            totalColsInRow = 2;
        else
            totalColsInRow = 2;

        
        for(int spaces=1; spaces <= 2*(n-row); spaces++){
            cout << " ";
        }

        for(int col1=1; col1<=totalColsInRow; col1++){
            cout << "*";
            if(col1==totalColsInRow)
                        continue;
            for(int midSpaces1=1; midSpaces1<=4*row-n+(n-5); midSpaces1++){
                cout << " ";
            }
        }

        for(int spaces=1; spaces <= 4*(n-row); spaces++){
            cout << " ";
        }

        for(int col2=1; col2<=totalColsInRow; col2++){
            if(row==n && col2==1){
                        cout << " ";
                          goto m;
            }
            cout << "*";
            m:
            for(int midSpaces2=1; midSpaces2<=4*row-n+(n-5); midSpaces2++){
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern24(int n)
{
    for(int row=1; row<=2*n-1; row++)
    {  
        int totalColsInRow = row<=n? row : 2*n-row;
        int i = (totalColsInRow>2)? 1:0;

        for(int col=1; col<=totalColsInRow; col++){
            if(i==1 && col>1 && col<totalColsInRow)
                                    cout << " ";
            else
                cout << "*";
        }
             for(int midSpace=1; midSpace<=(2*n)-2*totalColsInRow; midSpace++){
                cout << " ";
            }

        for(int col=1; col<=totalColsInRow; col++){
            if(i==1 && col>1 && col<totalColsInRow)
                                    cout << " ";
            else
                cout << "*";
        }

    cout << endl;
    }
}

void pattern25(int n)
{
    for(int row=1; row<=n; row++)
    {  
        int totalColsInRow = row==1 || row==n? n : 2;
        int totalMidSpaces = row==1 || row==n? 0 : n-2;

        for(int spaces=1; spaces<=n-row; spaces++){
            cout << " ";
        }

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
             for(int midSpace=1; midSpace<=totalMidSpaces; midSpace++){
                cout << " ";
            }
        }
    cout << endl;
    }
}

void pattern26(int n)
{
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n+1-row; col++){
            cout << row << " ";
        }
        cout << endl;
    }
}

void pattern27(int n)
{   
    int i = 1;
    int j = (n*n+1);
    int k;
    for(int row=1; row<=n; row++){

        for(int spaces=1; spaces<=row-1; spaces++){
            cout << "  ";
        }

        for(int col=1; col<=n-(row-1); col++){
            cout << i << " ";
            i++;
        }              // 1-2  2-6  3-12 4-20    (n*n+1)-n
        cout << "   ";

        for(int col=1; col<=n-(row-1); col++){
            if(col==1)
                 k = j;
            cout << j << " ";
            j++;
        }
        j=k-(n-row);
        cout << endl;
    }
}

void pattern28(int n)
{
    for(int row=1; row<=2*n-1; row++)
    {  
        int totalColsInRow = row<=n? row : 2*n-row;
        int totalSpaces = n-totalColsInRow;
        for(int spaces=1; spaces<=totalSpaces; spaces++){
            cout << " ";
        }
        for(int col=1; col<=totalColsInRow; col++){
            cout << "* ";
            }
    cout << endl;
    }
}

void pattern29(int n)
{
    for(int row=1; row<=2*n-1; row++)
    {  
        int totalColsInRow = row<=n? row : 2*n-row;

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
        }
             for(int midSpace=1; midSpace<=(2*n)-2*totalColsInRow; midSpace++){
                cout << " ";
            }

        for(int col=1; col<=totalColsInRow; col++){
            cout << "*";
        }

    cout << endl;
    }
}

void pattern30(int n){
    for(int row=1; row<=n; row++)
    {   
    for(int spaces=1; spaces<=n-row; spaces++){
        cout << "  ";
    }
        for(int col=row; col>=1; col--){
            cout << col << " ";
        }
        for(int col=2; col<=row; col++){
            cout << col << " ";
        }
    cout << endl;
    }
}

void pattern31(int n){

  for(int row=1; row<=2*n-1; row++){
      for(int col=1; col<=2*n-1; col++){
          
          int left = col;
          int right = 2*n - col;
          int up = row;
          int down = 2*n - row;
          
          cout << n+1 - min(min(left, right), min(up, down)) << " ";
      }
      cout << endl;
  }
}

void pattern32(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            char i = n-row+col+64;
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern33(int n){
    char ch = 65;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            if(ch%2==1){
             char lowerCase = tolower(ch);
             cout << lowerCase << " ";
             ch++;
             continue;
            }   
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern34(int n){
    for(int row=1; row<=n; row++){
        char ch = n + 65;
        ch = ch - row;
        for(int col=1; col<=n+1-row; col++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

void pattern35(int n)
{   
    for(int row=1; row<=n; row++){ 
        int startNum = 1; 
        for(int col=1; col<=row; col++){
            cout << startNum;
            startNum++;
        }
             for(int midSpace=1; midSpace<=n-row; midSpace++){
                cout << "  ";
            }

        for(int col=1; col<=row; col++){
            cout << startNum-1;
            startNum--;
        }

    cout << endl;
    }
}

void pattern36(int n){
        for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            int left = col;
            int right = n+1-col;
            int up = row;
            int down = n+1-row;
            cout << min(min(left, right), min(up, down)) <<"   ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cin >> n;

    pattern35(5);

    return 0;
}