// Autogenerated from KST: please remove this line if doing any edits by hand!

package io.kaitai.struct.spec;

import io.kaitai.struct.testformats.DefaultEndianExprException;
import org.testng.annotations.Test;
import static org.testng.Assert.*;
import io.kaitai.struct.KaitaiStream;
public class TestDefaultEndianExprException extends CommonSpec {

    @Test(expectedExceptions = KaitaiStream.UndecidedEndiannessError.class)
    public void testDefaultEndianExprException() throws Exception {
        DefaultEndianExprException r = DefaultEndianExprException.fromFile(SRC_DIR + "endian_expr.bin");

    }
}
