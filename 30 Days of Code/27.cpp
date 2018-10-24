#include<bits/stdc++.h>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        return vector<int>();
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        int i,n;
        vector<int> a;
        n=50;
             for(i=0;i<n;i++)
             {
                a.push_back(i); 
             }
        return a;
    }

    static int get_expected_result() {
        // complete this function
        vector<int> x=TestDataUniqueValues::get_array();
        int y=minimum_index(x);
        return y;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> a;
        int i,n;
        n=30;
        for(i=0;i<n;i++)
        {
            a.push_back(i);
        }
        int u=a.front();
        a.push_back(u);
        return a;
    }

    static int get_expected_result() {
        // complete this function
        vector<int> x=TestDataExactlyTwoDifferentMinimums::get_array();
        int y=minimum_index(x);
        return y;
    }

};
 

void TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        auto result = minimum_index(seq);
    } catch (invalid_argument& e) {
        return;
    }
    assert(false);
}

void TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);

    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

    auto expected_result = TestDataUniqueValues::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);

    auto tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}

