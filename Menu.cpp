#include<iostream>
using namespace std;
class ins{
	int a[50],e,p,n,i,c,del,count,l,r,m;
public:int get(){
	cout<<"Enter no of elements of array"<<" ";
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
	}
int displayf(){
	cout<<"Enter the element you want to insert";
	cin>>e;p=1;
		for(int i=n;i>=p-1;i--){
		 a[i+1]=a[i];
		}
		a[p-1]=e;
	 for(int i=0;i<n+1;i++){cout<<a[i]<<"\n";}
    }
int displaye(){
	cout<<"Enter the element you want to insert";
	cin>>e;p=n;
		for(int i=n;i>=p-1;i--){
		 a[i+1]=a[i];
		}
		a[p-1]=e;
	 for(int i=0;i<n+1;i++){cout<<a[i]<<"\n";}
    }
int display(){
	cout<<"Enter the element you want to insert and its position";
	cin>>e>>p;
		for(int i=n;i>=p-1;i--){
		 a[i+1]=a[i];
		}
		a[p-1]=e;
	 for(int i=0;i<n+1;i++){cout<<a[i]<<"\n";}
    }
};
class del{
	int a[50],e,p,n,i,c,del,count=0,l,r,m;
public:int get(){
	cout<<"Enter no of elements of array"<<" ";
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
	}
int display(){
	cout<<"Enter element to be delete : ";
	cin>>del;
	for(i=0; i<n; i++)
	{
		if(a[i]==del)
		{
			for(int j=i; j<(n-1); j++)
			{
				a[j]=a[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found";
	}
	else
	{
		cout<<"Now the new array is :\n";
		for(i=0; i<(n-1); i++)
		{
			cout<<a[i]<<" ";
		}
	}
}
};
class ser{
	int a[50],e,p,n,i,c,del,count,l,r,m;
public:int get(){
	cout<<"Enter no of elements of array"<<" ";
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
	}
int displayb(){
	int temp;
	cout<<"Enter the number to be search : ";
	cin>>e;
	l=0;r=n;count=0;
    for(int i=1;i<n;++i)
    {
        for(int j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
	while(l<r){
	m=(l+r)/2;
	if(a[m]==e){count++;break;}
	else if(a[m]>e){r=m-1;}
	else if(a[m]<e){l=m+1;}
	}
	if(count==0){cout<<"element not found!!";}
    else cout<<"Element found!!"<<e;
	}
int displayl(){
	cout<<"Enter the number to be search : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(a[i]==n)
		{
			c=1;
			p=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found";
	}
	else
	{
		cout<<n<<"Number Found at position "<<p;
	}
 }
};
class tra{
	int a[50],n;
	public:int get(){
	cout<<"Enter no of elements of array"<<" ";
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
	}
	int display(){for(int i=0;i<n;i++){cout<<" "<<a[i];}
    }
};

int main(){
int c;
ins i;
del d;
ser s;
tra t;
cout<<" Enter choice no->\n 1.Insert \n 2.Delete \n 3.Search \n 4.Traverse \n 0.Exit\n";
cin>>c;
if(c==1){
cout<<"1.Insert Front\n2.Insert End\n3.Between\n";
	cin>>c;
	i.get();
	if(c==1){i.displayf();}
    if(c==2){i.displaye();}
    if(c==3){i.display();}
}
else if(c==2){
	d.get();
	d.display();
}
else if(c==3){
	cout<<"1.Binary\n2.Linear\n";
	cin>>c;
	s.get();
	if(c==1){s.displayb();}
    if(c==2){s.displayl();}
}
else if(c==4){
	t.get();
	t.display();
}
else return 0;
}
