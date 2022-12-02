#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box
class Box {
// The class should have the following functions :
    private:
        int length;
        int breadth;
        int height;
    public:
        Box() {
            this->length = 0;
            this->breadth = 0;
            this->height = 0;
        }
        Box(int length,int breadth,int height) {
            this->length = length;
            this->breadth = breadth;
            this->height = height;
        }
        Box(Box *box) {
            this->length = box->length;
            this->breadth = box->breadth;
            this->height = box->height;
        }
// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);
        int getLength() {
            return this->length;
        }
        int getBreadth () {
            return this->breadth;
        }
        int getHeight () {
            return this->height;
        }
        long long CalculateVolume() {
            return (long long) this->length * this->height * this->breadth;
        }
// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)
friend bool operator < (Box& b1, Box& b2)
{
    if((b1.length < b2.length) || (b1.length == b2.length && b1.breadth < b2.breadth) ||
        (b1.length == b2.length && b1.breadth == b2.breadth && b1.height <b2.height))
        return(true);
    else
        return(false);
}
friend ostream& operator << (ostream& s,Box& b1)
        {
            s << b1.length << " " << b1.breadth << " " << b1.height;
            return s;
        }
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}