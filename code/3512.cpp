#include <iostream>
using namespace std;

int main() {
    const string tiangan[] = {"jia", "yi", "bing", "ding", "wu", "ji", "geng", "xin", "ren", "gui"};
    const string dizhi[] = {"zi", "chou", "yin", "mao", "chen", "si", "wu", "wei", "shen", "you", "xu", "hai"};
    
    int year;
    cin >> year;
    
    int diff = year - 2020;
    int tg = (6 + diff) % 10;
    int dz = (0 + diff) % 12;
    
    tg = tg < 0 ? tg + 10 : tg;
    dz = dz < 0 ? dz + 12 : dz;
    
    cout << tiangan[tg] << dizhi[dz] << endl;
    return 0;
}
