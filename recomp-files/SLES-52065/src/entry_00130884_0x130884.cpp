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

// Function: entry_00130884
// Address: 0x130884 - 0x1308c0
void entry_00130884_0x130884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130884_0x130884");
#endif

    switch (ctx->pc) {
        case 0x130890u: goto label_130890;
        case 0x13089cu: goto label_13089c;
        case 0x1308a4u: goto label_1308a4;
        case 0x1308b0u: goto label_1308b0;
        default: break;
    }

    ctx->pc = 0x130884u;

    // 0x130884: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130888: 0xc080702  jal         func_201C08
    ctx->pc = 0x130888u;
    SET_GPR_U32(ctx, 31, 0x130890u);
    ctx->pc = 0x13088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130888u;
    // 0x13088c: 0xae330170  sw          $s3, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x130888u, 0x130890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130890u;
label_130890:
    // 0x130890: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130894: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x130894u;
    SET_GPR_U32(ctx, 31, 0x13089Cu);
    ctx->pc = 0x130898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130894u;
    // 0x130898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x130894u, 0x13089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13089Cu;
label_13089c:
    // 0x13089c: 0xc04c0dc  jal         func_130370
    ctx->pc = 0x13089Cu;
    SET_GPR_U32(ctx, 31, 0x1308A4u);
    ctx->pc = 0x1308A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13089Cu;
    // 0x1308a0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130370u, 0x13089Cu, 0x1308A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308A4u;
label_1308a4:
    // 0x1308a4: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1308a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1308a8: 0xc04c0dc  jal         func_130370
    ctx->pc = 0x1308A8u;
    SET_GPR_U32(ctx, 31, 0x1308B0u);
    ctx->pc = 0x1308ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308A8u;
    // 0x1308ac: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130370u, 0x1308A8u, 0x1308B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308B0u;
label_1308b0:
    // 0x1308b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1308b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308b4: 0x1272000e  beq         $s3, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1308B4u;
    {
        const bool branch_taken_0x1308b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x1308b4) {
            ctx->pc = 0x1308F0u;
            return;
        }
    }
    ctx->pc = 0x1308BCu;
    // 0x1308bc: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x1308bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->pc = 0x1308c0u;
}
