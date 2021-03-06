#ifndef CLUSTERER_FILE_H
#define CLUSTERER_FILE_H

#include <pcl/ModelCoefficients.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/features/normal_3d.h>
#include <pcl/kdtree/kdtree.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/segmentation/extract_clusters.h>

#include "../core_lib/idxXYZ.h"

namespace Clusterer
{
  std::vector<pcl::PointIndices>* extract(int algorithm, std::vector<idxXYZ>* data, double, int);
  std::vector<pcl::PointIndices>* euclidean_clustering(std::vector<idxXYZ>* data, double, int);
  std::vector<pcl::PointIndices>* dbscan_clustering(std::vector<idxXYZ>* data, double, int);
}

#endif
