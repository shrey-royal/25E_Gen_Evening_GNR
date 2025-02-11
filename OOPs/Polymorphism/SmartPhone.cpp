class SmartPhone {
private:
    string name;
    int mp_mainCamera;
    int ram;
    int storage;
    string color;
    double price;

public:
    SmartPhone() {
        name = "generic phone";
        mp_mainCamera = 48;
        ram = 8;
        storage = 64;
        color = "black";
        price = 10000;
    }

    SmartPhone(string name, int mp_mainCamera, string color, double price) {
        this->name = name;
        this->mp_mainCamera = mp_mainCamera;
        this->color = color;
        this->price = price;
    }

    SmartPhone(int ram, int storage) {
        this->ram = ram;
        this->storage = storage;
    }

    SmartPhone(string name, int mp_mainCamera, int ram, int storage, string color, double price) {
        this->name = name;
        this->mp_mainCamera = mp_mainCamera;
        this->ram = ram;
        this->storage = storage;
        this->color = color;
        this->price = price;
    }

    void getSpecs(string name) {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "--------------------------------" << endl;
    }

    void getSpecs(int ram) {
        cout << "RAM: " << ram << endl;
        cout << "Storage: " << storage << endl;
        cout << "Price: " << price << endl;
        cout << "--------------------------------" << endl;
    }
    
    void getSpecs(int mp_mainCamera, string color) {
        cout << "Name: " << name << endl;
        cout << "Main Camera: " << mp_mainCamera << "mp" << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "--------------------------------" << endl;
    }

    void getSpecs(string color, int mp_mainCamera) {
        cout << "Name: " << name << endl;
        cout << "Main Camera: " << mp_mainCamera << "mp" << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "--------------------------------" << endl;
    }

    void getSpecs(double price) {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "--------------------------------" << endl;
    }

    void getSpecs() {
        cout << "Name: " << name << endl;
        cout << "Main Camera: " << mp_mainCamera << "mp" << endl;
        cout << "RAM: " << ram << endl;
        cout << "Storage: " << storage << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "--------------------------------" << endl;
    }
};