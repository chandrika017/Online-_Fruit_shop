#include <iostream>
using namespace std;
main()
{

	int op;
     string s;

     cout<<"......................................Welcome to Online Fruit Shop........................................."<<endl;
     cout<<endl;
     cout<<"................................Here is a Cash on delivery(COD) system......................................"<<endl;
     cout<<endl;
	cout<<"Which type of fruit You want?"<<endl;

	cout<<1<<"......Apple......"<<endl<<" 1kg=250tk"<<endl;
	cout<<2<<"......Banana......"<<endl<<" 4pice=20tk"<<endl;
	cout<<3<<"......Cherry......"<<endl<<" 1kg=300tk"<<endl;
	cout<<4<<"......Coconut......"<<endl<<" 2pice=150tk"<<endl;
	cout<<5<<"......Grapefruit......"<<endl<<" 1kg=90tk"<<endl;

    cin>>op;

	switch (op) {
	    case 1:
			cout << "...Apple..."<<endl;
			cout<<"Address please:";
			cin>>s;
			cout<<"Thank you"<<endl<<"Your order is one the way";
			break;

        case 2:
			cout << "...Banana..."<<endl;
			cout<<"Address please:";
			cin>>s;
			cout<<"Thank you"<<endl<<"Your order is one the way";
			break;
        case 3:
			cout << "...Cherry..."<<endl;
			cout<<"Address please:";
			cin>>s;
			cout<<"Thank you"<<endl<<"Your order is one the way";
			break;
        case 4:
			cout << "...Coconut..."<<endl;
			cout<<"Address please:";
			cin>>s;
			cout<<"Thank you"<<endl<<"Your order is one the way";
			break;
        case 5:
			cout << "...Grapefruit..."<<endl;
			cout<<"Address please:";
			cin>>s;
			cout<<"Thank you"<<endl<<"Your order is one the way";
			break;


	}
}
