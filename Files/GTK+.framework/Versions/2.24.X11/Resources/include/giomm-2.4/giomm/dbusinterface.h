// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSINTERFACE_H
#define _GIOMM_DBUSINTERFACE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2012 The giomm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GDBusInterfaceIface GDBusInterfaceIface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GDBusInterface GDBusInterface;
typedef struct _GDBusInterfaceClass GDBusInterfaceClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{

namespace DBus
{ class Interface_Class; } // namespace DBus

} // namespace Gio
namespace Gio
{

namespace DBus
{

class InterfaceInfo;
class Object;


//TODO: Have Proxy derive from this interface when there is an ABI break.

/** Interface - Base type for D-Bus interfaces.
 * The Interface type is the base type for D-Bus interfaces both on the service
 * side (see InterfaceSkeleton) and client side (see Proxy).
 * @newin{2,34}
 */


class Interface : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Interface CppObjectType;
  typedef Interface_Class CppClassType;
  typedef GDBusInterface BaseObjectType;
  typedef GDBusInterfaceIface BaseClassType;

private:
  friend class Interface_Class;
  static CppClassType interface_class_;

  // noncopyable
  Interface(const Interface&);
  Interface& operator=(const Interface&);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Interface();
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Interface(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Interface(GDBusInterface* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Interface();

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GDBusInterface*       gobj()       { return reinterpret_cast<GDBusInterface*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GDBusInterface* gobj() const { return reinterpret_cast<GDBusInterface*>(gobject_); }

private:


public:
  
  /** Gets D-Bus introspection information for the D-Bus interface
   * implemented by @a interface.
   * 
   * @newin{2,30}
   * @return A DBusInterfaceInfo. Do not free.
   */
  Glib::RefPtr<InterfaceInfo> get_info();
  
  /** Gets D-Bus introspection information for the D-Bus interface
   * implemented by @a interface.
   * 
   * @newin{2,30}
   * @return A DBusInterfaceInfo. Do not free.
   */
  Glib::RefPtr<const InterfaceInfo> get_info() const;

  
  /** Gets the DBusObject that @a interface belongs to, if any.
   * 
   * <warning>It is not safe to use the returned object if @a interface
   * or the returned object is being used from other threads. See
   * g_dbus_interface_dup_object() for a thread-safe
   * alternative.</warning>
   * 
   * @newin{2,30}
   * @return A DBusObject or <tt>0</tt>. The returned
   * reference belongs to @a interface and should not be freed.
   */
  Glib::RefPtr<Gio::DBus::Object> get_object();
  
  /** Gets the DBusObject that @a interface belongs to, if any.
   * 
   * <warning>It is not safe to use the returned object if @a interface
   * or the returned object is being used from other threads. See
   * g_dbus_interface_dup_object() for a thread-safe
   * alternative.</warning>
   * 
   * @newin{2,30}
   * @return A DBusObject or <tt>0</tt>. The returned
   * reference belongs to @a interface and should not be freed.
   */
  Glib::RefPtr<const Gio::DBus::Object> get_object() const;

  
  /** Gets the DBusObject that @a interface belongs to, if any.
   * 
   * @newin{2,32}
   * @return A DBusObject or <tt>0</tt>. The returned
   * reference should be freed with Glib::object_unref().
   */
  Glib::RefPtr<Gio::DBus::Object> dup_object();
  
  /** Gets the DBusObject that @a interface belongs to, if any.
   * 
   * @newin{2,32}
   * @return A DBusObject or <tt>0</tt>. The returned
   * reference should be freed with Glib::object_unref().
   */
  Glib::RefPtr<const Gio::DBus::Object> dup_object() const;

  
  /** Sets the DBusObject for @a interface to @a object.
   * 
   * Note that @a interface will hold a weak reference to @a object.
   * 
   * @newin{2,30}
   * @param object A DBusObject or <tt>0</tt>.
   */
  void set_object(const Glib::RefPtr<Gio::DBus::Object>& object);

    virtual Glib::RefPtr<InterfaceInfo> get_info_vfunc() const;

    virtual Glib::RefPtr<Gio::DBus::Object> get_object_vfunc() const;


    virtual void set_object_vfunc(const Glib::RefPtr<Gio::DBus::Object>& object);


    virtual Glib::RefPtr<Gio::DBus::Object> dup_object_vfunc() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace DBus

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::DBus::Interface
   */
  Glib::RefPtr<Gio::DBus::Interface> wrap(GDBusInterface* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_DBUSINTERFACE_H */

