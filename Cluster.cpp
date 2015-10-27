//
// Created by knigh on 10/26/2015.
//
#include "Cluster.h"

Clustering::Cluster::Cluster(const Clustering::Cluster &cluster) {

}

Clustering::Cluster &Clustering::Cluster::operator=(const Clustering::Cluster &cluster) {
    return cluster = cluster;
}

Clustering::Cluster::~Cluster() {

}

void Clustering::Cluster::add(Clustering::PointPtr const &ptr) {

}

//////////////////////////////////////////////////////
Clustering::PointPtr const &Clustering::Cluster::remove(Clustering::PointPtr const &ptr) {
}

///////////////////////////////////////////////////////
std::ostream &operator<<(std::ostream &ostream, const Clustering::Cluster &cluster) {
    ostream << cluster;
    return ostream;
}

std::istream &Clustering::operator>>(std::istream &istream, Clustering::Cluster &cluster) {
    istream >> cluster;
    return istream;
}

////////////////////////////////////////////////////////
friend bool Clustering::operator==(const Clustering::Cluster &lhs, const Clustering::Cluster &rhs) {

    return lhs == rhs;
}

///////////////////////////////////////////////////////
Clustering::Cluster &Clustering::Cluster::operator+=(const Clustering::Cluster &rhs) {
    return rhs += rhs;
}

Clustering::Cluster &Clustering::Cluster::operator-=(const Clustering::Cluster &rhs) {
    return rhs -= rhs;
}

Clustering::Cluster &Clustering::Cluster::operator+=(const Clustering::Point &rhs) {
    return rhs += 2;
}

Clustering::Cluster &Clustering::Cluster::operator-=(const Clustering::Point &rhs) {
    return rhs -= 2;
}

////////////////////////////////////////////////////////
const Clustering::Cluster Clustering::operator+(const Clustering::Cluster &lhs, const Clustering::Cluster &rhs) {
    return lhs + rhs;
}

const Clustering::Cluster Clustering::operator-(const Clustering::Cluster &lhs, const Clustering::Cluster &rhs) {
    return lhs - rhs;
}



const Clustering::Cluster Clustering::operator+(const Clustering::Cluster &lhs, Clustering::PointPtr const &rhs) {

}

friend const Clustering::Cluster Clustering::operator-(const Clustering::Cluster &lhs, Clustering::PointPtr const &rhs) {

}
