import unittest
import pyMain

class TestMain(unittest.TestCase):
    def test_do_stuff(self):
        test_param = 10
        result = pyMain.do_stuff(test_param)
        self.assertEqual(result, 15)

unittest.pyMain()