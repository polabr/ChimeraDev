#ifndef FINDMUON_H
#define FINDMUON_H

#include "TROOT.h"
#include "TTree.h"
#include <tuple>

Double_t muon_logLLHD_p1(Int_t n);

Double_t muon_logLLHD_p2(Double_t sigmaSqX, Double_t sigmaSqY, Double_t sigmaSqZ, Double_t sigmaSqTheta, Double_t sigmaSqPhi, Double_t sigmaSqLen);

Double_t muon_logLLHD_p3(Double_t sigmaSqX, Double_t x, Double_t muX, Double_t sigmaSqY, Double_t y, Double_t muY, 
		    Double_t sigmaSqZ, Double_t z, Double_t muZ, Double_t sigmaSqTheta, Double_t theta, Double_t muTheta, 
		    Double_t sigmaSqPhi, Double_t phi, Double_t muPhi, Double_t sigmaSqLen, Double_t len, Double_t muLen);

double findChosenX( Double_t inX, Double_t inY, Double_t inZ, Double_t inMuTheta, Double_t inMuPhi, Double_t inMuLen, Int_t j);

std::tuple<Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t> findMuonTrack( Double_t inX, Double_t inY, Double_t inZ, Double_t inMuTheta, Double_t inMuPhi, Double_t inMuLen, Int_t j, TTree *myTree);

#endif
