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

// Function: entry_00142520
// Address: 0x142520 - 0x142540
void entry_00142520_0x142520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142520_0x142520");
#endif

    switch (ctx->pc) {
        case 0x142528u: goto label_142528;
        default: break;
    }

    ctx->pc = 0x142520u;

    // 0x142520: 0xc050950  jal         func_142540
    ctx->pc = 0x142520u;
    SET_GPR_U32(ctx, 31, 0x142528u);
    ctx->pc = 0x142524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142520u;
    // 0x142524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142540u, 0x142520u, 0x142528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142528u;
label_142528:
    // 0x142528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x142528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14252c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14252cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142538: 0x3e00008  jr          $ra
    ctx->pc = 0x142538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142538u;
        // 0x14253c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142540u;
}
