// #include <iostream>
// using namespace std;
// class Point{
//     int x,y;
//     public:
//     Point(){x=0;y=0;}
//     Point(const Point&p){
//         x=p.x;y=p.y;
//     }
//     int getX(){
//         return x;
//     }
//      int getY(){
//         return y;
//     }
// };
// int main(){
//     Point p1;
//     Point p2=p1;
//     cout<<p2.getX()<<endl<<p2.getY();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Distance {
// public:
//     int feet;
//     int inches;

//     // Constructor to initialize feet and inches
//     Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

//     // Function to display distance in feet and inches
//     void display() {
//         cout << "Distance: " << feet << " feet, " << inches << " inches" << endl;
//     }
// };

// int main() {
//     // Creating two Distance objects
//     Distance dist1(5, 9);  // 5 feet 9 inches
//     Distance dist2;        // Default initialized to 0 feet, 0 inches

//     cout << "Before assignment:" << endl;
//     dist1.display();  // Displaying dist1
//     dist2.display();  // Displaying dist2 (initially 0 feet, 0 inches)

//     // Using default memberwise assignment operator
//     dist2 = dist1;  // Copying dist1 into dist2 using memberwise assignment

//     cout << "\nAfter assignment:" << endl;
//     dist1.display();  // Displaying dist1 (still 5 feet 9 inches)
//     dist2.display();  // Displaying dist2 (after assignment, it becomes 5 feet 9 inches)

//     return 0;
// }
//  #include <iostream>
// using namespace std;

// class Container {
//  public:
//     int length;
//     int width;
// int *height;
//   public:
//     Container() : length(0), width(0),height(new int(0)) {cout<<"default contructor called"<<endl;}
//  Container(int l,int w,int h) : length(l), width(w),height(new int(h)) {cout<<"parameterized contructor called"<<endl;}
// Container(Container &other){
//     length=other.length;
//     width=other.width;
//     height=new int(*other.height);
//     cout<<"deep copy is called"<<endl;}
//     ~Container(){
//         delete height;
//         cout<<"Destructor is called"<<endl;
//     }
//     void set_dimension(int l,int w, int h){
// length=l;
// width=w;
// *height=h;}
// void display(){
//     cout<<"length:"<<length<<endl<<"width:"<<width<<endl<<"height"<<*height<<endl<<"height adress:"<<height<<endl;
// }
 
//  };
 
// int main() {
//     cout<<"con 1"<<endl;
    
//     Container container1(12, 14, 16);
//    Container container2=container1;
//     container1.display();
// cout<<"con 2"<<endl;
    
    
    
//     container2.display();
// cout<<"after changing dimension con1"<<endl;
//   cout<<"con 1"<<endl;
// container1.set_dimension(14, 12, 22);
  
//      cout << "con 1 (copy constructor)" << endl;
//     Container container3(container1);  // Using copy constructor
//     container3.display();
//     cout<<"con 2"<<endl;
    
   
    
//     container2.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Set5 {
// private:
//     int arr[5];  
// public:
   
//     Set5() {
//         for (int i = 0; i < 5; i++) {
//             arr[i] = 0;
//         }
//     }
//     void setElements() {
//         cout << "Enter 5 integers: ";
//         for (int i = 0; i < 5; i++) {
//             cin >> arr[i];
//         }
//     }
//     Set5(const Set5 &other) {
//         for (int i = 0; i < 5; i++) {
//             arr[i] = other.arr[i];
//         }
//         cout << "Copy constructor called." << endl;
//     }
//     Set5 operator++() {
//         for (int i = 0; i < 5; i++) {
//             arr[i]++;
//         }
//         return *this;
//     }
//     Set5& display() {
//         cout << "Array elements: ";
//         for (int i = 0; i < 5; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;

//         cout << "Array addresses: ";
//         for (int i = 0; i < 5; i++) {
//             cout << &arr[i] << " ";
//         }
//         cout << endl;

//         return *this; 
//     }
// };

// int main() {
//     Set5 set1;
//     set1.setElements();
//     cout << "\nOriginal Set5 object:" << endl;
//     set1.display();
//     Set5 set2 = set1;
//     cout << "\nCopied Set5 object:" << endl;
//     set2.display();
//     ++set2;
//     cout << "\nCopied Set5 object after incrementing each element:" << endl;
//     set2.display();

//     return 0;
// }
#include <iostream>
using namespace std;
int& updateArray(int arr[], int size, int position, int value) {

    if (position >= 0 && position < size) {
        arr[position] = value; 
    } else {
        cout << "Invalid position!" << endl;
    }
    return arr[position]; 
}

int main() {
    int size, position, value;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
         cout<<"element of an array"<<endl;
        cin>>arr[i]; 
    }
    cout << "Initial array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the position to update (0 to " << size - 1 << "): ";
    cin >> position;
    cout << "Enter the number to set at position " << position << ": ";
    cin >> value;
    updateArray(arr, size, position, value);
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}




