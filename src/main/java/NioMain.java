import java.nio.ByteBuffer;

public class NioMain {

  public static void main(String args[]) {

    ByteBuffer buffer = ByteBuffer.allocateDirect(1000);
    NioExample example = new NioExample();
    example.readBuffer(buffer, 1000);
    example.printBuffer(buffer);
    example.writeBuffer(buffer);
  }
}
