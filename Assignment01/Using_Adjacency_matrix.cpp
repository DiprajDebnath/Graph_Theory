#include<iostream>
using namespace std;

void print(int** edges, int n){

    for(int i = 0; i < n; i++){
        cout << "vertex " << i <<"->";
        int degree = 0;
        for(int j = 0; j < n; j++){
            if(edges[i][j] == 1){
                cout << j << ",";
                degree++;
            }
        }
        cout << " degree = " << degree << endl;
    }
}

int main(){
    int n;
    int e;
    cout << "Enter the number of vertex ";
    cin >> n;
    cout << "Enter the number of edges ";
    cin >> e;

    int** edges = new int*[n];
    for(int i = 0; i < n; i++){
        edges[i] = new int[n];
        for(int j = 0; j < n; j++){
            edges[i][j] = 0;
        }
    }

    for(int i = 0; i < e; i++){
        int f, s;
        cout << "\nEnter first vertex of the edge ";
        cin>> f;
        cout << "Enter second vertex of the edge ";
        cin >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    cout<<endl;
    
    print(edges, n);
}

/* Example
Input :-
Enter the number of vertex 4
Enter the number of edges 4

Enter first vertex of the edge 0
Enter second vertex of the edge 1

Enter first vertex of the edge 0
Enter second vertex of the edge 2

Enter first vertex of the edge 2
Enter second vertex of the edge 3

Enter first vertex of the edge 1
Enter second vertex of the edge 2

Output:-
vertex 0->1,2, degree = 2
vertex 1->0,2, degree = 2
vertex 2->0,1,3, degree = 3
vertex 3->2, degree = 1

*/
