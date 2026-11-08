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

// Function: FUN_001d2b50
// Address: 0x1d2b50 - 0x1d2bb4
void FUN_001d2b50_0x1d2b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2b50_0x1d2b50");
#endif

    switch (ctx->pc) {
        case 0x1d2b80u: goto label_1d2b80;
        case 0x1d2b98u: goto label_1d2b98;
        default: break;
    }

    ctx->pc = 0x1d2b50u;

    // 0x1d2b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d2b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2b54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d2b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d2b58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d2b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d2b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2b60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d2b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2b68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d2b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2b70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d2b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b74: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d2b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b78: 0xc074af0  jal         func_1D2BC0
    ctx->pc = 0x1D2B78u;
    SET_GPR_U32(ctx, 31, 0x1D2B80u);
    ctx->pc = 0x1D2B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B78u;
    // 0x1d2b7c: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2BC0u, 0x1D2B78u, 0x1D2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B80u;
label_1d2b80:
    // 0x1d2b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d2b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d2b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b8c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1d2b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b90: 0xc074b00  jal         func_1D2C00
    ctx->pc = 0x1D2B90u;
    SET_GPR_U32(ctx, 31, 0x1D2B98u);
    ctx->pc = 0x1D2B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B90u;
    // 0x1d2b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C00u, 0x1D2B90u, 0x1D2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B98u;
label_1d2b98:
    // 0x1d2b98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d2b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2b9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d2b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2ba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BACu;
        // 0x1d2bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2BB4u;
}
