from eg import eg
import unittest

class Test(unittest.TestCase):
    def test(self):
        testcase = 3
        expected = 2
        self.assertEqual(eg(testcase) , expected)

unittest.main()