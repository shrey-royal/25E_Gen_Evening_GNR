#include<iostream>
using namespace std;

typedef long long int lli;

class Movie {
    string name;
    lli budget;
    string cast[3];

    public:
    Movie(string name, lli budget, string cast[]) {
        this->name = name;
        this->budget = budget;
        for (size_t i = 0; i < 3; i++) {
            this->cast[i] = cast[i];
        }
    }

    //copy constructor
    Movie(Movie& obj) {
        name = obj.name;
        budget = obj.budget;
        for (size_t i = 0; i < 3; i++) {
            this->cast[i] = obj.cast[i];
        }
    }

    void display() {
        cout << "Movie Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Budget: " << budget << endl;
        cout << "Starring: ";
        for(int i=0; i<3; i++) {
            cout << cast[i] << ", ";
        }
        cout << "\b\b." << endl;
    }
};

int main() {
    string actors[] = {"Actor A", "Actor B", "Actor C"};
    Movie movie1("Movie 1", 40000000000, actors);
    Movie movie2(movie1);

    movie1.display();
    movie2.display();

    return 0;
}

/*
Copy Constructors: A constructor that takes an object as a parameter and make a new object out of it.

Tasks:

1. Create a class representing a musical playlist with a dynamic array of song objects. Implement a copy constructor to ensure a deep copy of the playlist, including all song details.

2. Design a class to model a shopping cart for an online store with dynamic storage for product items. Implement a copy constructor to support duplicating the shopping cart contents for different user sessions.

3. Develop a class representing a maze solver algorithm with a stack of traversal steps. Implement a copy constructor to enable creating a copy of the solver state for backtracking purposes.

4. Build a class to simulate a graph data structure with vertices and edges. Include a copy constructor to support duplication of the graph structure while maintaining proper connections between vertices.

5. Design a class representing a social media post with dynamic storage for comments and likes. Implement a copy constructor to facilitate sharing posts across multiple user profiles.

6. Create a class to model a calendar event with attributes like title, date, and attendees. Implement a copy constructor to enable duplicating calendar events for scheduling conflicts resolution.

7. Develop a class representing a scientific experiment setup with dynamic storage for equipment objects. Implement a copy constructor to support replicating the experiment setup for comparative analysis.

8. Build a class to simulate a digital image with a matrix of pixel values. Implement a copy constructor to ensure proper copying of the image data for image processing operations.

9. Design a class representing a crossword puzzle with dynamic storage for word entries. Implement a copy constructor to enable creating variations of the puzzle for different difficulty levels.

10. Create a class to model a student enrollment system with dynamic storage for course registrations. Implement a copy constructor to support duplicating student enrollment records for academic audits and analysis.

*/