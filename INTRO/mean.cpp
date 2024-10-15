#include <iostream>
#include <fstream> // access to classes that can read from or write to files
#include <vector> // Allows us to create vectors (Dynamic arrays of any type of data that we choose)

using namespace std;

void read_data(istream& input, vector<float>& data) // Both parameters are references hence the &
{

    float value;

    while (input >> value) { // 'input' is an input stream passed into the function. 'input >> value' reads a single numerical value into the variable named 'value'
        data.push_back(value);
    }
}

float mean_value(const vector<float>& data) {
    //while numbers in the array
    float sum = 0.0;

    for (int i = 0; i < data.size(); i++) { // 
        sum += data[i];
    }

    float mean = sum / data.size();

    return mean;

}

int main(int argc, char* argv[]) {
  
    if (argc != 2) {
        cerr << "Usage: ./mean <filename>" << endl;
        return 1;
    }
    ifstream infile(argv[1]); // one class in the IOstreams library
    if (not infile) {
        cerr << "Error: cannot access " << argv[1] << endl;
        return 2;
    }
    vector<float> data;

    read_data(infile, data);  

    cout << data.size() << " values read from file" << endl;

    float mean = mean_value(data);
    cout << "Mean Value: " << mean << endl;

    return 0;
}