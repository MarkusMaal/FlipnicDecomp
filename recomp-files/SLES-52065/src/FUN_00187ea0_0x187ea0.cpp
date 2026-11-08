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

// Function: FUN_00187ea0
// Address: 0x187ea0 - 0x187f00
void FUN_00187ea0_0x187ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187ea0_0x187ea0");
#endif

    switch (ctx->pc) {
        case 0x187ef4u: goto label_187ef4;
        default: break;
    }

    ctx->pc = 0x187ea0u;

    // 0x187ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x187ea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x187ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187eac: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x187eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x187eb0: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x187eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x187eb4: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x187eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x187eb8: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x187eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x187ebc: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x187ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x187ec0: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x187ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x187ec4: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x187ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x187ec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187EC8u;
    {
        const bool branch_taken_0x187ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EC8u;
        // 0x187ecc: 0xffab0058  sd          $t3, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ec8) {
            ctx->pc = 0x187ED8u;
            goto label_187ed8;
        }
    }
    ctx->pc = 0x187ED0u;
    // 0x187ed0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187ED0u;
    {
        const bool branch_taken_0x187ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187ED0u;
        // 0x187ed4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ed0) {
            ctx->pc = 0x187EE4u;
            goto label_187ee4;
        }
    }
    ctx->pc = 0x187ED8u;
label_187ed8:
    // 0x187ed8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x187ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187edc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x187edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187ee0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x187ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_187ee4:
    // 0x187ee4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x187ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187ee8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x187ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187eec: 0xc061ea0  jal         func_187A80
    ctx->pc = 0x187EECu;
    SET_GPR_U32(ctx, 31, 0x187EF4u);
    ctx->pc = 0x187EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EECu;
    // 0x187ef0: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187A80u, 0x187EECu, 0x187EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EF4u;
label_187ef4:
    // 0x187ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x187EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF8u;
        // 0x187efc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187F00u;
}
