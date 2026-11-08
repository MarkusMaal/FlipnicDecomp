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

// Function: entry_00144a68
// Address: 0x144a68 - 0x144a88
void entry_00144a68_0x144a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144a68_0x144a68");
#endif

    ctx->pc = 0x144a68u;

label_144a68:
    // 0x144a68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_144a6c:
    // 0x144a6c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x144a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_144a70:
    // 0x144a70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_144a74:
    if (ctx->pc == 0x144A74u) {
        ctx->pc = 0x144A78u;
        goto label_144a78;
    }
    ctx->pc = 0x144A70u;
    {
        const bool branch_taken_0x144a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a70) {
            ctx->pc = 0x144A88u;
            return;
        }
    }
    ctx->pc = 0x144A78u;
label_144a78:
    // 0x144a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x144a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_144a7c:
    // 0x144a7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x144a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_144a80:
    // 0x144a80: 0x320f809  jalr        $t9
label_144a84:
    if (ctx->pc == 0x144A84u) {
        ctx->pc = 0x144A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A80u;
        // 0x144a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A88u;
        goto label_fallthrough_0x144a80;
    }
    ctx->pc = 0x144A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x144A88u);
        ctx->pc = 0x144A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A80u;
        // 0x144a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144A80u, 0x144A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x144a80:
    ctx->pc = 0x144A88u;
}
