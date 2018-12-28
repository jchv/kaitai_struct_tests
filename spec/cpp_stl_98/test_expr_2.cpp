// Autogenerated from KST: please remove this line if doing any edits by hand!

#include <boost/test/unit_test.hpp>
#include <expr_2.h>
#include <iostream>
#include <fstream>
#include <vector>

BOOST_AUTO_TEST_CASE(test_expr_2) {
    std::ifstream ifs("src/str_encodings.bin", std::ifstream::binary);
    kaitai::kstream ks(&ifs);
    expr_2_t* r = new expr_2_t(&ks);

    BOOST_CHECK_EQUAL(r->str1()->len_orig(), 10);
    BOOST_CHECK_EQUAL(r->str1()->len_mod(), 7);
    BOOST_CHECK_EQUAL(r->str1()->str(), std::string("Some AS"));
    BOOST_CHECK_EQUAL(r->str1_len(), 7);
    BOOST_CHECK_EQUAL(r->str1_len_mod(), 7);
    BOOST_CHECK_EQUAL(r->str1_byte1(), 73);
    BOOST_CHECK_EQUAL(r->str1_avg(), 73);
    BOOST_CHECK_EQUAL(r->str1_char5(), std::string("e"));
    BOOST_CHECK_EQUAL(r->str1_tuple5()->byte0(), 101);
    BOOST_CHECK_EQUAL(r->str1_tuple5()->byte0(), 101);
    BOOST_CHECK_EQUAL(r->str1_tuple5()->byte1(), 32);
    BOOST_CHECK_EQUAL(r->str1_tuple5()->byte2(), 65);
    BOOST_CHECK_EQUAL(r->str1_tuple5()->avg(), 48);
    BOOST_CHECK_EQUAL(r->str2_tuple5()->byte0(), 101);
    BOOST_CHECK_EQUAL(r->str2_tuple5()->byte1(), 32);
    BOOST_CHECK_EQUAL(r->str2_tuple5()->byte2(), 65);
    BOOST_CHECK_EQUAL(r->str2_tuple5()->avg(), 48);

    delete r;
}