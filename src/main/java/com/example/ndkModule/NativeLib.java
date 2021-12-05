package com.example.ndkModule;

public class NativeLib {
    public native String stringFromJNI();

    public native Long createNewWebSocket();

    public native void runSocket(Long jsContextNativePointer);

    static {
        System.loadLibrary("ndkModule");
    }
}
