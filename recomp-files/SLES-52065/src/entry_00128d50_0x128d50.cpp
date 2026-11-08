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

// Function: entry_00128d50
// Address: 0x128d50 - 0x128d90
void entry_00128d50_0x128d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128d50_0x128d50");
#endif

    ctx->pc = 0x128d50u;

    // 0x128d50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x128d54: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x128d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x128d58: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x128D58u;
    {
        const bool branch_taken_0x128d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D58u;
        // 0x128d5c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d58) {
            ctx->pc = 0x128D10u;
            return;
        }
    }
    ctx->pc = 0x128D60u;
    // 0x128d60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x128d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128d64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x128d64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128d68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x128d68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128d6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x128d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128d74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128d84: 0x3e00008  jr          $ra
    ctx->pc = 0x128D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D84u;
        // 0x128d88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128D8Cu;
    // 0x128d8c: 0x0  nop
    ctx->pc = 0x128d8cu;
    // NOP
    ctx->pc = 0x128d90u;
}
