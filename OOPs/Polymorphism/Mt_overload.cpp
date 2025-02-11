#include<iostream>
using namespace std;
#include"SmartPhone.cpp"

int main() {
    // Object 1: Samsung Galaxy M14
    SmartPhone phone1("Samsung Galaxy M14", 50, 6, 128, "Blue", 13499);

    // Object 2: Redmi Note 12 5G
    SmartPhone phone2("Redmi Note 12 5G", 48, 6, 128, "Frosted Green", 17999);

    // Object 3: iQOO Z7 5G
    SmartPhone phone3("iQOO Z7 5G", 64, 6, 128, "Norway Blue", 19999);

    // Object 4: Realme Narzo 60
    SmartPhone phone4("Realme Narzo 60", 64, 8, 256, "Cosmic Black", 23999);

    // Object 5: OnePlus Nord CE 3 Lite
    SmartPhone phone5("OnePlus Nord CE 3 Lite", 108, 8, 128, "Pastel Lime", 19999);

    // Object 6: Poco X5 Pro
    SmartPhone phone6("Poco X5 Pro", 108, 8, 256, "Horizon Blue", 24999);

    // Object 7: Lava Blaze 5G
    SmartPhone phone7("Lava Blaze 5G", 50, 6, 128, "Glass Green", 11999);

    // Object 8: Infinix Zero Ultra
    SmartPhone phone8("Infinix Zero Ultra", 200, 8, 256, "Coslight Silver", 29999);

    // Object 9: Samsung Galaxy S23 Ultra
    SmartPhone phone9("Samsung Galaxy S23 Ultra", 200, 12, 512, "Phantom Black", 124999);

    // Object 10: iPhone 15 Pro Max
    SmartPhone phone10("iPhone 15 Pro Max", 48, 8, 256, "Titanium Blue", 159900);


    phone1.getSpecs("Samsung Galaxy M14");
    phone2.getSpecs(6);
    phone3.getSpecs(64, "Norway Blue");
    phone4.getSpecs(23999.0);
    phone5.getSpecs();
    phone6.getSpecs("Poco X5 Pro");
    phone7.getSpecs(6);
    phone8.getSpecs("Coslight Silver", 200);
    phone9.getSpecs(124999.0);
    phone10.getSpecs();


    return 0;
}