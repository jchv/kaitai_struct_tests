<?php
// Autogenerated from KST: please remove this line if doing any edits by hand!

namespace Kaitai\Struct\Tests;

class ParamsEnumTest extends TestCase {
    public function testParamsEnum() {
        $r = ParamsEnum::fromFile(self::SRC_DIR_PATH . '/enum_0.bin');

        $this->assertEquals(\Kaitai\Struct\Tests\ParamsEnum\Animal::CAT, $r->one());
        $this->assertEquals(true, $r->invokeWithParam()->isCat());
    }
}