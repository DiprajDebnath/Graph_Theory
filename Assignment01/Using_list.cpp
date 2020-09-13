#include<iostream>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjList(){
        for(int i = 0; i < V; i++){
           cout<<"vertex " << i << "->";
            for(int nbr:l[i]){
               cout << nbr << ",";
            }
            cout<< " degree " << l[i].size()<<endl;
        }
    }
};

int main(){
    int v, e;
    cout << "Enter the number of vertices ";
    cin >> v;
    Graph *g = new Graph(v);

    cout << "Enter the number of edges";
    cin >> e;

    for(int i = 0; i < e; i++){
        int f, s;
        cout << "\nEnter first vertex of the edge ";
        cin>> f;
        cout << "Enter second vertex of the edge ";
        cin >> s;

        g->addEdge(f, s);
    }
    cout << endl;
    g->printAdjList();
}


/* Sample Input/Output

Input:
Enter the number of vertices 4
Enter the number of edges4

Enter first vertex of the edge 0 
Enter second vertex of the edge 1

Enter first vertex of the edge 0
Enter second vertex of the edge 2

Enter first vertex of the edge 2
Enter second vertex of the edge 3

Enter first vertex of the edge 1
Enter second vertex of the edge 2

Output:
vertex 0->1,2, degree 2
vertex 1->0,2, degree 2
vertex 2->0,3,1, degree 3
vertex 3->2, degree 1

*/
