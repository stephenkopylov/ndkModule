package com.example.ndkModule;

public class NativeLib {
    private native String stringFromJNI();

    private native Long createNewWebSocket();

    private native void runSocket(Long jsContextNativePointer);

    static {
        System.loadLibrary("ndkModule");
    }
}
