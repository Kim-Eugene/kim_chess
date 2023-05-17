#include <iostream>
#include <string>
using namespace std;

class Piece; // 미리 알려준다 멍청아
struct square {
    Piece *piecePtr; // 해당 칸을 차지하는 기물을 가리키는 포인터
    bool take; // 칸이 비어있는지 확인하는 bool
};

class Map {
    square map[8][8];
public:
    Map() { // 맵 초기화
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                map[i][j].piecePtr = nullptr; 
                map[i][j].take = false;
            }
        }
    }
    
    void printMap() {
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                if(!map[i][j].take)
                    cout << " .";
            }
            cout << endl;
        }
        cout << endl;
    }

};

class Piece {
    bool live; // 기물이 살아있는지? 
    // -> 근데 얘는 그냥 Piece를 동적할당하다가 반납하면 되는거 아니냐
public:
};
int main() {

    Map map;
    map.printMap();

    return 0;
}