// 2 Static Member Function :-
//  If we create a member function of a class as a static, it is called a static member function.
// It can access only static data members.
//  It is also accessible even if we don’t have any object of a class.
class Test {
    static int count;
public:
    static void showCount() {   // static function
        cout << "Count = " << count << endl;
    }
};

int Test::count = 10;

int main() {
    Test::showCount();   // called without object
}
