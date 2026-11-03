#include <iostream>
using namespace std;

class Model {
public:
    virtual void predict() {
        cout << "Machine Learning Model" << endl;
    }
};

class LinearRegression : public Model {
public:
    void predict() override {
        cout << "Linear Regression: Predicting house prices" << endl;
    }
};

class Classification : public Model {
public:
    void predict() override {
        cout << "Classification: Detecting spam emails" << endl;
    }
};

class Clustering : public Model {
public:
    void predict() override {
        cout << "Clustering: Grouping similar data" << endl;
    }
};

int main() {
    Model *m;

    LinearRegression lr;
    Classification cl;
    Clustering cr;

    m = &lr;
    m->predict();

    m = &cl;
    m->predict();

    m = &cr;
    m->predict();

    return 0;
}