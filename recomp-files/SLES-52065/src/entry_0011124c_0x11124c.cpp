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

// Function: entry_0011124c
// Address: 0x11124c - 0x111280
void entry_0011124c_0x11124c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011124c_0x11124c");
#endif

    ctx->pc = 0x11124cu;

    // 0x11124c: 0x0  nop
    ctx->pc = 0x11124cu;
    // NOP
    // 0x111250: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x111250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x111254: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x111254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111258: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111258u;
    {
        const bool branch_taken_0x111258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111258) {
            ctx->pc = 0x11121Cu;
            return;
        }
    }
    ctx->pc = 0x111260u;
    // 0x111260: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x111260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111264: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x111264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11126c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11126cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111278: 0x3e00008  jr          $ra
    ctx->pc = 0x111278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111278u;
        // 0x11127c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111280u;
}
