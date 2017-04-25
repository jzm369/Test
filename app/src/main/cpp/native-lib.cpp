#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_example_jiangzm_nativetest_MainActivity_getString(JNIEnv *env, jobject instance,
                                                           jstring s_) {
    const char *s = env->GetStringUTFChars(s_, 0);

    // TODO

    env->ReleaseStringUTFChars(s_, s);

    return env->NewStringUTF("hello");
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_jiangzm_nativetest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
