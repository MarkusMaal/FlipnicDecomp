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

// Function: entry_001b82cc
// Address: 0x1b82cc - 0x1b832c
void entry_001b82cc_0x1b82cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b82cc_0x1b82cc");
#endif

    switch (ctx->pc) {
        case 0x1b82f8u: goto label_1b82f8;
        case 0x1b8304u: goto label_1b8304;
        case 0x1b830cu: goto label_1b830c;
        case 0x1b8318u: goto label_1b8318;
        default: break;
    }

    ctx->pc = 0x1b82ccu;

    // 0x1b82cc: 0x0  nop
    ctx->pc = 0x1b82ccu;
    // NOP
    // 0x1b82d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b82d4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1b82d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b82d8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B82D8u;
    {
        const bool branch_taken_0x1b82d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D8u;
        // 0x1b82dc: 0xac20f278  sw          $zero, -0xD88($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82d8) {
            ctx->pc = 0x1B832Cu;
            return;
        }
    }
    ctx->pc = 0x1B82E0u;
    // 0x1b82e0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B82E0u;
    {
        const bool branch_taken_0x1b82e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b82e0) {
            ctx->pc = 0x1B832Cu;
            return;
        }
    }
    ctx->pc = 0x1B82E8u;
    // 0x1b82e8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B82E8u;
    {
        const bool branch_taken_0x1b82e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b82e8) {
            ctx->pc = 0x1B832Cu;
            return;
        }
    }
    ctx->pc = 0x1B82F0u;
    // 0x1b82f0: 0xc06e0f4  jal         func_1B83D0
    ctx->pc = 0x1B82F0u;
    SET_GPR_U32(ctx, 31, 0x1B82F8u);
    ctx->pc = 0x1B83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83D0u, 0x1B82F0u, 0x1B82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82F8u;
label_1b82f8:
    // 0x1b82f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b82f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82fc: 0xc06e0ec  jal         func_1B83B0
    ctx->pc = 0x1B82FCu;
    SET_GPR_U32(ctx, 31, 0x1B8304u);
    ctx->pc = 0x1B8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82FCu;
    // 0x1b8300: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83B0u, 0x1B82FCu, 0x1B8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8304u;
label_1b8304:
    // 0x1b8304: 0xc06e0f4  jal         func_1B83D0
    ctx->pc = 0x1B8304u;
    SET_GPR_U32(ctx, 31, 0x1B830Cu);
    ctx->pc = 0x1B8308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8304u;
    // 0x1b8308: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83D0u, 0x1B8304u, 0x1B830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B830Cu;
label_1b830c:
    // 0x1b830c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b830cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8310: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x1B8310u;
    SET_GPR_U32(ctx, 31, 0x1B8318u);
    ctx->pc = 0x1B8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8310u;
    // 0x1b8314: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x1B8310u, 0x1B8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8318u;
label_1b8318:
    // 0x1b8318: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1b8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1b831c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1b831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b8320: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1b8320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1b8324: 0xc06ee38  jal         func_1BB8E0
    ctx->pc = 0x1B8324u;
    SET_GPR_U32(ctx, 31, 0x1B832Cu);
    ctx->pc = 0x1B8328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8324u;
    // 0x1b8328: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8E0u, 0x1B8324u, 0x1B832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B832Cu;
}
