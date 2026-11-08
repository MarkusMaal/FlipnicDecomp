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

// Function: entry_00122b98
// Address: 0x122b98 - 0x122be8
void entry_00122b98_0x122b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122b98_0x122b98");
#endif

    switch (ctx->pc) {
        case 0x122bacu: goto label_122bac;
        default: break;
    }

    ctx->pc = 0x122b98u;

    // 0x122b98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x122b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122b9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ba0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122ba4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122BA4u;
    SET_GPR_U32(ctx, 31, 0x122BACu);
    ctx->pc = 0x122BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BA4u;
    // 0x122ba8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122BA4u, 0x122BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BACu;
label_122bac:
    // 0x122bac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x122bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122bb0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x122bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x122bb4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x122bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122bb8: 0x9384804c  lbu         $a0, -0x7FB4($gp)
    ctx->pc = 0x122bb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934604)));
    // 0x122bbc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x122bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x122bc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x122bc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122bc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x122bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x122bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122be0: 0x3e00008  jr          $ra
    ctx->pc = 0x122BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BE0u;
        // 0x122be4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122BE8u;
}
