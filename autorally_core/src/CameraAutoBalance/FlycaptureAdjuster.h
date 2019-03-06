#ifndef AUTORALLY_BALANCE_FLYCAP_CAM_H
#define AUTORALLY_BALANCE_FLYCAP_CAM_H

#include <flycapture/FlyCapture2.h>

class FlycaptureAdjuster : public CameraAdjuster {
  public:
    FlycaptureAdjuster() = default;

  protected:
    FlyCapture2::Camera cam_;    ///<PointGrey camera handle
    FlyCapture2::Property prop_; ///<PointGrey property handle
    FlyCapture2::Error err_;     ///<PointGrey error handle
};

#endif  // AUTORALLY_BALANCE_FLYCAP_CAM_H
