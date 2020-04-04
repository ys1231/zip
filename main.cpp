#include"zip.h"

int main(){
  
    HZIP hzip=CreateZip(TEXT("text.zip"),nullptr);

    ZipAdd(hzip,TEXT("a.txt"),TEXT("./test.txt"));

    CloseZip(hzip);
  
}
