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

// Function: entry_001162e8
// Address: 0x1162e8 - 0x116360
void entry_001162e8_0x1162e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162e8_0x1162e8");
#endif

    switch (ctx->pc) {
        case 0x1162f0u: goto label_1162f0;
        case 0x1162f8u: goto label_1162f8;
        case 0x116300u: goto label_116300;
        case 0x116328u: goto label_116328;
        case 0x11634cu: goto label_11634c;
        case 0x11635cu: goto label_11635c;
        default: break;
    }

    ctx->pc = 0x1162e8u;

    // 0x1162e8: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x1162E8u;
    SET_GPR_U32(ctx, 31, 0x1162F0u);
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x1162E8u, 0x1162F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162F0u;
label_1162f0:
    // 0x1162f0: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x1162F0u;
    SET_GPR_U32(ctx, 31, 0x1162F8u);
    ctx->pc = 0x1162F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162F0u;
    // 0x1162f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x1162F0u, 0x1162F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162F8u;
label_1162f8:
    // 0x1162f8: 0xc045c98  jal         func_117260
    ctx->pc = 0x1162F8u;
    SET_GPR_U32(ctx, 31, 0x116300u);
    ctx->pc = 0x1162FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162F8u;
    // 0x1162fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1162F8u, 0x116300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116300u;
label_116300:
    // 0x116300: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116304: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x116304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x116308: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x11630c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116310: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116314: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116318: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x11631c: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x11631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x116320: 0xc054660  jal         func_151980
    ctx->pc = 0x116320u;
    SET_GPR_U32(ctx, 31, 0x116328u);
    ctx->pc = 0x116324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116320u;
    // 0x116324: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x116320u, 0x116328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116328u;
label_116328:
    // 0x116328: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x116328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x11632c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116330: 0x246387d0  addiu       $v1, $v1, -0x7830
    ctx->pc = 0x116330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936528));
    // 0x116334: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x116338: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x116338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11633c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116344: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x116344u;
    SET_GPR_U32(ctx, 31, 0x11634Cu);
    ctx->pc = 0x116348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116344u;
    // 0x116348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x116344u, 0x11634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11634Cu;
label_11634c:
    // 0x11634c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11634Cu;
    {
        const bool branch_taken_0x11634c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11634Cu;
        // 0x116350: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11634c) {
            ctx->pc = 0x116360u;
            return;
        }
    }
    ctx->pc = 0x116354u;
    // 0x116354: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x116354u;
    SET_GPR_U32(ctx, 31, 0x11635Cu);
    ctx->pc = 0x116358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116354u;
    // 0x116358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x116354u, 0x11635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11635Cu;
label_11635c:
    // 0x11635c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x116360u;
}
