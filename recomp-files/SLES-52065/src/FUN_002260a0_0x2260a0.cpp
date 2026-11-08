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

// Function: FUN_002260a0
// Address: 0x2260a0 - 0x226110
void FUN_002260a0_0x2260a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002260a0_0x2260a0");
#endif

    switch (ctx->pc) {
        case 0x2260ccu: goto label_2260cc;
        case 0x2260e4u: goto label_2260e4;
        case 0x226104u: goto label_226104;
        default: break;
    }

    ctx->pc = 0x2260a0u;

    // 0x2260a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2260a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2260a4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2260a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2260a8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x2260a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x2260ac: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x2260acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x2260b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2260b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2260b4: 0x24843670  addiu       $a0, $a0, 0x3670
    ctx->pc = 0x2260b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
    // 0x2260b8: 0x24a5f210  addiu       $a1, $a1, -0xDF0
    ctx->pc = 0x2260b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
    // 0x2260bc: 0x24c6f230  addiu       $a2, $a2, -0xDD0
    ctx->pc = 0x2260bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963760));
    // 0x2260c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2260c4: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x2260C4u;
    SET_GPR_U32(ctx, 31, 0x2260CCu);
    ctx->pc = 0x2260C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260C4u;
    // 0x2260c8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x2260C4u, 0x2260CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260CCu;
label_2260cc:
    // 0x2260cc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x2260ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x2260d0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2260d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2260d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2260d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260d8: 0x24a5fd70  addiu       $a1, $a1, -0x290
    ctx->pc = 0x2260d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
    // 0x2260dc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2260DCu;
    SET_GPR_U32(ctx, 31, 0x2260E4u);
    ctx->pc = 0x2260E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260DCu;
    // 0x2260e0: 0x24c63658  addiu       $a2, $a2, 0x3658 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2260DCu, 0x2260E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E4u;
label_2260e4:
    // 0x2260e4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2260e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2260e8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x2260ec: 0x24843e70  addiu       $a0, $a0, 0x3E70
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15984));
    // 0x2260f0: 0x24a5fd60  addiu       $a1, $a1, -0x2A0
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966624));
    // 0x2260f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2260f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260f8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2260fc: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x2260FCu;
    SET_GPR_U32(ctx, 31, 0x226104u);
    ctx->pc = 0x226100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260FCu;
    // 0x226100: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x2260FCu, 0x226104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226104u;
label_226104:
    // 0x226104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226108: 0x3e00008  jr          $ra
    ctx->pc = 0x226108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226108u;
        // 0x22610c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226110u;
}
