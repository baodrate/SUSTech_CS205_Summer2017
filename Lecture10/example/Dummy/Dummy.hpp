class Dummy{
	int *m_tab;
	int m_sz; 
	public:
//Let's define a class for objects that contain an array of integers, dynamically created by the constructor.
	Dummy(int sz=5);
	~Dummy(); };
	
Dummy::~Dummy() {
	std::cerr << "Destructor called" << std::endl;
	delete[] m_tab;
	
}
Dummy::Dummy(int sz) {
	std::cerr << "Constructor called" << std::endl;
	m_sz = sz;
	m_tab = new int[sz];}