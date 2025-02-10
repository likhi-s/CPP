#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
public:
    int m_camera;
    Camera(int camera);
    Camera();
    ~Camera();
    void takeapic();
    void display();
};

#endif // CAMERA_H
