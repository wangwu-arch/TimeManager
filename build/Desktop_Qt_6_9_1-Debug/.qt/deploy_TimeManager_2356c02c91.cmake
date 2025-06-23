include("/home/wangwu/qt_code/day0623/TimeManager/build/Desktop_Qt_6_9_1-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/TimeManager-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE /home/wangwu/qt_code/day0623/TimeManager/build/Desktop_Qt_6_9_1-Debug/TimeManager
    GENERATE_QT_CONF
)
