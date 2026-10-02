#include <iostream>
using namespace std;
struct WashingMashine {
    char firma[20];
    char color[30];
    int width;
    int height;
    int power;
    int SpeedVidgym;
    int temperature;
};
void ShowMashineWash(WashingMashine AnyData) {
    cout << "Brand: " << AnyData.firma << endl;
    cout << "Color: " << AnyData.color << endl;
    cout << "Width: " << AnyData.width << endl;
    cout << "Height: " << AnyData.height << endl;
    cout << "Power: " << AnyData.power << endl;
    cout << "Speed Vidgym: " << AnyData.SpeedVidgym << endl;
    cout << "Temperature: " << AnyData.temperature << endl;
}
WashingMashine InitMashineWash(WashingMashine AnyData) {
    cout << "Brand: "; cin >> AnyData.firma;
    cout << "Color: "; cin >> AnyData.color;
    cout << "Width: "; cin >> AnyData.width;
    cout << "Height: "; cin >> AnyData.height;
    cout << "Power: "; cin >> AnyData.power;
    cout << "Speed Vidgym: "; cin >> AnyData.SpeedVidgym;
    cout << "Temperature: "; cin >> AnyData.temperature;
    return AnyData;
}



struct Iron {
    char firma[20];
    char model[50];
    char color[30];
    int mintemp;
    int maxtemp;
    bool Mistgiving;
    int power;
};
void ShowIron(Iron AnyData) {
    cout << "Brand: " << AnyData.firma << endl;
    cout << "Model: " << AnyData.model << endl;
    cout << "Color: " << AnyData.color << endl;
    cout << "Power: " << AnyData.power << endl;
    cout << "Max temperature: " << AnyData.maxtemp << endl;
    cout << "Min temperature: " << AnyData.mintemp << endl;
    cout << "Mistgiving: " << AnyData.Mistgiving << endl;
}
Iron InitIron(Iron AnyData) {
    cout << "Brand: "; cin >> AnyData.firma;
    cout << "Model: "; cin >> AnyData.model;
    cout << "Color: "; cin >> AnyData.color;
    cout << "Min Temperature: "; cin >> AnyData.mintemp;
    cout << "Max Temperature: "; cin >> AnyData.maxtemp;
    cout << "Power: "; cin >> AnyData.power;
    cout << "Mistgiving: "; cin >> AnyData.Mistgiving;
    return AnyData;
}
int main()
{
    //First Task
    WashingMashine Epsilon{ "Epsilon","white",100,100,1200,120,50 };
    ShowMashineWash(Epsilon);
    WashingMashine LG = {};
    LG = InitMashineWash(LG);
    ShowMashineWash(LG);
    //Second Task
    Iron LGG{ "LG","Blade","UltraMarine",1000,10,100,true};
    ShowIron(LGG);
    Iron Bosch = {};
    Bosch = InitIron(Bosch);
    ShowIron(Bosch);
}
