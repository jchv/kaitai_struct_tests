local luaunit = require("luaunit")

require("enum_0")

TestEnum0 = {}

function TestEnum0:test_enum_0()
    local r = Enum0:from_file("src/enum_0.bin")

    luaunit.assertEquals(r.pet_1, Enum0.Animal.cat)
    luaunit.assertEquals(r.pet_2, Enum0.Animal.chicken)
end