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

// Function: entry_001b4324
// Address: 0x1b4324 - 0x1b434c
void entry_001b4324_0x1b4324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4324_0x1b4324");
#endif

    ctx->pc = 0x1b4324u;

    // 0x1b4324: 0xaf918718  sw          $s1, -0x78E8($gp)
    ctx->pc = 0x1b4324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U32(ctx, 17));
    // 0x1b4328: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b4328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b432c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b432cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b4330: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b4334: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1b4334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1b4338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b433c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b433cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4344: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4344u;
        // 0x1b4348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B434Cu;
}
