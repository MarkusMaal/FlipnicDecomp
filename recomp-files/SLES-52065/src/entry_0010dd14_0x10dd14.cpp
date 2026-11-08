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

// Function: entry_0010dd14
// Address: 0x10dd14 - 0x10dd44
void entry_0010dd14_0x10dd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd14_0x10dd14");
#endif

    ctx->pc = 0x10dd14u;

    // 0x10dd14: 0x0  nop
    ctx->pc = 0x10dd14u;
    // NOP
    // 0x10dd18: 0xae800230  sw          $zero, 0x230($s4)
    ctx->pc = 0x10dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 0));
    // 0x10dd1c: 0xae800234  sw          $zero, 0x234($s4)
    ctx->pc = 0x10dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 564), GPR_U32(ctx, 0));
    // 0x10dd20: 0xae800238  sw          $zero, 0x238($s4)
    ctx->pc = 0x10dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 568), GPR_U32(ctx, 0));
    // 0x10dd24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10dd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10dd28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10dd28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10dd2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10dd2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dd30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10dd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dd34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10dd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dd38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10dd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD3Cu;
        // 0x10dd40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DD44u;
}
