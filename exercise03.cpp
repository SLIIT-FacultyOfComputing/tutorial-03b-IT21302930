#include <iostream>

using namespace std;

int volume(int height, int width, int length);
struct Box{
  int height;
  int width;
  int lenght;
};
int main() {
    struct Box box1;
    struct Box box2;
    
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >>box1.height;
    cout << "Enter Box 1 Width : ";
    cin >>box1.width;
    cout << "Enter Box 1 Length : ";
    cin >>box1.lenght;
    
    cout << "Enter Box 2 Height : ";
    cin >>box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >>box2.lenght;
    
    // 5. Replace the coding below to pass the Box type structure
    int totalVolume = volume(box1.height,box1.width,box1.lenght )
             + volume(box2.height,box2.width,box2.lenght );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height,int width,int length)
{
  return height*width*length;
}