/*
 * =====================================================================================
 *
 *       Filename:  PStash.h
 *
 *    Description:  Demostration of pointer stash
 *
 *        Version:  1.0
 *        Created:  26/01/2013 13:59:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

class PStash{
public:
  PStash();
  ~PStash();
  int add(void* element);
  int count() const;
  void* operator[](int index) const;
private:
  void** storage;
  int quantity;
  int next;
  void inflate(int increase);
};
