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

// Function: entry_001124bc
// Address: 0x1124bc - 0x1124f0
void entry_001124bc_0x1124bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001124bc_0x1124bc");
#endif

    ctx->pc = 0x1124bcu;

    // 0x1124bc: 0x0  nop
    ctx->pc = 0x1124bcu;
    // NOP
    // 0x1124c0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1124c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1124c4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1124c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1124c8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1124C8u;
    {
        const bool branch_taken_0x1124c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1124c8) {
            ctx->pc = 0x11248Cu;
            return;
        }
    }
    ctx->pc = 0x1124D0u;
    // 0x1124d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1124d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1124d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1124d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1124d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1124d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1124dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1124dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1124e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1124e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1124e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1124e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1124e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1124E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124E8u;
        // 0x1124ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1124F0u;
}
