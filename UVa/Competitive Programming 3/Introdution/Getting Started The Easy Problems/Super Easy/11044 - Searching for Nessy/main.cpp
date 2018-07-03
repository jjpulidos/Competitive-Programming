#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin>>t;
    for (int i = 0; i<t;i++) {
        int n,m;
        cin>>n>>m;
        int res = floor(n/3) *floor(m/3);
        cout<<res<<'\n';
    }
    return 0;
}
/*
import tensorflow as tf
hello = tf.constant('Hello, TensorFlow!')
sess = tf.Session()
print(sess.run(hello))*/