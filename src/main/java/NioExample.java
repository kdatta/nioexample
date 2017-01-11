import java.nio.ByteBuffer;

public class NioExample {

  static {
    System.loadLibrary("nioexample-1.0-SNAPSHOT");
//    NarSystem.loadLibrary();
  }

  public native int readBuffer(ByteBuffer in, int size);
  public native int writeBuffer(ByteBuffer out);

  public void printBuffer(ByteBuffer byteBuffer) {
    for (int i = 0; i < byteBuffer.capacity(); ++i) {
      System.out.println((int)byteBuffer.get(i));
    }
  }

}
