#include <iostream>
using namespace std;
class GradeBook {
    private:
        int courseNo;
    

    public:
        int getCourseNo() {
            return courseNo;
        }

    // public:
    //     GradeBook( int no) {
    //         setCourseNo(no);
    //     }

    // public:
    //     GradeBook() {
    //         courseNo = 0;
    //     }
    public:
        GradeBook( int no = 0) {
            setCourseNo(no);
        }
    public:
        void setCourseNo( int no) {
            courseNo = no;
        }    
 };

 int main() {
    GradeBook G1, G2(201);
    GradeBook G3(101);

    cout << G1.getCourseNo() << " ";
    cout << G2.getCourseNo() << " ";
    cout << G3.getCourseNo();
    
    
    return 0;
}