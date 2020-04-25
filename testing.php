<?php declare(strict_types = 1);

$ffi = \FFI::cdef(file_get_contents(__DIR__.'/tesseract.h'), 'libtesseract.so');

echo $ffi->TessVersion();
