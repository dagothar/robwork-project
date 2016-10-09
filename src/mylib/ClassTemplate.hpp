/**
 * @file ClassTemplate.hpp
 * @author AUTHOR
 * @date DATE
 */

#ifndef CLASSTEMPLATE_HPP
#define CLASSTEMPLATE_HPP

#include <rw/common/Ptr.hpp>


namespace mylib {

/**
 * @class ClassTemplate
 * @brief A class template.
 * 
 * Description here.
 */
class ClassTemplate {
public:
  //! A smart pointer to this type of class.
  typedef rw::common::Ptr<ClassTemplate> Ptr;
  
  //! Constructor.
  ClassTemplate();
  
  //! Destructor.
  virtual ~ClassTemplate();

protected:

private:
};

} // mylib

#endif // CLASSTEMPLATE_HPP
