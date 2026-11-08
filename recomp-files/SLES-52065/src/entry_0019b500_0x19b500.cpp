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

// Function: entry_0019b500
// Address: 0x19b500 - 0x19b53c
void entry_0019b500_0x19b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b500_0x19b500");
#endif

    switch (ctx->pc) {
        case 0x19b524u: goto label_19b524;
        case 0x19b538u: goto label_19b538;
        default: break;
    }

    ctx->pc = 0x19b500u;

label_19b500:
    // 0x19b500: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b504:
    // 0x19b504: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19b508:
    if (ctx->pc == 0x19B508u) {
        ctx->pc = 0x19B50Cu;
        goto label_19b50c;
    }
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B53Cu;
            return;
        }
    }
    ctx->pc = 0x19B50Cu;
label_19b50c:
    // 0x19b50c: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b510:
    // 0x19b510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b514:
    // 0x19b514: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b518:
    // 0x19b518: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b51c:
    // 0x19b51c: 0x320f809  jalr        $t9
label_19b520:
    if (ctx->pc == 0x19B520u) {
        ctx->pc = 0x19B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B51Cu;
        // 0x19b520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B524u;
        goto label_19b524;
    }
    ctx->pc = 0x19B51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B524u);
        ctx->pc = 0x19B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B51Cu;
        // 0x19b520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B51Cu, 0x19B524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B524u;
label_19b524:
    // 0x19b524: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b528:
    // 0x19b528: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b52c:
    // 0x19b52c: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b530:
    // 0x19b530: 0x320f809  jalr        $t9
label_19b534:
    if (ctx->pc == 0x19B534u) {
        ctx->pc = 0x19B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B530u;
        // 0x19b534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B538u;
        goto label_19b538;
    }
    ctx->pc = 0x19B530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B538u);
        ctx->pc = 0x19B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B530u;
        // 0x19b534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B530u, 0x19B538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B538u;
label_19b538:
    // 0x19b538: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    ctx->pc = 0x19b53cu;
}
