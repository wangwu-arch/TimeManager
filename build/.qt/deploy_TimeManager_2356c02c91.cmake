include("/home/wangwu/qt_code/day0623/TimeManager/build/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/TimeManager-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE /home/wangwu/qt_code/day0623/TimeManager/build/TimeManager
    GENERATE_QT_CONF
)
