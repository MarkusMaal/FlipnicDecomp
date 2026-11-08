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

// Function: entry_0015d614
// Address: 0x15d614 - 0x15d650
void entry_0015d614_0x15d614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d614_0x15d614");
#endif

    ctx->pc = 0x15d614u;

    // 0x15d614: 0x0  nop
    ctx->pc = 0x15d614u;
    // NOP
    // 0x15d618: 0x8ec33dd8  lw          $v1, 0x3DD8($s6)
    ctx->pc = 0x15d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15832)));
    // 0x15d61c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d620: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15D620u;
    {
        const bool branch_taken_0x15d620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d620) {
            ctx->pc = 0x15D5F4u;
            return;
        }
    }
    ctx->pc = 0x15D628u;
    // 0x15d628: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15d628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d62c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d62cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d630: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d634: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d638: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d63c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d648: 0x3e00008  jr          $ra
    ctx->pc = 0x15D648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D648u;
        // 0x15d64c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D650u;
}
