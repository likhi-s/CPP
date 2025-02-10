#include "camera.h"
#include <iostream>
using namespace std;
Camera::Camera(int camera):m_camera(camera)
{
    cout<<"Camera Constructor called"<<endl;
}
Camera::Camera()
{}
Camera::~Camera()
{
    cout<<"Camera destructor called"<<endl;
}

void Camera::takeapic()
{
    cout<<"camera"<<endl;
}

void Camera::display()
{
    cout<<"display camera"<<endl;
}
