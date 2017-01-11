#include <cstdio>
#include <cstdlib>
#include "NioExample.h"

JNIEXPORT jint JNICALL Java_NioExample_readBuffer(
    JNIEnv *env,
    jobject obj,
    jobject bufferIn,
    jint size) {
	char* value;           /* the return value */

	char buf[40];            /* working buffer (really only need 20 ) */


	printf(buf, "%s", "Hello NAR World!");

	value = (char*)env->GetDirectBufferAddress(bufferIn);
	for (int i = 0; i < size; ++i)
	    value[i] = (char) rand()%256;

	return 0;
}

JNIEXPORT jint JNICALL Java_NioExample_writeBuffer(
    JNIEnv *env,
    jobject obj,
    jobject bufferOut) {
	long capacity = env->GetDirectBufferCapacity(bufferOut);
	printf("Size: %ld\n", capacity);
	return 0;
}
