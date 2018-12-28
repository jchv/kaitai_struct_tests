#include <boost/test/unit_test.hpp>

#include <if_instances.h>

#include <iostream>
#include <fstream>
#include <vector>

BOOST_AUTO_TEST_CASE(test_if_instances) {
    std::ifstream ifs("src/fixed_struct.bin", std::ifstream::binary);
    kaitai::kstream ks(&ifs);
    if_instances_t* r = new if_instances_t(&ks);

    BOOST_CHECK(r->_is_null_never_happens());

    delete r;
}