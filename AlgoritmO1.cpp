#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> Roy_Warshall(const vector<vector<int>>& a, int n) {
    vector<vector<int>> m(n, vector<int>(n));

    // Copy the input graph to the new matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = a[i][j];
        }
    }

    // Roy-Warshall algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (m[i][j] == 1) {
                    if (m[i][k] < m[k][j]) {
                        m[i][k] = m[k][j];
                    }
                }
            }
        }
    }

    return m;
}

// Read the graph from the text file
bool preia_graf(const char* nume, vector<vector<int>>& a, int& n) {
    ifstream f(nume);
    if (!f.is_open()) {
        cout << "Failed to open file: " << nume << endl;
        return false;
    }

    f >> n;
    a.resize(n, vector<int>(n, 0)); // Resize and initialize the adjacency matrix

    int m, u, v;
    f >> m;
    for (int i = 0; i < m; i++) {
        f >> u >> v;
        if (u > n || v > n) {
            cout << "Invalid vertex index in input file." << endl;
            return false;
        }
        a[u - 1][v - 1] = a[v - 1][u - 1] = 1;
    }

    f.close();
    return true;
}

int citire_graf(const string& numefisier, int& nr_vrf, int& nr_muchii, vector<vector<int>>& g) {
    ifstream f(numefisier);
    if (!f.is_open())
        return 1; // eroare deschidere fișier

    f >> nr_vrf >> nr_muchii;
    g.resize(nr_muchii, vector<int>(2));

    for (int i = 0; i < nr_muchii; i++)
        f >> g[i][0] >> g[i][1];

    f.close();
    return 0; // succes
}

void function2() {
    cout << "Function 2 called" << endl;
}

void function3() {
    cout << "Function 3 called" << endl;
}

int main() {
    int choice;

    cout << "Buna ziua! Am creat acest cod pentru a ilustra demonstrativ algoritmi din programare." << endl;
    cout << "Puteti selecta o scara de la 1 la 50: ";
    cin >> choice;

    switch (choice) {
    case 1:
    {
        cout << " Algoritmul Roy-Warshall" << endl;
        vector<vector<int>> adjacencyMatrix;
        int n;

        if (!preia_graf("graph.txt", adjacencyMatrix, n)) {
            return 1; // Exit program if file reading fails
        }

        vector<vector<int>> transitiveClosure = Roy_Warshall(adjacencyMatrix, n);

        // Output the transitive closure
        cout << "Transitive Closure:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << transitiveClosure[i][j] << " ";
            }
            cout << endl;
        }
    }
    break;
    case 2:
    {
        cout << "Grafuri neponderate" << endl;
        int r, m;
        vector<vector<int>> g; // declarare și definirea variabilei g

        cout << "Introduceti numarul de varfuri: ";
        cin >> r;
        cout << "Introduceti numarul de muchii: ";
        cin >> m;
        g.resize(m, vector<int>(2)); // Redimensionați vectorul g

        cout << "Introduceti muchiile:" << endl;
        for (int i = 0; i < m; i++)
            cin >> g[i][0] >> g[i][1];

        cout << "Numarul de varfuri este: " << r << endl;
        cout << "Numarul de muchii este: " << m << endl;
        cout << "Muchiile sunt:" << endl;
        for (int i = 0; i < m; i++)
            cout << g[i][0] << " " << g[i][1] << endl;
    }
    break;
    case 3:
        function3();
        break;
    default:
    case 4:
        cout << "Grafuri neponderate" << endl;
        function2();
        break;
    case 5:
        function3();
        break;
    case 6:
        cout << "" << endl;
        function2();
        break;
    case 7:
        function3();
        break;
    case 8:
        cout << "" << endl;
        function2();
        break;
    case 9:
        function3();
        break;
    case 10:
        function3();
        break;
    case 11:
        function3();
        break;
    case 12:
        function3();
        break;
    case 13:
        function3();
        break;
    case 14:
        function3();
        break;
    case 15:
        function3();
        break;
    case 16:
        function3();
        break;
    case 17:
        function3();
        break;
    case 18:
        function3();
        break;
    case 19:
        function3();
        break;
    case 20:
        function3();
        break;
    case 21:
        function3();
        break;
    case 22:
        function3();
        break;
    case 23:
        function3();
        break;
    case 24:
        function3();
        break;
    case 25:
        cout << "" << endl;
        function2();
        break;
    case 26:
        function3();
        break;
    case 27:
        function3();
        break;
    case 28:
        function3();
        break;
    case 29:
        function3();
        break;
    case 30:
        function3();
        break;
    case 31:
        function3();
        break;
    case 32:
        function3();
        break;
    case 33:
        function3();
        break;
    case 34:
        function3();
        break;
    case 35:
        function3();
        break;
    case 36:
        function3();
        break;
    case 37:
        function3();
        break;
    case 38:
        function3();
        break;
    case 39:
        function3();
        break;
    case 40:
        function3();
        break;
    case 41:
        function3();
        break;
    case 42:
        function3();
        break;
    case 43:
        function3();
        break;
    case 44:
        function3();
        break;
    case 45:
        function3();
        break;
    case 46:
        function3();
        break;
    case 47:
        function3();
        break;
    case 48:
        function3();
        break;
    case 49:
        function3();
        break;
    case 50:
        function3();
        break;
    
        cout << "Optiune invalida" << endl;
        break;
    }

    return 0;
}
