#include <iostream>

using namespace std;

int main()
{
	//take size of list in total
	int n;
	cout<<" Enter size of list "<<endl;
	cin>>n;
	cout<<"  List size:"<<n<<endl;
	int A[n];

	//take list items
    cout << " Please enter your data" << endl;
    for(int i=0; i<n; i++)
    {
    	cin>>A[i];
    	cout<<" Elements of the List"<<A[i]<<endl;
	}

	for(int i=1; i<n; ++i)
    {
        for(int j = 0; j < (n-1); ++j)
            if(A[j]>A[j+1])
        {
            int temp = A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
	cout<< " Sorted data:"<<A[i]<<endl;
    return 0;
}
