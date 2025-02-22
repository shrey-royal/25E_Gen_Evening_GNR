#include<iostream>
#include<fstream>
using namespace std;

class ReadWriteFile {
private:
    ifstream fin;
    ofstream fout;
    string file_name;
    bool isFileOpened;

public:
    ReadWriteFile(string file_name) {
        isFileOpened = false;
        if (file_name != "" || file_name.length() > 0) {
            this->file_name = file_name;
            this->file_name.append(".txt");
        }
    }

    void readFile() {
        fin.open(file_name, ios::in);
        if (!fin) {
            cout << "File could not be opened!" << endl;
            return;
        }

        string line;

        while(getline(fin, line)) {
            cout << line << endl;
        }

        fin.close();
    }

    void writeFile() {
        fout.open(file_name, ios::out);
        if (!fout) {
            cout << "File could not be opened!" << endl;
            return;
        }
        
        string line;
        cout << "Enter some data to insert into file: " << endl;
        getline(cin, line);
        while(line != "~") {
            fout << line << endl;
            getline(cin, line);
        }
        cout << "File written successfully!" << endl;

        fout.close();
    }

    void appendFile() {
        fout.open(file_name, ios::app);
        if (!fout) {
            cout << "File could not be opened!" << endl;
            return;
        }
        fout << endl;
        
        string line;
        cout << "Enter some data to insert into file: " << endl;
        getline(cin, line);
        while(line != "~") {
            fout << line << endl;
            getline(cin, line);
        }
        cout << "File appended successfully!" << endl;

        fout.close();
    }
};

int main() {
    string fname;
    cout << "Enter file name: ";
    getline(cin, fname);

    ReadWriteFile file(fname);

    // file.writeFile();
    file.appendFile();
    file.readFile();

    return 0;
}

/*
scan the file name then create a csv file and then store the data in the csv file.

### Food Item CSV Example:

| Food Name      | Category      | Price (INR) | Ingredients                           | Calories | Description                             |
|----------------|---------------|-------------|---------------------------------------|----------|-----------------------------------------|
| Burger         | Fast Food     | 150         | Bun;Patty;Lettuce;Cheese              | 350      | A delicious beef burger with cheese    |
| Pizza          | Fast Food     | 450         | Dough;Tomato Sauce;Cheese;Olives      | 300      | Classic margherita pizza               |
| Croissant      | Bakery        | 50          | Butter;Flour;Sugar;Yeast              | 200      | Flaky and buttery French pastry        |
| Cake (Chocolate)| Bakery        | 300         | Flour;Cocoa;Butter;Sugar;Eggs         | 250      | A rich chocolate cake with frosting    |
| Tofu Stir-Fry  | Vegan         | 200         | Tofu;Soy Sauce;Vegetables;Garlic      | 180      | Stir-fried tofu with vegetables        |
| Samosa         | Snacks        | 40          | Potatoes;Spices;Pastry                | 150      | A crispy, spiced potato-filled snack   |

*/