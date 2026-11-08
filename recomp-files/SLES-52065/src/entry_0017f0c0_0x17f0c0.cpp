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

// Function: entry_0017f0c0
// Address: 0x17f0c0 - 0x17f0dc
void entry_0017f0c0_0x17f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f0c0_0x17f0c0");
#endif

    ctx->pc = 0x17f0c0u;

label_17f0c0:
    // 0x17f0c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17f0c4:
    // 0x17f0c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f0c8:
    if (ctx->pc == 0x17F0C8u) {
        ctx->pc = 0x17F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0C4u;
        // 0x17f0c8: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0CCu;
        goto label_17f0cc;
    }
    ctx->pc = 0x17F0C4u;
    {
        const bool branch_taken_0x17f0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0C4u;
        // 0x17f0c8: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0c4) {
            ctx->pc = 0x17F0DCu;
            return;
        }
    }
    ctx->pc = 0x17F0CCu;
label_17f0cc:
    // 0x17f0cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f0d0:
    // 0x17f0d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f0d4:
    // 0x17f0d4: 0x320f809  jalr        $t9
label_17f0d8:
    if (ctx->pc == 0x17F0D8u) {
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D4u;
        // 0x17f0d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0DCu;
        goto label_fallthrough_0x17f0d4;
    }
    ctx->pc = 0x17F0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F0DCu);
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D4u;
        // 0x17f0d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0D4u, 0x17F0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17f0d4:
    ctx->pc = 0x17F0DCu;
}
