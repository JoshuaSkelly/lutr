/*
 *  CubeOutpurFormat.cpp
 *
 *  @author: Joshua Skelton joshua.skelton@gmail.com
 */

#include <iostream>

#include "CubeOutputFormat.h"

CubeOutputFormat::CubeOutputFormat() {
    this->colorTable = nullptr;
}

CubeOutputFormat::~CubeOutputFormat() {
    
}

void CubeOutputFormat::Begin() {
    file.open(this->ColorTable()->FileName() + ".cube");
    
    file << "LUT_3D_SIZE 8" << std::endl << std::endl;
}

void CubeOutputFormat::End() {
    file << std::endl;
    file.close();
}

void CubeOutputFormat::Write(Color c) {
    file << c.Rf() << " " << c.Gf() << " " << c.Bf() << std::endl;
}