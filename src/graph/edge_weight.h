#ifndef _SGPCET_EDGE_WEIGHT_H_
#define _SGPCET_EDGE_WEIGHT_H_

#ifndef _SGPCET_TREE_H_
#include "tree.h"
#endif // !_SGPCET_TREE_H_
#ifndef _SGPCET_CHAIN_H_
#include "chain.h"
#endif // !_SGPCET_CHAIN_H_
#ifndef _SGPCET_FLOWER_H_
#include "flower.h"
#endif // !_SGPCET_FLOWER_H_

namespace generator {
    namespace rand_graph {
        namespace edge_weight {
            template <typename EdgeType>
            using Edge = basic::_Edge<EdgeType>;

            using NodeWeight = basic::_Node<void>;

            using TreeGenerator = _enum::TreeGenerator;

            template <typename EdgeType>
            using TreeGen = basic::TreeGen<void, EdgeType>;

            template <typename EdgeType>
            using RandomFatherGen = basic::RandomFatherGen<void, EdgeType>;

            template <typename EdgeType>
            using PrueferGen = basic::PrueferGen<void, EdgeType>;

            template <typename EdgeType>
            using Tree = basic::Tree<void, EdgeType>;

            template <typename EdgeType>
            using ChainGen = basic::ChainGen<void, EdgeType>;

            template <typename EdgeType>
            using Chain = basic::Chain<void, EdgeType>;

            template <typename EdgeType>
            using FlowerGen = basic::FlowerGen<void, EdgeType>;

            template <typename EdgeType>
            using Flower = basic::Flower<void, EdgeType>;
        } // namespace edge_weight
    } // namespace rand_graph
} // namespace generator

#endif // !_SGPCET_EDGE_WEIGHT_H_
