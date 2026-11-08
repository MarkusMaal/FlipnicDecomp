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

// Function: entry_001d5700
// Address: 0x1d5700 - 0x1d5780
void entry_001d5700_0x1d5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5700_0x1d5700");
#endif

    switch (ctx->pc) {
        case 0x1d5710u: goto label_1d5710;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5760u: goto label_1d5760;
        default: break;
    }

    ctx->pc = 0x1d5700u;

    // 0x1d5700: 0x12820025  beq         $s4, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D5700u;
    {
        const bool branch_taken_0x1d5700 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5700u;
        // 0x1d5704: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5700) {
            ctx->pc = 0x1D5798u;
            return;
        }
    }
    ctx->pc = 0x1D5708u;
    // 0x1d5708: 0xc07532c  jal         func_1D4CB0
    ctx->pc = 0x1D5708u;
    SET_GPR_U32(ctx, 31, 0x1D5710u);
    ctx->pc = 0x1D570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5708u;
    // 0x1d570c: 0x26720558  addiu       $s2, $s3, 0x558 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4CB0u, 0x1D5708u, 0x1D5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5710u;
label_1d5710:
    // 0x1d5710: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5714: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x1d5714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1d5718: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x1d5718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1d571c: 0x2656000c  addiu       $s6, $s2, 0xC
    ctx->pc = 0x1d571cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1d5720: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5724: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d5728: 0x2362821  addu        $a1, $s1, $s6
    ctx->pc = 0x1d5728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1d572c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d572cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5730: 0x26330040  addiu       $s3, $s1, 0x40
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d5734: 0xac570010  sw          $s7, 0x10($v0)
    ctx->pc = 0x1d5734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
    // 0x1d5738: 0xc07838a  jal         func_1E0E28
    ctx->pc = 0x1D5738u;
    SET_GPR_U32(ctx, 31, 0x1D5740u);
    ctx->pc = 0x1D573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5738u;
    // 0x1d573c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E28u, 0x1D5738u, 0x1D5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5740u;
label_1d5740:
    // 0x1d5740: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x1d5740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x1d5744: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1d5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d5748: 0x2646004c  addiu       $a2, $s2, 0x4C
    ctx->pc = 0x1d5748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x1d574c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1d574cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x1d5750: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5754: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1d5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d5758: 0xc078436  jal         func_1E10D8
    ctx->pc = 0x1D5758u;
    SET_GPR_U32(ctx, 31, 0x1D5760u);
    ctx->pc = 0x1D575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5758u;
    // 0x1d575c: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10D8u, 0x1D5758u, 0x1D5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5760u;
label_1d5760:
    // 0x1d5760: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1d5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d5764: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5768: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5768u;
    {
        const bool branch_taken_0x1d5768 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5768u;
        // 0x1d576c: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5768) {
            ctx->pc = 0x1D5780u;
            return;
        }
    }
    ctx->pc = 0x1D5770u;
    // 0x1d5770: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d5774: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x1d5774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1d5778: 0x24429c58  addiu       $v0, $v0, -0x63A8
    ctx->pc = 0x1d5778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941784));
    // 0x1d577c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d577cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d5780u;
}
