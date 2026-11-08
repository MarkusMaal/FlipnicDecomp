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

// Function: entry_00135d30
// Address: 0x135d30 - 0x135d60
void entry_00135d30_0x135d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135d30_0x135d30");
#endif

    switch (ctx->pc) {
        case 0x135d48u: goto label_135d48;
        default: break;
    }

    ctx->pc = 0x135d30u;

label_135d30:
    // 0x135d30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135d34:
    // 0x135d34: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135d38:
    // 0x135d38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135d3c:
    // 0x135d3c: 0x8f3900e8  lw          $t9, 0xE8($t9)
    ctx->pc = 0x135d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 232)));
label_135d40:
    // 0x135d40: 0x320f809  jalr        $t9
label_135d44:
    if (ctx->pc == 0x135D44u) {
        ctx->pc = 0x135D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D40u;
        // 0x135d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D48u;
        goto label_135d48;
    }
    ctx->pc = 0x135D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135D48u);
        ctx->pc = 0x135D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D40u;
        // 0x135d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D40u, 0x135D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135D48u;
label_135d48:
    // 0x135d48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135d4c:
    // 0x135d4c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135d50:
    // 0x135d50: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135d54:
    // 0x135d54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135d58:
    // 0x135d58: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135d5c:
    if (ctx->pc == 0x135D5Cu) {
        ctx->pc = 0x135D60u;
        goto label_fallthrough_0x135d58;
    }
    ctx->pc = 0x135D58u;
    {
        const bool branch_taken_0x135d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135d58) {
            ctx->pc = 0x135D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135d30;
        }
    }
label_fallthrough_0x135d58:
    ctx->pc = 0x135D60u;
}
