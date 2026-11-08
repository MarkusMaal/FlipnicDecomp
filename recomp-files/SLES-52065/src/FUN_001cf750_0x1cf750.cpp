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

// Function: FUN_001cf750
// Address: 0x1cf750 - 0x1cf794
void FUN_001cf750_0x1cf750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf750_0x1cf750");
#endif

    switch (ctx->pc) {
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf780u: goto label_1cf780;
        default: break;
    }

    ctx->pc = 0x1cf750u;

    // 0x1cf750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf754: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf75c: 0x24a597a0  addiu       $a1, $a1, -0x6860
    ctx->pc = 0x1cf75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940576));
    // 0x1cf760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf764: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1cf764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf768: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CF768u;
    SET_GPR_U32(ctx, 31, 0x1CF770u);
    ctx->pc = 0x1CF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF768u;
    // 0x1cf76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CF768u, 0x1CF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF770u;
label_1cf770:
    // 0x1cf770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf778: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF778u;
    SET_GPR_U32(ctx, 31, 0x1CF780u);
    ctx->pc = 0x1CF77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF778u;
    // 0x1cf77c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF778u, 0x1CF780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF780u;
label_1cf780:
    // 0x1cf780: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cf780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf78c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF78Cu;
        // 0x1cf790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF794u;
}
