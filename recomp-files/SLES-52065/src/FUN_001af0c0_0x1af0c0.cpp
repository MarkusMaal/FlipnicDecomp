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

// Function: FUN_001af0c0
// Address: 0x1af0c0 - 0x1af108
void FUN_001af0c0_0x1af0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af0c0_0x1af0c0");
#endif

    switch (ctx->pc) {
        case 0x1af0e8u: goto label_1af0e8;
        case 0x1af0f8u: goto label_1af0f8;
        default: break;
    }

    ctx->pc = 0x1af0c0u;

    // 0x1af0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af0c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0d0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1af0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1af0d4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1af0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1af0d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF0D8u;
    {
        const bool branch_taken_0x1af0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af0d8) {
            ctx->pc = 0x1AF0E8u;
            goto label_1af0e8;
        }
    }
    ctx->pc = 0x1AF0E0u;
    // 0x1af0e0: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1AF0E0u;
    SET_GPR_U32(ctx, 31, 0x1AF0E8u);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1AF0E0u, 0x1AF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0E8u;
label_1af0e8:
    // 0x1af0e8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1af0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1af0ec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1af0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1af0f0: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1AF0F0u;
    SET_GPR_U32(ctx, 31, 0x1AF0F8u);
    ctx->pc = 0x1AF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0F0u;
    // 0x1af0f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1AF0F0u, 0x1AF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0F8u;
label_1af0f8:
    // 0x1af0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af100: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF100u;
        // 0x1af104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF108u;
}
