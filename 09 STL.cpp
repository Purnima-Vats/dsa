#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPairs(){
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair <int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair <int, int> arr[] = {{1, 2}, {3, 4}, {5,6}};

    cout<< arr[1].second;
}

// Vectors: It is a container
// Need of vectors: arrays are of constant size, we can't modify an array's size but we can modify size of vector.
// Vectors are dynamic in size, we can modify its size whenever we want to.
void explainVectors(){
    vector<int> v;

    v.push_back(1); // insert 1 at the end
    v.emplace_back(2); // insert 2 at the end
    v.emplace_back(3); // insert 3 at the end
    v.emplace_back(4); // insert 4 at the end
    v.emplace_back(5); // insert 5 at the end

    vector<pair<int,int>>vec; // vector of pairs

    vec.push_back({1, 2}); // insert {1, 2} at the end
    vec.emplace_back(3,4); // insert {3, 4} at the end

    // Differnce b/w push_back and emplace_back
    // push_back: it will insert at the end
    // emplace_back: it will insert at the end and it will take less space than push_back

    // vector<int> v(5,100); // 5 elements with value 100

    // vector<int> v(5); // 5 elements with value 0 or garbage value

    vector<int> v1(5, 20); // 5 elements with value 20

    vector<int> v2(v1); // copy of v1

    cout << v.at(0) << endl;

    // Iterators
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator it1 = v.end(); // points to next to last element
    vector<int>::reverse_iterator it2 = v.rend(); // points next to last element in reverse order that is one element before first element
    vector<int>::reverse_iterator it3 = v.rbegin(); // points to last element

    cout << v[0] << " " << v.at(1) << endl; 

    cout << v.back() << endl; // last element

    cout << endl << endl << endl;

    for (vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    for (auto it = v.begin(); it !=v.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    for (auto it : v){
        cout << it << " ";
    }

    cout << endl;

    v.erase(v.begin() + 1); // 2nd element is deleted

    cout << v.size() << endl;

    v.erase(v.begin() + 2, v.begin() + 4); // 3rd and 4th element are deleted

    cout << v.size() << endl;

    // Insert Function
    vector<int> v3(2,100); // 2 elements with value 100
    v3.insert(v3.begin(), 300); // 300 is inserted at the beginning
    cout << v3[0] << endl;

    v3.insert(v3.begin() + 1, 2, 10);
    cout << v3[1] << " "<< v3[2] << endl;

    vector<int> copy(2,50); // {50,50}
    copy.insert(copy.end(), v3.begin(), v3.end());

    cout << copy[6] << " " << copy[5] << endl; // copy={50, 50, 300, 10, 10, 100, 100}

    v.pop_back(); // last element is deleted

    cout << v.size() << endl;

    vector<int> v4{10,20};
    vector<int> v5{30,40};
    v4.swap(v5); // swap v4 and v5
    cout << v4[0] << " " << v5[0] << endl;

    v.clear(); // all elements are deleted
    cout << v.size() << endl;

    cout << v.empty();

}

// Lists : difference from vector is that they have front operations as well which are cheaper than insert operations
void explainList() {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(3);

    cout << ls.size()<<endl;

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

void explainDeque() {
    deque<int> dq;
    dq.push_back(1);
    // cout << dq[0] << endl;
    dq.emplace_back(2);
    // cout << dq[1] << endl;
    dq.push_front(4);
    // cout << dq[0] << endl;
    dq.emplace_front(3);
    // cout << dq[0] << endl;

    dq.pop_back();
    dq.pop_front();
    
    cout << dq.size()<< endl;

    dq.back();
    dq.front();

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    // cout << st.top(); // prints 5 "** st[2] is invalid **"
    
    st.pop(); // {4,3,2,1}
    // cout << st.top();
    // cout << st.size();
    cout << st.empty();

    stack<int>st1, st2;
    st1.swap(st2);

    //all operations of stack has O(1)

}

void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;
    // cout << q.back(); // 9
    // cout << q.front(); // 1
    
    q.pop(); // {2,9}
    cout << q.front();

    // rest functions are same as deque
    // all operations have O(1)
}

void explainPQ() {
    // Max Heap
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    // cout << pq.top() <<endl; // prints 10

    pq.pop(); // {8,5,2}
    // cout << pq.top(); // prints 8

    // rest functions are same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); // {5}
    pq1.push(2); // {2,5}
    pq1.push(8); // {2,5,8}
    pq1.emplace(10); // {2,5,8,10}

    cout << pq1.top(); // prints 2

    // Time complexity of push and pop is O(logn) and of top is O(1)
    // Internally it is maintained as a tree data structure
}


void explainSet() {
    // Sets are ordered and unique
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}
    st.emplace(5);

    // auto it = st.find(3);

    auto it2 = st.find(6); // it will give st.end() as 6 doesn't exist in set

    st.erase(5); // {1,2,3,4} // takes O(logn) time

    int cnt = st.count(1); // 1 exists in set, 0 doesn't

    auto it = st.find(3);
    st.erase(it); // It takes constant time

    auto it3 = st.find(2);
    auto it4 = st.find(4);
    st.erase(it3, it4);  // {1,4} because [start,end) 

}

void explainMultiSet() {
    // Same as set but it can have multiple occurences

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // It will erase all 1's

    int cnt = ms.count(1); // 3

    // only a single 1 erased
    ms.erase(ms.find(1));

    auto range = ms.equal_range(1);
    ms.erase(range.first, range.second); // This will erase all 1's from range.first to range.second

}

void explainUnorderedSet() {
    unordered_set<int> us;
    // lower_bound and upper_bound functions
    // does not work. Rest functions are smae 
    // as above, it is just like set but doesn't have
    // order. It has a better complexity than set in most cases,
    // except some when collision happens.
    // generally complexity is O(1), worst case which is rare, is O(n)
}

void explainMap (){
    map <int, int> mp;
    map <int, pair<int, int>> mp1;
    map <pair<int,int>,int> mp2;

    mp[1] = 2;
    mp.emplace(3,1);
    mp.insert({2,4});

    mp2[{2,3}] = 10;

    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1];
    cout << mp[5];

    auto it = mp.find(3);
    cout << (*(it)).second;

    auto it = mp.find(5); // it will give mp.end()

    // rest functions are same

}

void explainMultiMap (){
    // Same as map but it can have duplicate keys
    // only mpp[key] can't be used here
}

void explainUnorderedMap (){
    // same as map but unordered
}

bool comp (pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    // they are same
    if (p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    //sort (a, a+n); // where n is the size of the array/vector
    // sort (v.begin(), v.end());

    // sort(a, a+n, greater<int>()); // sort in decreasing order

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort it according to second element
    // if second element is same, sort according to first
    // in decreasing order

    // sort (a, a+n, comp);

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num1 = 12316541651;
    int cnt = __builtin_popcountll(num1);

    string s = "123"; // this has to be sorted in ascending order so that we can get all permutations

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    // int maxx_element = *max_element(a, a+n); 
}

int main()
{
    // explainPairs();
    // explainVectors();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();


    return 0;
}