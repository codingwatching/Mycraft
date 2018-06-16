//
// Created by twome on 16/06/2018.
//

#ifndef MYCRAFT_ANDROIDSTUDIO_LOGGER_H
#define MYCRAFT_ANDROIDSTUDIO_LOGGER_H

#include <android/log.h>

#define  LOG_TAG    "MyCraft_Native"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)


#endif //MYCRAFT_ANDROIDSTUDIO_LOGGER_H
