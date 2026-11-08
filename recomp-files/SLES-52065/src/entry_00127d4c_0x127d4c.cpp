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

// Function: entry_00127d4c
// Address: 0x127d4c - 0x127d68
void entry_00127d4c_0x127d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127d4c_0x127d4c");
#endif

    ctx->pc = 0x127d4cu;

label_127d4c:
    // 0x127d4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x127d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_127d50:
    // 0x127d50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_127d54:
    if (ctx->pc == 0x127D54u) {
        ctx->pc = 0x127D58u;
        goto label_127d58;
    }
    ctx->pc = 0x127D50u;
    {
        const bool branch_taken_0x127d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d50) {
            ctx->pc = 0x127D68u;
            return;
        }
    }
    ctx->pc = 0x127D58u;
label_127d58:
    // 0x127d58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127d5c:
    // 0x127d5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127d60:
    // 0x127d60: 0x320f809  jalr        $t9
label_127d64:
    if (ctx->pc == 0x127D64u) {
        ctx->pc = 0x127D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D60u;
        // 0x127d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127D68u;
        goto label_fallthrough_0x127d60;
    }
    ctx->pc = 0x127D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127D68u);
        ctx->pc = 0x127D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D60u;
        // 0x127d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127D60u, 0x127D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x127d60:
    ctx->pc = 0x127D68u;
}
