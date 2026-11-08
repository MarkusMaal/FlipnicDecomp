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

// Function: entry_0015194c
// Address: 0x15194c - 0x151970
void entry_0015194c_0x15194c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015194c_0x15194c");
#endif

    ctx->pc = 0x15194cu;

    // 0x15194c: 0x0  nop
    ctx->pc = 0x15194cu;
    // NOP
    // 0x151950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15195c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15195cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151960: 0x3e00008  jr          $ra
    ctx->pc = 0x151960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151960u;
        // 0x151964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151968u;
    // 0x151968: 0x0  nop
    ctx->pc = 0x151968u;
    // NOP
    // 0x15196c: 0x0  nop
    ctx->pc = 0x15196cu;
    // NOP
    ctx->pc = 0x151970u;
}
