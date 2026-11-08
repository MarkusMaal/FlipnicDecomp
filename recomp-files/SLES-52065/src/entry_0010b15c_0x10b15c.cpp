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

// Function: entry_0010b15c
// Address: 0x10b15c - 0x10b180
void entry_0010b15c_0x10b15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b15c_0x10b15c");
#endif

    ctx->pc = 0x10b15cu;

    // 0x10b15c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10b160: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10b164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b170: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x10b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10b174: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10b174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10b178: 0x3e00008  jr          $ra
    ctx->pc = 0x10B178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B178u;
        // 0x10b17c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B180u;
}
