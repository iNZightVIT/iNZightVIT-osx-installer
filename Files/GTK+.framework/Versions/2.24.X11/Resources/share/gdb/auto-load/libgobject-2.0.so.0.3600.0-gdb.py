import sys
import gdb

# Update module path.
dir_ = '/Library/Frameworks/GTK+.framework/Versions/2.24.X11/Resources/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from gobject import register
register (gdb.current_objfile ())
