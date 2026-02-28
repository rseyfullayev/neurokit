export module nl.math;


#include <vector>
#include <cstddef>

export namespace nl::math {

    export class Matrix {
    public:
        size_t row() const;
        size_t col() const;

        float& operator()(size_t i, size_t j);
        const float& operator()(size_t i, size_t j) const;

    private:
        std::vector<std::vector<float>> mat{};
    };

}