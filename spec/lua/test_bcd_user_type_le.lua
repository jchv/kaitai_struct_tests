local luaunit = require("luaunit")

require("bcd_user_type_le")

TestBcdUserTypeLe = {}

function TestBcdUserTypeLe:test_bcd_user_type_le()
    local r = BcdUserTypeLe:from_file("src/bcd_user_type_le.bin")

    luaunit.assertEquals(r.ltr.as_int, 12345678)
    luaunit.assertEquals(r.ltr.as_str, "12345678")
    luaunit.assertEquals(r.rtl.as_int, 87654321)
    luaunit.assertEquals(r.rtl.as_str, "87654321")
    luaunit.assertEquals(r.leading_zero_ltr.as_int, 123456)
    luaunit.assertEquals(r.leading_zero_ltr.as_str, "00123456")
end