/*
 * Singleton.h
 *
 *  Created on: May 20, 2014
 *      Author: vlad
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

namespace qpp
{

// Singleton policy class

template<typename T>
class Singleton
{
protected:
	Singleton() = default;
	~Singleton() = default;
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
public:
	static T& get_instance()
	{
		// Guaranteed to be destroyed.
		// Instantiated on first use.
		// Thread safe in C++11
		static T instance;
		return instance;
	}
};

} /* namespace qpp */

#endif /* SINGLETON_H_ */
