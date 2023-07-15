#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {
    public:
        Array() {
            _arr = new T[0];
            _len = 0;
        };

        Array(unsigned int n) {
            _arr = new T[n];
            _len = n;
        };

        Array<T>& operator=(const Array<T>& ref) {
            delete[] _arr;
            return Array(ref);
        };

        Array(const Array<T>& ref) {
            _arr = new T[ref._len];
            _len = ref._len;
            for (unsigned int i = 0; i < _len; i++)
                _arr[i] = ref._arr[i];
        };

        T& operator[](const unsigned int index) {
            if (index >= _len)
                throw std::runtime_error ("out of bounds");
            return _arr[index];
        };

        unsigned int size() const {
            return _len;
        };

        ~Array() {
            delete[] _arr;
        }
    private:
    T               *_arr;
    unsigned int    _len;
};

#endif