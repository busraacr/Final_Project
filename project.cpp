#include <iostream>
#include <fstream>
#include <string>


int main() {
    std::string fileName;
    std::cin >> fileName;

    int tirednessMap[40][40];
    int sizeX,sizeY;
    int currentYear,plantingCount;
    int startXCoord,startYCoord,endXCoord,endYCoord;
    std::ifstream inputFile;
    inputFile.open(fileName);
    
    if(inputFile.is_open()){
        inputFile >> sizeX >> sizeY;
        for(int i=0;i<sizeY;i++){
            for(int j=0;j<sizeX; j++){
                tirednessMap[i][j]=0;
            }
        }
        inputFile >> currentYear;
        while(currentYear<=2017){
            inputFile >> plantingCount;
            for(int i=1;i<=plantingCount; i++){
                inputFile >> startXCoord >> startYCoord;
                inputFile >> endXCoord >> endYCoord;
                for(int m=startYCoord;m<=endYCoord;m++){
                    for(int n=startXCoord;n<=endXCoord;n++){
                        tirednessMap[m][n]+=2;
                    }
                }
            }
            for(int i=0;i<sizeY;i++){
                for(int j=0;j<sizeX;j++){
                    tirednessMap[i][j]-=1;
                }
            }
            for(int i=0;i<sizeY;i++) {
                for (int j = 0; j < sizeX; j++) {
                    if (tirednessMap[i][j] < 0) {
                        tirednessMap[i][j] = 0;
                    }
                }
            }
            if(currentYear==2017){
                break;
            }
            inputFile >> currentYear;
        }
    }
    while(!inputFile.eof()){
        inputFile >> fileName;
    }
    inputFile.close();
    for(int i=0;i<sizeY;i++){
        for(int j=0;j<sizeX;j++){
            std::cout << tirednessMap[i][j] <<" ";
        }
        std::cout << std::endl;
    }

    return 0;
}
