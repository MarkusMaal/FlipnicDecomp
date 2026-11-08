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

// Function: entry_0013d298
// Address: 0x13d298 - 0x13d2b8
void entry_0013d298_0x13d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d298_0x13d298");
#endif

    switch (ctx->pc) {
        case 0x13d298u: goto label_13d298;
        case 0x13d29cu: goto label_13d29c;
        case 0x13d2a0u: goto label_13d2a0;
        case 0x13d2a4u: goto label_13d2a4;
        case 0x13d2a8u: goto label_13d2a8;
        case 0x13d2acu: goto label_13d2ac;
        case 0x13d2b0u: goto label_13d2b0;
        case 0x13d2b4u: goto label_13d2b4;
        default: break;
    }

    ctx->pc = 0x13d298u;

label_13d298:
    // 0x13d298: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d29c:
    // 0x13d29c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d2a0:
    // 0x13d2a0: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x13d2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_13d2a4:
    // 0x13d2a4: 0x320f809  jalr        $t9
label_13d2a8:
    if (ctx->pc == 0x13D2A8u) {
        ctx->pc = 0x13D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2A4u;
        // 0x13d2a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D2ACu;
        goto label_13d2ac;
    }
    ctx->pc = 0x13D2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D2ACu);
        ctx->pc = 0x13D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2A4u;
        // 0x13d2a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D2A4u, 0x13D2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D2ACu;
label_13d2ac:
    // 0x13d2ac: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13d2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_13d2b0:
    // 0x13d2b0: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_13d2b4:
    if (ctx->pc == 0x13D2B4u) {
        ctx->pc = 0x13D2B8u;
        goto label_fallthrough_0x13d2b0;
    }
    ctx->pc = 0x13D2B0u;
    {
        const bool branch_taken_0x13d2b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x13d2b0) {
            ctx->pc = 0x13D298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d298;
        }
    }
label_fallthrough_0x13d2b0:
    ctx->pc = 0x13D2B8u;
}
