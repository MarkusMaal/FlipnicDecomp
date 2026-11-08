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

// Function: FUN_00146f60
// Address: 0x146f60 - 0x146fc8
void FUN_00146f60_0x146f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00146f60_0x146f60");
#endif

    switch (ctx->pc) {
        case 0x146fbcu: goto label_146fbc;
        default: break;
    }

    ctx->pc = 0x146f60u;

    // 0x146f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146f68: 0x8c8302bc  lw          $v1, 0x2BC($a0)
    ctx->pc = 0x146f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x146f6c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x146F6Cu;
    {
        const bool branch_taken_0x146f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f6c) {
            ctx->pc = 0x146FBCu;
            goto label_146fbc;
        }
    }
    ctx->pc = 0x146F74u;
    // 0x146f74: 0x8c8302c0  lw          $v1, 0x2C0($a0)
    ctx->pc = 0x146f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x146f78: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x146F78u;
    {
        const bool branch_taken_0x146f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f78) {
            ctx->pc = 0x146FBCu;
            goto label_146fbc;
        }
    }
    ctx->pc = 0x146F80u;
    // 0x146f80: 0x8c8302b4  lw          $v1, 0x2B4($a0)
    ctx->pc = 0x146f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x146f84: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x146F84u;
    {
        const bool branch_taken_0x146f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f84) {
            ctx->pc = 0x146FBCu;
            goto label_146fbc;
        }
    }
    ctx->pc = 0x146F8Cu;
    // 0x146f8c: 0x8c8302b8  lw          $v1, 0x2B8($a0)
    ctx->pc = 0x146f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 696)));
    // 0x146f90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146F90u;
    {
        const bool branch_taken_0x146f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146f90) {
            ctx->pc = 0x146FA0u;
            goto label_146fa0;
        }
    }
    ctx->pc = 0x146F98u;
    // 0x146f98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x146F98u;
    {
        const bool branch_taken_0x146f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F98u;
        // 0x146f9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f98) {
            ctx->pc = 0x146FC0u;
            goto label_146fc0;
        }
    }
    ctx->pc = 0x146FA0u;
label_146fa0:
    // 0x146fa0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x146fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x146fa4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x146fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x146fa8: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x146fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    // 0x146fac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x146fb0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x146fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x146fb4: 0xc04eb5c  jal         func_13AD70
    ctx->pc = 0x146FB4u;
    SET_GPR_U32(ctx, 31, 0x146FBCu);
    ctx->pc = 0x146FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FB4u;
    // 0x146fb8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD70u, 0x146FB4u, 0x146FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FBCu;
label_146fbc:
    // 0x146fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146fc0:
    // 0x146fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x146FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FC0u;
        // 0x146fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146FC8u;
}
