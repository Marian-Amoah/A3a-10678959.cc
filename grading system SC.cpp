///using switchCase

#include <iostream>

using namespace std;

int main (){
	int score;
	
	cout << " please enter your score " << endl;
	cin>> score;

switch (score)
{
	case 0 ... 39: 
	cout << " You had an F " << endl;
	break;
	
	case 40 ... 49:
		cout << " You had an E " << endl;
		break;
		
		case 50 ... 59:
			cout << " You had a D " << endl;
			break;
			
			case 60 ... 69:
			cout << " You had a C " << endl;
			break;
			
			case 70 ... 79:
				cout << " You had a B " << endl;
				break;
				
				case 80 ... 100:
					cout << " congratulations! You had an A " << endl;
					break;
					
					default:
						cout << " This is an invalid input " << endl;
	
}

return 0;

}
