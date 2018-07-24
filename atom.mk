###############################################################################

LOCAL_PATH := $(call my-dir)

###############################################################################

include $(CLEAR_VARS)

LOCAL_MODULE := tup

LOCAL_SRC_FILES := test_unique_ptr.cpp

LOCAL_CXXFLAGS := -std=c++11

include $(BUILD_EXECUTABLE)
