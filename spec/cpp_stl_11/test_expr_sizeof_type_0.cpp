// Autogenerated from KST: please remove this line if doing any edits by hand!

#include <boost/test/unit_test.hpp>
#include <expr_sizeof_type_0.h>
#include <iostream>
#include <fstream>
#include <vector>

BOOST_AUTO_TEST_CASE(test_expr_sizeof_type_0) {
    std::ifstream ifs("src/fixed_struct.bin", std::ifstream::binary);
    kaitai::kstream ks(&ifs);
    expr_sizeof_type_0_t* r = new expr_sizeof_type_0_t(&ks);

    BOOST_CHECK_EQUAL(r->sizeof_block(), ((1 + 4) + 2));

    delete r;
}