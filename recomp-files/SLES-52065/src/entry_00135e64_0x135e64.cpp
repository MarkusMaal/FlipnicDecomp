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

// Function: entry_00135e64
// Address: 0x135e64 - 0x135e94
void entry_00135e64_0x135e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135e64_0x135e64");
#endif

    switch (ctx->pc) {
        case 0x135e7cu: goto label_135e7c;
        default: break;
    }

    ctx->pc = 0x135e64u;

label_135e64:
    // 0x135e64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135e68:
    // 0x135e68: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135e6c:
    // 0x135e6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135e70:
    // 0x135e70: 0x8f3900fc  lw          $t9, 0xFC($t9)
    ctx->pc = 0x135e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 252)));
label_135e74:
    // 0x135e74: 0x320f809  jalr        $t9
label_135e78:
    if (ctx->pc == 0x135E78u) {
        ctx->pc = 0x135E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E74u;
        // 0x135e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E7Cu;
        goto label_135e7c;
    }
    ctx->pc = 0x135E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135E7Cu);
        ctx->pc = 0x135E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E74u;
        // 0x135e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E74u, 0x135E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135E7Cu;
label_135e7c:
    // 0x135e7c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135e80:
    // 0x135e80: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135e84:
    // 0x135e84: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135e88:
    // 0x135e88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135e8c:
    // 0x135e8c: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135e90:
    if (ctx->pc == 0x135E90u) {
        ctx->pc = 0x135E94u;
        goto label_fallthrough_0x135e8c;
    }
    ctx->pc = 0x135E8Cu;
    {
        const bool branch_taken_0x135e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135e8c) {
            ctx->pc = 0x135E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135e64;
        }
    }
label_fallthrough_0x135e8c:
    ctx->pc = 0x135E94u;
}
