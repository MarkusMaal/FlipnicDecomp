#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0012c3dc
// Address: 0x12c3dc - 0x12c438
void entry_0012c3dc_0x12c3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c3dc_0x12c3dc");
#endif

    ctx->pc = 0x12c3dcu;

    // 0x12c3dc: 0x82440066  lb          $a0, 0x66($s2)
    ctx->pc = 0x12c3dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c3e0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12c3e4: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x12C3E4u;
    {
        const bool branch_taken_0x12c3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3E4u;
        // 0x12c3e8: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3e4) {
            ctx->pc = 0x12C638u;
            return;
        }
    }
    ctx->pc = 0x12C3ECu;
    // 0x12c3ec: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x12C3ECu;
    {
        const bool branch_taken_0x12c3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c3ec) {
            ctx->pc = 0x12C610u;
            return;
        }
    }
    ctx->pc = 0x12C3F4u;
    // 0x12c3f4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12c3f8: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x12C3F8u;
    {
        const bool branch_taken_0x12c3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3F8u;
        // 0x12c3fc: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3f8) {
            ctx->pc = 0x12C5CCu;
            return;
        }
    }
    ctx->pc = 0x12C400u;
    // 0x12c400: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x12C400u;
    {
        const bool branch_taken_0x12c400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c400) {
            ctx->pc = 0x12C560u;
            return;
        }
    }
    ctx->pc = 0x12C408u;
    // 0x12c408: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12c40c: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x12C40Cu;
    {
        const bool branch_taken_0x12c40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C40Cu;
        // 0x12c410: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c40c) {
            ctx->pc = 0x12C520u;
            return;
        }
    }
    ctx->pc = 0x12C414u;
    // 0x12c414: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x12C414u;
    {
        const bool branch_taken_0x12c414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c414) {
            ctx->pc = 0x12C4F0u;
            return;
        }
    }
    ctx->pc = 0x12C41Cu;
    // 0x12c41c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x12c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x12c420: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x12C420u;
    {
        const bool branch_taken_0x12c420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c420) {
            ctx->pc = 0x12C4BCu;
            return;
        }
    }
    ctx->pc = 0x12C428u;
    // 0x12c428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C428u;
    {
        const bool branch_taken_0x12c428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C428u;
        // 0x12c42c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c428) {
            ctx->pc = 0x12C438u;
            return;
        }
    }
    ctx->pc = 0x12C430u;
    // 0x12c430: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x12C430u;
    {
        const bool branch_taken_0x12c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C430u;
        // 0x12c434: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c430) {
            ctx->pc = 0x12C678u;
            return;
        }
    }
    ctx->pc = 0x12C438u;
}
