#include <jni.h>
#include <string>

#define TAG "JSI_TEST"

#ifdef __ANDROID__
#include <android/log.h>

#define LOG(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)

#else // iOS

#define LOG(...) printf("[%s]: ", TAG); printf(__VA_ARGS__); printf("\n")

#endif //__ANDROID__

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ndkModule_NativeLib_stringFromJNI(
													 JNIEnv* env,
													 jobject /* this */) {
														 
														 std::string hello = "Hello from C++";
														 return env->NewStringUTF(hello.c_str());
													 }

extern "C" JNIEXPORT jlong JNICALL
Java_com_example_ndkModule_NativeLib_createNewWebSocket(JNIEnv *, jobject) {
	
	return (long)(NULL);
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_ndkModule_NativeLib_runSocket(JNIEnv *, jobject, jlong ptr) {
	const char *urls[1];
}
