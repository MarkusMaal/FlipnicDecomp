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

// Function: FUN_00144360
// Address: 0x144360 - 0x1443a0
void FUN_00144360_0x144360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144360_0x144360");
#endif

    switch (ctx->pc) {
        case 0x14437cu: goto label_14437c;
        default: break;
    }

    ctx->pc = 0x144360u;

    // 0x144360: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x144360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144364: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x144364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x144368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14436c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x144370: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x144370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144374: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x144374u;
    {
        const bool branch_taken_0x144374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144374) {
            ctx->pc = 0x144398u;
            goto label_144398;
        }
    }
    ctx->pc = 0x14437Cu;
label_14437c:
    // 0x14437c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x14437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x144380: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x144380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144384: 0x0  nop
    ctx->pc = 0x144384u;
    // NOP
    // 0x144388: 0x0  nop
    ctx->pc = 0x144388u;
    // NOP
    // 0x14438c: 0x0  nop
    ctx->pc = 0x14438cu;
    // NOP
    // 0x144390: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x144390u;
    {
        const bool branch_taken_0x144390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x144390) {
            ctx->pc = 0x14437Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14437c;
        }
    }
    ctx->pc = 0x144398u;
label_144398:
    // 0x144398: 0x3e00008  jr          $ra
    ctx->pc = 0x144398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144398u;
        // 0x14439c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1443A0u;
}
