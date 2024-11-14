#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {

    cout << "Hello\n";

    this_thread::sleep_for(chrono::seconds(5));

    cout << "Done";
}