package ztbd.qf.com.jnidemox4;

/**
 * Created by Administrator on 2016/7/11.
 */
public class JniUtils {
    public static native String getStr();
    static {
        System.loadLibrary("NdkJniDemo");
    }
}
