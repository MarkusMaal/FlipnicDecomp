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

// Function: FUN_0014eed0
// Address: 0x14eed0 - 0x14ef10
void FUN_0014eed0_0x14eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014eed0_0x14eed0");
#endif

    switch (ctx->pc) {
        case 0x14eeecu: goto label_14eeec;
        default: break;
    }

    ctx->pc = 0x14eed0u;

    // 0x14eed0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14eed4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14eed8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14eedc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14eee0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14eee0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14eee4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EEE4u;
    {
        const bool branch_taken_0x14eee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eee4) {
            ctx->pc = 0x14EF08u;
            goto label_14ef08;
        }
    }
    ctx->pc = 0x14EEECu;
label_14eeec:
    // 0x14eeec: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x14eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x14eef0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14eef0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14eef4: 0x0  nop
    ctx->pc = 0x14eef4u;
    // NOP
    // 0x14eef8: 0x0  nop
    ctx->pc = 0x14eef8u;
    // NOP
    // 0x14eefc: 0x0  nop
    ctx->pc = 0x14eefcu;
    // NOP
    // 0x14ef00: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EF00u;
    {
        const bool branch_taken_0x14ef00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ef00) {
            ctx->pc = 0x14EEECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14eeec;
        }
    }
    ctx->pc = 0x14EF08u;
label_14ef08:
    // 0x14ef08: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF08u;
        // 0x14ef0c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF10u;
}
