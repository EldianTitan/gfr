/*
 * Copyright (C) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * THIS FILE WAS GENERATED BY apic. DO NOT EDIT.
 */

// clang-format off
void PreCmdExecuteCommands(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers);
void PostCmdExecuteCommands(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers);
void PreCmdCopyBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions);
void PostCmdCopyBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions);
void PreCmdCopyImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions);
void PostCmdCopyImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions);
void PreCmdBlitImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter);
void PostCmdBlitImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter);
void PreCmdCopyBufferToImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions);
void PostCmdCopyBufferToImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions);
void PreCmdCopyImageToBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions);
void PostCmdCopyImageToBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions);
void PreCmdUpdateBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData);
void PostCmdUpdateBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData);
void PreCmdFillBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
void PostCmdFillBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
void PreCmdClearColorImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
void PostCmdClearColorImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
void PreCmdClearDepthStencilImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
void PostCmdClearDepthStencilImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
void PreCmdClearAttachments(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects);
void PostCmdClearAttachments(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects);
void PreCmdResolveImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions);
void PostCmdResolveImage(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions);
void PreCmdBindDescriptorSets(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets);
void PostCmdBindDescriptorSets(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets);
void PreCmdPushConstants(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues);
void PostCmdPushConstants(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues);
void PreCmdBindIndexBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
void PostCmdBindIndexBuffer(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
void PreCmdBindVertexBuffers(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets);
void PostCmdBindVertexBuffers(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets);
void PreCmdDraw(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
void PostCmdDraw(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
void PreCmdDrawIndexed(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);
void PostCmdDrawIndexed(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);
void PreCmdDrawIndirect(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
void PostCmdDrawIndirect(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
void PreCmdDrawIndexedIndirect(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
void PostCmdDrawIndexedIndirect(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
void PreCmdDispatch(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
void PostCmdDispatch(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
void PreCmdDispatchIndirect(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
void PostCmdDispatchIndirect(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
void PreCmdBindPipeline(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
void PostCmdBindPipeline(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
void PreCmdSetViewport(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports);
void PostCmdSetViewport(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports);
void PreCmdSetScissor(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors);
void PostCmdSetScissor(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors);
void PreCmdSetLineWidth(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float lineWidth);
void PostCmdSetLineWidth(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float lineWidth);
void PreCmdSetDepthBias(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
void PostCmdSetDepthBias(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
void PreCmdSetBlendConstants(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float blendConstants[4]);
void PostCmdSetBlendConstants(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float blendConstants[4]);
void PreCmdSetDepthBounds(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
void PostCmdSetDepthBounds(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
void PreCmdSetStencilCompareMask(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
void PostCmdSetStencilCompareMask(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
void PreCmdSetStencilWriteMask(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
void PostCmdSetStencilWriteMask(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
void PreCmdSetStencilReference(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
void PostCmdSetStencilReference(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
void PreCmdBeginQuery(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
void PostCmdBeginQuery(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
void PreCmdEndQuery(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);
void PostCmdEndQuery(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);
void PreCmdResetQueryPool(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
void PostCmdResetQueryPool(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
void PreCmdWriteTimestamp(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
void PostCmdWriteTimestamp(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
void PreCmdCopyQueryPoolResults(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
void PostCmdCopyQueryPoolResults(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
void PreCmdBeginRenderPass(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents);
void PostCmdBeginRenderPass(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents);
void PreCmdNextSubpass(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkSubpassContents contents);
void PostCmdNextSubpass(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkSubpassContents contents);
void PreCmdEndRenderPass(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer);
void PostCmdEndRenderPass(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer);
void PreCmdSetEvent(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
void PostCmdSetEvent(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
void PreCmdResetEvent(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
void PostCmdResetEvent(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
void PreCmdWaitEvents(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
void PostCmdWaitEvents(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
void PreCmdPipelineBarrier(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
void PostCmdPipelineBarrier(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
void PreCmdWriteBufferMarkerAMD(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
void PostCmdWriteBufferMarkerAMD(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
void PreCmdDrawIndirectCountAMD(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
void PostCmdDrawIndirectCountAMD(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
void PreCmdDrawIndexedIndirectCountAMD(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
void PostCmdDrawIndexedIndirectCountAMD(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
void PreCmdDebugMarkerBeginEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
void PostCmdDebugMarkerBeginEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
void PreCmdDebugMarkerEndEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer);
void PostCmdDebugMarkerEndEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer);
void PreCmdDebugMarkerInsertEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
void PostCmdDebugMarkerInsertEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
void PreCmdBeginDebugUtilsLabelEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
void PostCmdBeginDebugUtilsLabelEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
void PreCmdEndDebugUtilsLabelEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer);
void PostCmdEndDebugUtilsLabelEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer);
void PreCmdInsertDebugUtilsLabelEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
void PostCmdInsertDebugUtilsLabelEXT(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
void PreCmdSetDeviceMaskKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t deviceMask);
void PostCmdSetDeviceMaskKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t deviceMask);
void PreCmdSetDeviceMask(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t deviceMask);
void PostCmdSetDeviceMask(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t deviceMask);
void PreCmdDispatchBaseKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
void PostCmdDispatchBaseKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
void PreCmdDispatchBase(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
void PostCmdDispatchBase(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
void PreCmdDrawIndirectCountKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
void PostCmdDrawIndirectCountKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
void PreCmdDrawIndexedIndirectCountKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
void PostCmdDrawIndexedIndirectCountKHR(VkCommandBuffer wrappedCommandBuffer, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
// clang-format on