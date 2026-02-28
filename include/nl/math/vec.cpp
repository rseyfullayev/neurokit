module nl.math.vec;

namespace nl::math {

    size_t Vec::length() const {
        return this -> vec.size();
    }

    float& Vec::operator()(size_t i) {
        return this -> vec[i];
    }

    const Vec::float& operator() (size_t i) const {
        return this -> vec[i];
    }

    float dot(const Vec& a, const Vec& b) {
        if(a.length() != b.length()) {
            throw std::invalid_argument("Vector sizes must match");
        }
        float sum = 0.0f;
        for(int i = 0; i < length(a); ++i) {
            
            sum += a[i] * b[i];
        }
        return sum;
    }
    Vec operator+(const Vec& a, const Vec& b) {
        if(length(a) != length(b)) {
            throw std::invalid_argument("Vector sizes must match");
        }
        Vec result;
        for(int i = 0; i < a.length(); ++i) {
            result[i] = a[i] + b[i];
        } 
        return result;
    }   
}