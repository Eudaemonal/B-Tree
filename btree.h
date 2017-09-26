template <typename T>
class btree {
public:
	btree(size_t maxNodeElems = 40);
	btree(const btree<T>&);
	btree(btree<T>&&);

	btree<T>& operator=(const btree<T>);
	btree<T>& operator=(btree<T>&&);
	friend ostream& operator<< <> (ostream&, const btree<T>&);

	iterator find(const T&);
	const_iterator find(const T&) const;
	pair<iterator, bool> insert(const T&);

	~btree();

private:

}

