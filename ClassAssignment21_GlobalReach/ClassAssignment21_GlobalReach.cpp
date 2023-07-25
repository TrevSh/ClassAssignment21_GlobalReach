#include <iostream>

int glob = 10;

void access_global();
void hide_global();
void change_global();

int main()
{
    std::cout << "in main() glob is: "<<glob<<"\n\n";
    access_global();

    hide_global();
    std::cout << "In main() glob is: " << glob << "\n\n";

    change_global();
    std::cout << "In main() glob is: " << glob << "\n\n";

    system("pause");
    return 0;
}

void access_global() {
    std::cout << "In access_global glob is: " << glob << "\n\n";
}
void hide_global() {
    int glob = 0;                                                       //Declaring another glob var hides the global.
    std::cout << "In hide_global glob is: " << glob << "\n\n";
}
void change_global() {
    glob = -10;
    std::cout << "In change_global() glob is: " << glob << "\n\n";
}
