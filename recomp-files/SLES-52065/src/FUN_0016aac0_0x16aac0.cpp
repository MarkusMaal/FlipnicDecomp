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

// Function: FUN_0016aac0
// Address: 0x16aac0 - 0x16aafc
void FUN_0016aac0_0x16aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016aac0_0x16aac0");
#endif

    switch (ctx->pc) {
        case 0x16aad4u: goto label_16aad4;
        case 0x16aaecu: goto label_16aaec;
        default: break;
    }

    ctx->pc = 0x16aac0u;

    // 0x16aac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16aac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16aac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16aacc: 0xc05aa60  jal         func_16A980
    ctx->pc = 0x16AACCu;
    SET_GPR_U32(ctx, 31, 0x16AAD4u);
    ctx->pc = 0x16AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AACCu;
    // 0x16aad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A980u, 0x16AACCu, 0x16AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAD4u;
label_16aad4:
    // 0x16aad4: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x16aad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
    // 0x16aad8: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x16aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x16aadc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16aae0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16aae4: 0xc04af2c  jal         func_12BCB0
    ctx->pc = 0x16AAE4u;
    SET_GPR_U32(ctx, 31, 0x16AAECu);
    ctx->pc = 0x16AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAE4u;
    // 0x16aae8: 0x24e71670  addiu       $a3, $a3, 0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BCB0u, 0x16AAE4u, 0x16AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAECu;
label_16aaec:
    // 0x16aaec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16aaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aaf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16aaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x16AAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAF4u;
        // 0x16aaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AAFCu;
}
