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

// Function: entry_00192e64
// Address: 0x192e64 - 0x192e74
void entry_00192e64_0x192e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192e64_0x192e64");
#endif

    ctx->pc = 0x192e64u;

label_192e64:
    // 0x192e64: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x192e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_192e68:
    // 0x192e68: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x192e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_192e6c:
    // 0x192e6c: 0x320f809  jalr        $t9
label_192e70:
    if (ctx->pc == 0x192E70u) {
        ctx->pc = 0x192E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E6Cu;
        // 0x192e70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E74u;
        goto label_fallthrough_0x192e6c;
    }
    ctx->pc = 0x192E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x192E74u);
        ctx->pc = 0x192E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E6Cu;
        // 0x192e70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192E6Cu, 0x192E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x192e6c:
    ctx->pc = 0x192E74u;
}
