#include<iostream>
using namespace std;
//Name: Zhyar Nasruddin 
//Marticulation Number: 2327135


void sort1(int p[],int q){

for (int j=0;j<q-1;j++){//I loop twice to make the sorting
    int k=j;
    for (int i=j+1;i<q;i++){
            if (p[i]<p[k]){
                k=i;
            
        }
    }
    //replacing the integers
    int r=p[k];
    p[k]=p[j];
    p[j]=r;
}
}

void sort2(int p[],int q){

for (int j=0; j<q-1;j++){
        for (int k=0;k<q-1;k++){
        if (p[k]>p[k+1]){
            int r=p[k];
            p[k]=p[k+1];
            p[k+1]=r;
        }
        }
    }

}



int main()
{
    //entering the length of the array
    cout<<"Please enter an integer for the length of the array:"<<endl;
    int n;
    cin>>n;
    
    //creating the empty array
    int a[n];

    //entering the array elements
    cout<<"Please input the array elements:"<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    //printing the array values
    cout<<"The Array Elements as they are: {";
    for (int i=0;i<n;i++){
    cout<<a[i];
    if (i<n-1){
        cout<<" , ";
    }
    }
    cout<<"}";

    //sort algorithm
    sort1(a,n);

    //printed sort algorithm
    cout<<"The sorted Array Elements as they are: {";
    for (int i=0;i<n;i++){
    cout<<a[i];
    if (i<n-1){
        cout<<" , ";
    }
    }
    cout<<"}";




    return 0;
}

