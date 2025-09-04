/*
Create a class named CollegeCourse.
    It should have the following fields:
        - courseID
        - grade
            - Not case sensitive
        - credits
        - gradePoints
            - Calculated as:
                A = 10
                B = 9
                C = 8
                D = 7
                E = 6
                F = 5
        - honourPoints
            - Calculated as the product of gradePoints and credits
    It should have the following methods:
        - void set_CourseID(string CID)
            - Sets the courseID
        - void set_Grade(char g)
            - Sets grade
        - void set_Credit(int cr)
            - Sets credit
        - int calculateGradePoints(char g)
            - Sets gradePoints
        - float calculateHonourPoints(int gp, int cr)
            - Sets honorPoints
        - void display()
            - Prints gradePoints and honourPoints
*/

#include <iostream>

class CollegeCourse {
    std::string courseID;
    char grade;
    int credits = 0;
    int gradePoints = 0;
    float honourPoints = 0;

    public:
        void set_CourseID(std::string CID) {
            this->courseID = CID;
        }

        void set_Grade(char g) {

            //ensuring that g is between A and F...
            if (g >=65 && g <= 70) {
                this->grade = g;
                this->calculateGradePoints(g);
            }else if (g >= 97 && g <= 102) { //...or a and f
                this->grade = g;
                this->calculateGradePoints(g);
            }
            
        }

        void set_Credit(int cr) {
            this->credits = cr;

            this->calculateHonourPoints(this->gradePoints, cr);
        }

        void calculateGradePoints(char g) {
            switch(g) {
                case 'A':
                    this->gradePoints = 10;
                    break;
                case 'a':
                    this->gradePoints = 10;
                    break;
                case 'B':
                    this->gradePoints = 9;
                    break;
                case 'b':
                    this->gradePoints = 9;
                    break;
                case 'C':
                    this->gradePoints = 8;
                    break;
                case 'c':
                    this->gradePoints = 8;
                    break;
                case 'D':
                    this->gradePoints = 7;
                    break;
                case 'd':
                    this->gradePoints = 7;
                    break;
                case 'E':
                    this->gradePoints = 6;
                    break;
                case 'e':
                    this->gradePoints = 6;
                    break;
                default:
                    this->gradePoints = 5;
            }
        }

        void calculateHonourPoints(int gp, int cr) {
            this->honourPoints = (float)gp*(float)cr;
        }

        void display() {
            std::cout << this->gradePoints << " " << this->honourPoints << std::endl;
        }
};

int main() {
    CollegeCourse course;

    course.set_CourseID("CSN-206");
    course.set_Grade('A');
    course.set_Credit(4);
    
    course.display();

    return 0;
}