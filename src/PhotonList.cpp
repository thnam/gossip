#include "PhotonList.h"

using namespace std;

PhotonList::PhotonList()
{
  photon.clear();
}

void PhotonList::AddPhoton( double x, double y, double time )
{
  photon.clear();
  photon.push_back(x);
  photon.push_back(y);
  photon.push_back(time);
  this->push_back(photon);
}

void PhotonList::AddPhotonList( PhotonList photonList )
{
  for(int i=0;i<photonList.size();i++)
  {
    photon.clear();
    photon = photonList.at(i);
    this->push_back(photon);
  }
}