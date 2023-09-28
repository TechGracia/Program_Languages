#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"ENTER THE LIMIT :";
    cin>>n;
    int *roll = new int[n];
    float *per = new float[n];
    for(i=0; i<n; i++)
    {
        cout<<"ENTER ROLL NO. :";
        cin>>roll[i];
        cout<<"ENTER PERCENTAGE :";
        cin>>per[i];
    }
    for(j=0; j<n; j++)
    cout<<"\n"<<roll[j]<<"\t"<<per[j];
    free(roll);
    free(per);
    return 0;

}
