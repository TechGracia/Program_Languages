#include <iostream>
using namespace std;

int main() 
{
    
    int arr[4] ;
    int n;
    
    cout << "Enter array limit: ";
    cin >> n;
    
    try 
    {
           if (n> 4)
            throw "Error: Array out of bounds!";
        for(int i=0;i<n;i++)
        {
            cout<<"\n Enter Number";
            cin>>arr[i];
            if(arr[i]>100)
                throw arr[i];
        }
          for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
     
    }

    // catch "Array out of bounds" exception
    catch (const char* msg) 
    {
        cout << msg << endl;
    }

    // catch "Divide by 0" exception
    catch (int num) {
        cout << "Error: number >100 " << num << endl;
    }

    
    
    return 0;
}