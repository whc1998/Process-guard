//
// Created by WSY on 2018/8/14.
//

#ifndef PROCESSGUARD_NATICE_LIB_H
#define PROCESSGUARD_NATICE_LIB_H

#endif //PROCESSGUARD_NATICE_LIB_H

#include <sys/select.h>
#include <unistd.h>
#include <sys/socket.h>
#include <pthread.h>
#include <signal.h>
#include <sys/wait.h>
#include <android/log.h>
#include <sys/types.h>
#include <sys/un.h>
#include <errno.h>
#include <stdlib.h>
#include <linux/signal.h>
#define LOG_TAG "tuch"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

void child_do_work();
int child_creat_channel();
void child_listen_msg();