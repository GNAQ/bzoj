/*
	Solution:
		首先加入<=a && <= b的边之后是否连通，是可以用LCT维护a的最小生成树做的
		然后这个联通块中是否有 == a的边和 == b的边，这就比较奥妙重重了，由于对称性，我们考虑==b即可
		我们维护a的最小生成树之后，我们就是每次染黑或者染白一个点/查询root到黑点的路径最小值
		这个查询，我们对虚边维护一下，然后每次实边虚边转换的话，就是用一个堆维护一发的过程 
*/