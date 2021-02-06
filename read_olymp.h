//
// Created by Vlad04 on 06.02.2021.
//

#include "iostream"
#include "algorithm"
#include "vector"
#include "iterator"

#ifndef OLYMPIADS_MIREA_READ_OLYMP_H
#define OLYMPIADS_MIREA_READ_OLYMP_H

////=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#define ll int64_t
#define ld long double
#define all(x) begin(x), end(x)
#define end_line '\n'
#define space ' '

using namespace std;

////=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

template<typename T>
T read() {
    T value; cin >> value;
    return value;
}

int read_int() {
    return read<int>();
}
ll read_ll() {
    return read<ll>();
}
ld read_ld() {
    return read<ld>();
}
string read_string() {
    return read<string>();
}

////=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

template<typename T>
vector<T> read_array() {
    ll length = read_ll();
    vector<T> array(length);

    for_each(all(array), [](T& num) {
        cin >> num;
    });
    return array;
}

vector<int> read_int_array() {
    return read_array<int>();
}
vector<ll> read_ll_array() {
    return read_array<ll>();
}
vector<ld> read_ld_array() {
    return read_array<ld>();
}
vector<string> read_string_array() {
    return read_array<string>();
}

////=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

template<typename T>
void print_array(vector<T> &array) {
    for_each(all(array), [](const T& num) {
        cout << num << space;
    });
}

////=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void init_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

////=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#endif //OLYMPIADS_MIREA_READ_OLYMP_H
