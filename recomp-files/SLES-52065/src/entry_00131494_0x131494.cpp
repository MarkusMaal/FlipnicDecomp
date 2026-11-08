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

// Function: entry_00131494
// Address: 0x131494 - 0x1314f0
void entry_00131494_0x131494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131494_0x131494");
#endif

    switch (ctx->pc) {
        case 0x1314bcu: goto label_1314bc;
        case 0x1314c8u: goto label_1314c8;
        case 0x1314d0u: goto label_1314d0;
        case 0x1314dcu: goto label_1314dc;
        default: break;
    }

    ctx->pc = 0x131494u;

    // 0x131494: 0x0  nop
    ctx->pc = 0x131494u;
    // NOP
    // 0x131498: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x131498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x13149c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13149Cu;
    {
        const bool branch_taken_0x13149c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13149Cu;
        // 0x1314a0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13149c) {
            ctx->pc = 0x1314F4u;
            return;
        }
    }
    ctx->pc = 0x1314A4u;
    // 0x1314a4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1314A4u;
    {
        const bool branch_taken_0x1314a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1314a4) {
            ctx->pc = 0x1314F0u;
            return;
        }
    }
    ctx->pc = 0x1314ACu;
    // 0x1314ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1314ACu;
    {
        const bool branch_taken_0x1314ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1314ac) {
            ctx->pc = 0x1314F0u;
            return;
        }
    }
    ctx->pc = 0x1314B4u;
    // 0x1314b4: 0xc04c554  jal         func_131550
    ctx->pc = 0x1314B4u;
    SET_GPR_U32(ctx, 31, 0x1314BCu);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1314B4u, 0x1314BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314BCu;
label_1314bc:
    // 0x1314bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1314bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314c0: 0xc04c550  jal         func_131540
    ctx->pc = 0x1314C0u;
    SET_GPR_U32(ctx, 31, 0x1314C8u);
    ctx->pc = 0x1314C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314C0u;
    // 0x1314c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1314C0u, 0x1314C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314C8u;
label_1314c8:
    // 0x1314c8: 0xc04c554  jal         func_131550
    ctx->pc = 0x1314C8u;
    SET_GPR_U32(ctx, 31, 0x1314D0u);
    ctx->pc = 0x1314CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314C8u;
    // 0x1314cc: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1314C8u, 0x1314D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314D0u;
label_1314d0:
    // 0x1314d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1314d4: 0xc04c54c  jal         func_131530
    ctx->pc = 0x1314D4u;
    SET_GPR_U32(ctx, 31, 0x1314DCu);
    ctx->pc = 0x1314D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314D4u;
    // 0x1314d8: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1314D4u, 0x1314DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314DCu;
label_1314dc:
    // 0x1314dc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1314e0: 0x26650058  addiu       $a1, $s3, 0x58
    ctx->pc = 0x1314e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1314e4: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x1314e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1314e8: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x1314E8u;
    SET_GPR_U32(ctx, 31, 0x1314F0u);
    ctx->pc = 0x1314ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314E8u;
    // 0x1314ec: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323C0u, 0x1314E8u, 0x1314F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314F0u;
}
