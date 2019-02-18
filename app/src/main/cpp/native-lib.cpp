#include <jni.h>
#include <string>
#include <android/log.h>

int addition(int a, int b) {
    return a + b;
}

 // 返回一个String类型的字符串
extern "C" JNIEXPORT jstring JNICALL
// 参数说明
// 1. JNIEnv：代表了VM里面的环境，本地的代码可以通过该参数与Java代码进行操作
// 2. obj：定义JNI方法的类的一个本地引用（this）
Java_com_example_mrrun_ndkdemo_Java2JNI_stringFromJNI(
        JNIEnv* env,
        jobject obj/* this */) {
    std::string hello = "Hello from C++ Demo";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_mrrun_ndkdemo_Java2JNI_message2JNI(
        JNIEnv* env,
        jstring jstr) {
    std::string hello = "三生三世";
    return env->NewStringUTF(hello.c_str());
}

