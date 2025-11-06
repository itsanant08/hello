#include <iostream>
#include <vector>

using namespace std; f

int main() {
    int n;
    cout << "Enter the number of elements: ";   g
    cin >> n;

    vector<int> elements(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> elements[i];
    }

    bool found = false;
    cout << "Repeated elements are:";

    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        int c = 1;
        for (int j = i + 1; j < n; j++) {
            if (elements[i] == elements[j]) {
                c++;
                visited[j] = true;  
            }
        }

        if (c > 1) {
            cout << elements[i] << " appears " << c << " times\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No repeated elements found.\n";
    }

    return 0;
}
