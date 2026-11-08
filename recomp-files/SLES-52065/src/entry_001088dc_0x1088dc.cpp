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

// Function: entry_001088dc
// Address: 0x1088dc - 0x108928
void entry_001088dc_0x1088dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001088dc_0x1088dc");
#endif

    switch (ctx->pc) {
        case 0x108900u: goto label_108900;
        case 0x108908u: goto label_108908;
        case 0x10891cu: goto label_10891c;
        default: break;
    }

    ctx->pc = 0x1088dcu;

    // 0x1088dc: 0x844301e8  lh          $v1, 0x1E8($v0)
    ctx->pc = 0x1088dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x1088e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1088e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1088e4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1088E4u;
    {
        const bool branch_taken_0x1088e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1088e4) {
            ctx->pc = 0x108990u;
            return;
        }
    }
    ctx->pc = 0x1088ECu;
    // 0x1088ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1088ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1088f0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1088F0u;
    {
        const bool branch_taken_0x1088f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1088f0) {
            ctx->pc = 0x108964u;
            return;
        }
    }
    ctx->pc = 0x1088F8u;
    // 0x1088f8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1088F8u;
    SET_GPR_U32(ctx, 31, 0x108900u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1088F8u, 0x108900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108900u;
label_108900:
    // 0x108900: 0xc049f08  jal         func_127C20
    ctx->pc = 0x108900u;
    SET_GPR_U32(ctx, 31, 0x108908u);
    ctx->pc = 0x108904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108900u;
    // 0x108904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C20u, 0x108900u, 0x108908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108908u;
label_108908:
    // 0x108908: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10890c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10890Cu;
    {
        const bool branch_taken_0x10890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10890c) {
            ctx->pc = 0x108928u;
            return;
        }
    }
    ctx->pc = 0x108914u;
    // 0x108914: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108914u;
    SET_GPR_U32(ctx, 31, 0x10891Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108914u, 0x10891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10891Cu;
label_10891c:
    // 0x10891c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108920: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x108920u;
    SET_GPR_U32(ctx, 31, 0x108928u);
    ctx->pc = 0x108924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108920u;
    // 0x108924: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x108920u, 0x108928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108928u;
}
