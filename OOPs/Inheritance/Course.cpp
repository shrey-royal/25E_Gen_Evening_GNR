#define MAX_STUDENTS_PER_COURSE 5

class Course {
private:
    string courseId;
    string name;
    Student students[10];   //aggregation
    int enrolledStudents;

public:
    Course(const string& courseId, const string& name) {
        this->courseId = courseId;
        this->name = name;
        this->enrolledStudents = 0;
    }

    void addStudentsToCourse(int id, string name) {
        if (enrolledStudents < MAX_STUDENTS_PER_COURSE) {
            Student s(id, name);
            this->students[enrolledStudents] = s;
            enrolledStudents++;
        } else {
            cout << "Cannot add " << name << " as the course is full!" << endl;
        }
    }

    void getAllStudentsList() {
        if (enrolledStudents == 0) {
            cout << "No Students are currently enrolled in this course." << endl;
            return;
        }
        
        cout << "Enrolled Students List (" << courseId << " - " << name << "): \n";
        for (int i = 0; i < enrolledStudents; i++) {
            cout << students[i].getStudentDetails();
        }
        cout << "--------------------------\n";
    }

    void updateStudentDetails(int id, const string& updated_name) {
        bool found = false;
        for (int i = 0; i < enrolledStudents; i++) {
            if (students[i].getId() == id) {
                this->students[i].setName(updated_name);
                found = true;
                break;
            }
        }

        if (!found) cout << "No Student found with id: " << id << endl;
    }

    bool searchStudentInCourseById(int id) {
        bool found = false;
        for (int i = 0; i < enrolledStudents; i++) {
            if (students[i].getId() == id) {
                found = true;
                break;
            }
        }

        if (found) cout << "Student is currently enrolled in course." << endl;
        else cout << "Student is not enrolled in course." << endl;
    }

    bool searchStudentInCourseByName(const string& name) {
        bool found = false;
        for (int i = 0; i < enrolledStudents; i++) {
            // Caseless Comparision
            if (students[i].getName() == name) {
                found = true;
                break;
            }
        }

        if (found) cout << "Student is currently enrolled in course." << endl;
        else cout << "Student is not enrolled in course." << endl;
    }
};