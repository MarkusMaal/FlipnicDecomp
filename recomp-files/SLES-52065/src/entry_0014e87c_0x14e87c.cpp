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

// Function: entry_0014e87c
// Address: 0x14e87c - 0x14e89c
void entry_0014e87c_0x14e87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e87c_0x14e87c");
#endif

    ctx->pc = 0x14e87cu;

    // 0x14e87c: 0x0  nop
    ctx->pc = 0x14e87cu;
    // NOP
    // 0x14e880: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x14e880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x14e884: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e894: 0x3e00008  jr          $ra
    ctx->pc = 0x14E894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E894u;
        // 0x14e898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E89Cu;
}
