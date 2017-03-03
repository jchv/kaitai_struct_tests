var assert = require('assert');
var testHelper = require('testHelper');

testHelper('StrLiterals', 'src/fixed_struct.bin', function(r) {
  function strToArr(s) {
    var r = [];
    for (var i = 0; i < s.length; i++)
      r[i] = s.charCodeAt(i);
    return r.toString();
  }
  assert.equal(strToArr(r.complexStr), [0, 1, 2, 7, 8, 10, 13, 9, 11, 12, 27, 61, 7, 10, 36, 9787].toString());
  assert.equal(strToArr(r.doubleQuotes), [34, 34, 34].toString());
  assert.equal(strToArr(r.backslashes), [92, 92, 92].toString());
});
