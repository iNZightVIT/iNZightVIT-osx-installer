// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_IMPLEMENTOR_P_H
#define _ATKMM_IMPLEMENTOR_P_H


#include <glibmm/private/interface_p.h>

namespace Atk
{

class Implementor_Class : public Glib::Interface_Class
{
public:
  typedef Implementor CppObjectType;
  typedef AtkImplementor BaseObjectType;
  typedef AtkImplementorIface BaseClassType;
  typedef Glib::Interface_Class CppClassParent;

  friend class Implementor;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static AtkObject* ref_accessible_vfunc_callback(AtkImplementor* self);
};


} // namespace Atk


#endif /* _ATKMM_IMPLEMENTOR_P_H */

