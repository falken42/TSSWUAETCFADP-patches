These patches enable the VBCC compiler included with the WinUAE Demo ToolChain V4 to make calls into AmigaOS from C code.

This toolchain is unique in that it provides a VBCC cross-compiler which runs on Windows, as well as a pre-configured WinUAE to allow for quick development for Amiga, running completely on Windows.

However, a stock install of the toolchain appears to be geared mostly toward development in 68k assembly.  While it is possible to call into C code from assembly and vice versa, attempting to include any of the AROS headers from C code results in a screen full of compilation errors.  This is due to the toolchain headers utilizing features not supported by the VBCC compiler.

Included here are drop-in replacement headers for the toolchain to allow the AROS headers to properly be included, and allow C code to call into AmigaOS.  Every patch made to the headers has been demarked with a #ifdef __VBCC__ / #endif pair to ensure that the headers will still work properly even if used with a different compiler.

How to install:
---------------
1) Download The Super Simple WinUAE Tool Chain For Amiga Demo Programmers (TSSWUAETCFADP) Version 4 from: http://pouet.net/prod.php?which=58703

2) Unpack the .zip file somewhere on your system.

3) Overwrite the ToolChain folder with the files from this repository.  The same directory structure is used as in the toolchain.

4) Build an intro for Amiga in C!

Caveats:
--------
While I have patched all of the headers that access AmigaOS libraries using the same format, I do not know if they are all fully functional.  I have successfully built code utilizing exec, dos.library, intuition.library, graphics.library, and timer.device, so basic functionality should work.  If you find an AROS header which has problems compiling, or does not work properly for some reason, please let me know and I will look into adding a patch for it.

Changes in detail:
------------------
1) VBCC does not support the keyword '__extension__', utilized in aros/_timeval.h.  Patched timeval struct to use AROS version only.

2) VBCC internally defines the keywords '__noreturn' and '__section()' in aros/system.h, so explicitly defining them is not necessary.

3) VBCC has problems compiling the boost preprocessor library in general (included from aros/preprocessor/variadic/cast2iptr.hpp), so support for the AROS variadic macros was completely removed.  The macros are used to call into AmigaOS with other compilers, but as VBCC provides inline assembly definitions for the OS function calls, these macros are not necessary.

4) All headers in arosinclude/proto were patched to include the inline assembly definitions for the OS calls.  A few headers were given extra includes to provide required definitions as necessary.

5) Exec was missing the definition for AVLKey, and was patched in arosinclude/proto/exec.h.  Intuition was missing the definition for Msg, and was patched in arosinclude/proto/intuition.h.

6) The VBCC preprocessor does not support the string join '##' macro, used in arosinclude/sys/arosc.h.  Patched to completely remove support for the SYSTEM_CALL() macro, which is not used as VBCC provides it's own implementation to call into AmigaOS via inline assembly.

7) VBCC does not support variable preprocessor arguments without a separating comma, but this functionality is used in arosinclude/utility/tagitem.h.  Unfortunately there is no good patch for this, so the TAGLIST() macro is completely removed.  User applications will have to avoid it's use.

8) VBCC gives a warning 289 if a preprocessor hash mark is specified on a line by itself without any directive.  The .hpp headers in arosinclude/aros/preprocessor where patched to remove those lines with no directive specified.
