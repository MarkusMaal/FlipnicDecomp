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

// Function: FUN_0011e990
// Address: 0x11e990 - 0x11e9e0
void FUN_0011e990_0x11e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e990_0x11e990");
#endif

    switch (ctx->pc) {
        case 0x11e9acu: goto label_11e9ac;
        case 0x11e9c4u: goto label_11e9c4;
        default: break;
    }

    ctx->pc = 0x11e990u;

    // 0x11e990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e998: 0x83828400  lb          $v0, -0x7C00($gp)
    ctx->pc = 0x11e998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935552)));
    // 0x11e99c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E99Cu;
    {
        const bool branch_taken_0x11e99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E99Cu;
        // 0x11e9a0: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e99c) {
            ctx->pc = 0x11E9CCu;
            goto label_11e9cc;
        }
    }
    ctx->pc = 0x11E9A4u;
    // 0x11e9a4: 0xc04698c  jal         func_11A630
    ctx->pc = 0x11E9A4u;
    SET_GPR_U32(ctx, 31, 0x11E9ACu);
    ctx->pc = 0x11E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E9A4u;
    // 0x11e9a8: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A630u, 0x11E9A4u, 0x11E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E9ACu;
label_11e9ac:
    // 0x11e9ac: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11e9b0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x11e9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x11e9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9b8: 0x24a5a8a0  addiu       $a1, $a1, -0x5760
    ctx->pc = 0x11e9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944928));
    // 0x11e9bc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x11E9BCu;
    SET_GPR_U32(ctx, 31, 0x11E9C4u);
    ctx->pc = 0x11E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E9BCu;
    // 0x11e9c0: 0x24c606f8  addiu       $a2, $a2, 0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x11E9BCu, 0x11E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E9C4u;
label_11e9c4:
    // 0x11e9c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e9c8: 0xa3828400  sb          $v0, -0x7C00($gp)
    ctx->pc = 0x11e9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935552), (uint8_t)GPR_U32(ctx, 2));
label_11e9cc:
    // 0x11e9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e9d0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x11e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x11e9d4: 0x24420710  addiu       $v0, $v0, 0x710
    ctx->pc = 0x11e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    // 0x11e9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9D8u;
        // 0x11e9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E9E0u;
}
