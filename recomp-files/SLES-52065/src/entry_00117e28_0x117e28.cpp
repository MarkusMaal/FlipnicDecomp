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

// Function: entry_00117e28
// Address: 0x117e28 - 0x117e4c
void entry_00117e28_0x117e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117e28_0x117e28");
#endif

    switch (ctx->pc) {
        case 0x117e38u: goto label_117e38;
        default: break;
    }

    ctx->pc = 0x117e28u;

    // 0x117e28: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e30: 0xc080664  jal         func_201990
    ctx->pc = 0x117E30u;
    SET_GPR_U32(ctx, 31, 0x117E38u);
    ctx->pc = 0x117E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E30u;
    // 0x117e34: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x117E30u, 0x117E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E38u;
label_117e38:
    // 0x117e38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117e44: 0x3e00008  jr          $ra
    ctx->pc = 0x117E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E44u;
        // 0x117e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117E4Cu;
}
