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

// Function: entry_001d58b0
// Address: 0x1d58b0 - 0x1d5930
void entry_001d58b0_0x1d58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d58b0_0x1d58b0");
#endif

    switch (ctx->pc) {
        case 0x1d58c0u: goto label_1d58c0;
        case 0x1d58f0u: goto label_1d58f0;
        case 0x1d5910u: goto label_1d5910;
        default: break;
    }

    ctx->pc = 0x1d58b0u;

    // 0x1d58b0: 0x12820025  beq         $s4, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D58B0u;
    {
        const bool branch_taken_0x1d58b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B0u;
        // 0x1d58b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58b0) {
            ctx->pc = 0x1D5948u;
            return;
        }
    }
    ctx->pc = 0x1D58B8u;
    // 0x1d58b8: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x1D58B8u;
    SET_GPR_U32(ctx, 31, 0x1D58C0u);
    ctx->pc = 0x1D58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58B8u;
    // 0x1d58bc: 0x26720558  addiu       $s2, $s3, 0x558 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x1D58B8u, 0x1D58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58C0u;
label_1d58c0:
    // 0x1d58c0: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d58c4: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x1d58c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1d58c8: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x1d58c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1d58cc: 0x2656000c  addiu       $s6, $s2, 0xC
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1d58d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d58d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58d4: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d58d8: 0x2362821  addu        $a1, $s1, $s6
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1d58dc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d58dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58e0: 0x26330040  addiu       $s3, $s1, 0x40
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d58e4: 0xac570010  sw          $s7, 0x10($v0)
    ctx->pc = 0x1d58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
    // 0x1d58e8: 0xc07838a  jal         func_1E0E28
    ctx->pc = 0x1D58E8u;
    SET_GPR_U32(ctx, 31, 0x1D58F0u);
    ctx->pc = 0x1D58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58E8u;
    // 0x1d58ec: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E28u, 0x1D58E8u, 0x1D58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58F0u;
label_1d58f0:
    // 0x1d58f0: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x1d58f4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d58f8: 0x2646004c  addiu       $a2, $s2, 0x4C
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x1d58fc: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1d58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x1d5900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5904: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d5908: 0xc078436  jal         func_1E10D8
    ctx->pc = 0x1D5908u;
    SET_GPR_U32(ctx, 31, 0x1D5910u);
    ctx->pc = 0x1D590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5908u;
    // 0x1d590c: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10D8u, 0x1D5908u, 0x1D5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5910u;
label_1d5910:
    // 0x1d5910: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d5914: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5918: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5918u;
    {
        const bool branch_taken_0x1d5918 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5918u;
        // 0x1d591c: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5918) {
            ctx->pc = 0x1D5930u;
            return;
        }
    }
    ctx->pc = 0x1D5920u;
    // 0x1d5920: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d5924: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1d5928: 0x24429c58  addiu       $v0, $v0, -0x63A8
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941784));
    // 0x1d592c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d592cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d5930u;
}
