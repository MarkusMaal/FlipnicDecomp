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

// Function: entry_0013e4f0
// Address: 0x13e4f0 - 0x13e52c
void entry_0013e4f0_0x13e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e4f0_0x13e4f0");
#endif

    switch (ctx->pc) {
        case 0x13e518u: goto label_13e518;
        default: break;
    }

    ctx->pc = 0x13e4f0u;

label_13e4f0:
    // 0x13e4f0: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_13e4f4:
    // 0x13e4f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_13e4f8:
    // 0x13e4f8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13e4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e4fc:
    // 0x13e4fc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_13e500:
    if (ctx->pc == 0x13E500u) {
        ctx->pc = 0x13E504u;
        goto label_13e504;
    }
    ctx->pc = 0x13E4FCu;
    {
        const bool branch_taken_0x13e4fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4fc) {
            ctx->pc = 0x13E52Cu;
            return;
        }
    }
    ctx->pc = 0x13E504u;
label_13e504:
    // 0x13e504: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e508:
    // 0x13e508: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x13e508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13e50c:
    // 0x13e50c: 0x8f3900e8  lw          $t9, 0xE8($t9)
    ctx->pc = 0x13e50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 232)));
label_13e510:
    // 0x13e510: 0x320f809  jalr        $t9
label_13e514:
    if (ctx->pc == 0x13E514u) {
        ctx->pc = 0x13E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E510u;
        // 0x13e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E518u;
        goto label_13e518;
    }
    ctx->pc = 0x13E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E518u);
        ctx->pc = 0x13E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E510u;
        // 0x13e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E510u, 0x13E518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E518u;
label_13e518:
    // 0x13e518: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e51c:
    // 0x13e51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e520:
    // 0x13e520: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e524:
    // 0x13e524: 0x320f809  jalr        $t9
label_13e528:
    if (ctx->pc == 0x13E528u) {
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E524u;
        // 0x13e528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E52Cu;
        goto label_fallthrough_0x13e524;
    }
    ctx->pc = 0x13E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E52Cu);
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E524u;
        // 0x13e528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E524u, 0x13E52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13e524:
    ctx->pc = 0x13E52Cu;
}
