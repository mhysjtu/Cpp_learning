class goods
{
	int weight;
	static int total_weight;
public:
	goods(int w);
	~goods();
	int weight();
	static int total_weight();
};

int goods::total_weight = 0;
goods::goods(int w)
{
	weight = w;
	total_weight += w;
}

goods::~goods()
{
	total_weight -= weight;
}

int goods::weight()
{
	return weight;
}

int total_weight()
{
	return total_weight;
}
