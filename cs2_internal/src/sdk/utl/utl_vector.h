#ifndef SDK_UTL_UTL_VECTOR_H
#define SDK_UTL_UTL_VECTOR_H

template <typename T>
class cutl_vector
{
public:
	using iterator = T *;
	using const_iterator = const T *;

	iterator begin() { return elements; }

	iterator end() { return elements + size; }

	const_iterator begin() const { return elements; }

	const_iterator end() const { return elements + size; }

	T &operator[](int i) { return elements[i]; }

	int size;
	T *elements;
};

template <typename T>
class cnetwork_utl_vector_base
{
public:
	uint32_t size;
private:
	uint32_t pad;
public:
	T* data;
};

template <typename T>
class network_utl_vector_base
{
public:
	uint32_t size;
private:
	uint32_t pad;
public:
	T* data;
};

#endif // SDK_UTL_UTL_VECTOR_H
