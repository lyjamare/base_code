template<typename T> void swap(T& t1, T& t2) {
    T Ttmp;
    Ttmp = t1;
    t1 = t2;
    t2 = Ttmp;
}
