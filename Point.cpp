//
// Created by knigh on 10/26/2015.
//

#include "Point.h"
#include <cmath>

Clustering::Point::Point(int i) {
    dim = 0;
}

Clustering::Point::Point(int i, double *pDouble) {
    dim = i;
    *values = *pDouble;
}

Clustering::Point::Point(const Clustering::Point &point) {
    this->dim = point.dim;
    this->values = new double[dim];
    for (int temp = 0; temp < dim; temp++) {
        this->values[temp] = point.values[temp];
    }
}

Clustering::Point &Clustering::Point::operator=(const Clustering::Point &point) {
    double* temp1 = this->values;
    this->values = new double[point.dim];
    delete [] temp1;

    this->dim = point.dim;
    for (int temp = 0; temp < dim; temp++) {
        this->values[temp] = point.values[temp];
    }
    return *this;
}

Clustering::Point::~Point() {
    delete [] values;
}

void Clustering::Point::setValue(int i, double d) {
    values[i] = d;
}

double Clustering::Point::getValue(int i) const {
    return values[i];
}

double Clustering::Point::distanceTo(const Clustering::Point &point) const {
    for(int temp = 0; temp < dim; temp++)
    return sqrt(pow(point.getValue(values[temp])-(point.values[temp]),2));
}

Clustering::Point &Clustering::Point::operator*=(double d) {
    for (int temp = 0; temp < dim; temp++) {
        this->values[temp] *= d;
    }
    return *this;
}

Clustering::Point &Clustering::Point::operator/=(double d) {
    for (int temp = 0; temp < dim; temp++) {
        this->values[temp] /= d;
    }
    return *this;
}

const Clustering::Point Clustering::Point::operator*(double d) const {
    for (int temp = 0; temp < dim; temp++) {
        this->values[temp] *= d;
    }
    return *this;
}

const Clustering::Point Clustering::Point::operator/(double d) const {
    for (int temp = 0; temp < dim; temp++) {
        this->values[temp] /= d;
    }
    return *this;
}

friend Clustering::Point &Clustering::operator+=(Clustering::Point &point, const Clustering::Point &point1) {
    for (int temp = 0; temp < dim; temp++) {
        point.values[temp] += point1.values[temp];
    }
    return point;
}

friend Clustering::Point &Clustering::operator-=(::Clustering::Point::Point &point, const ::Clustering::Point::Point &point1) {
    for (int temp = 0; temp < dim; temp++) {
        point.values[temp] -= point1.values[temp];
    }
    return point;

}

friend const Clustering::Point Clustering::operator+(const Clustering::Point &point, const Clustering::Point &point1) {
    for (int temp = 0; temp < dim; temp++) {
        point.values[temp] += point1.values[temp];
    }
    return point;

}

friend const Clustering::Point Clustering::operator-(const Clustering::Point &point, const Clustering::Point &point1) {
    for (int temp = 0; temp < dim; temp++) {
        point.values[temp] -= point1.values[temp];
    }
    return point;
}


friend bool Clustering::operator==(const Clustering::Point &point, const Clustering::Point &point1) {
    return point == point1;
}

friend bool Clustering::operator!=(const Clustering::Point &point, const Clustering::Point &point1) {
    return !(point == point1);
}



friend bool Clustering::operator<(const Clustering::Point &point, const Clustering::Point &point1) {
    return point < point1;
}

friend bool Clustering::operator>(const Clustering::Point &point, const Clustering::Point &point1) {
    return point > point1;
}

friend bool Clustering::operator<=(const Clustering::Point &point, const Clustering::Point &point1) {
    return point <= point1;
}

friend bool Clustering::operator>=(const Clustering::Point &point, const Clustering::Point &point1) {
    return point >= point1;
}

friend std::ostream &Clustering::operator<<(std::ostream &ostream, const Clustering::Point &point) {
    ostream << point;
    return ostream;
}

friend std::istream &Clustering::operator>>(std::istream &istream, Clustering::Point &point) {
    istream >> point;
    return istream;
}
