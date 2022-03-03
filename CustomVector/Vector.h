#pragma once

template <typename T>
class Vector
{
private:
	unsigned int count = 0;
	unsigned int capacity = 4;
	T* data = nullptr;

	void set_capacity(int newCapacity)
	{
		T* oldData = data;
		data = new T[newCapacity];

		if (oldData != nullptr)
		{
			for (int i = 0; i < count; i++)
			{
				data[i] = oldData[i];
			}

			delete[] oldData;
		}

		capacity = newCapacity;
	}
public:
	Vector()
	{
		set_capacity(4);
	}

	// Copy constructor
	Vector(Vector<T>& other) : count{ other.count }, capacity{ other.capacity }
	{
		std::cout << "copy constructor\n";
		if (data)
		{
			delete[] data;
		}

		data = new T[other.capacity];

		for (int i = 0; i < count; i++)
		{
			data[i] = other.data[i];
		}
	}


	// Move Constructor
	Vector(Vector<T>&& other) noexcept : count{ other.count }, capacity{ other.capacity }
	{
		if (&other != this)
		{
			delete[] data;
			data = other.data;

			other.data = nullptr;
			other.capacity = 0;
			other.count = 0;
		}
	}

	~Vector()
	{
		delete[] data;
	}

	Vector<T>& operator=(const Vector<T>& other)
	{
		std::cout << "copy assignment\n";
		if (&other != this) 
		{
			if (data)
			{
				delete[] data;
			}

			count = other.count;
			capacity = other.capacity;
			data = nullptr;
			data = new T[other.capacity];

			for (int i = 0; i < count; i++)
			{
				data[i] = other.data[i];
			}
		}

		return *this;
	}

	Vector<T>& operator=(Vector<T>&& other) noexcept
	{
		if (&other != this) {
			delete[] data;
			count = other.count;
			capacity = other.capacity;
			data = other.data;

			other.data = nullptr;
			other.count = 0;
			other.capacity = 0;
		}

		return *this;
	}

	T& operator[](size_t index)
	{
		if (index >= count) {
			// Maybe throw error instead?
			// Or change the return type to pointer instead of reference and return nullptr.
			// But I want the value directly when you do myArr[0], and not the adress
			return *data;
		}

		return *(data + index);
	}

	void push_back(T value)
	{
		if (count >= capacity) {
			set_capacity(capacity * 2);
		}

		data[count++] = value;
	}

	T& pop_back()
	{
		if (count <= 0)
		{
			return *data;
		}

		return data[--count];
	}

	const unsigned int& size()
	{
		return count;
	}

	T* begin() const { return data; }
	T* end()   const { return data + count; }
};
