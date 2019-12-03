find_library(FLYCAP_LIB flycapture)

if(FLYCAP_LIB)
  add_library(NewCameraAutoBalance NewCameraAutoBalance.cpp)
  add_dependencies(NewCameraAutoBalance autorally_msgs_gencpp)
  set_target_properties(NewCameraAutoBalance PROPERTIES COMPILE_FLAGS "-march=native -O3 -ffast-math")
  target_link_libraries(NewCameraAutoBalance ${catkin_LIBRARIES} ${OpenCV_LIBRARIES} ${cv_bridge_LIBRARIES} ${FLYCAP_LIB})

install(TARGETS
  NewCameraAutoBalance
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
else()
  message(WARNING "Could not find FlyCapture library. Will not build NewCameraAutoBalance")
endif()
