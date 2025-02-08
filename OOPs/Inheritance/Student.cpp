using namespace std;

class Student {
    private:
        int id;
        string name;
    public:

        Student() {
            id = 0;
            name = "";
        }

        Student(int id, string name) {
            this->id = id;
            this->name = name;
        }

        int getId() {
            return this->id;
        }

        string getName() {
            return this->name;
        }

        void setId(int new_id) {
            this->id = id;
        }

        void setName(string new_name) {
            this->name = new_name;
        }

        string getStudentDetails() {
            return to_string(getId()) + ": " + getName() + "\n";
        }
};