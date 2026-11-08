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

// Function: entry_0012f870
// Address: 0x12f870 - 0x12f884
void entry_0012f870_0x12f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f870_0x12f870");
#endif

    ctx->pc = 0x12f870u;

label_12f870:
    // 0x12f870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12f870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12f874:
    // 0x12f874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f878:
    // 0x12f878: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12f878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12f87c:
    // 0x12f87c: 0x3200008  jr          $t9
label_12f880:
    if (ctx->pc == 0x12F880u) {
        ctx->pc = 0x12F884u;
        goto label_fallthrough_0x12f87c;
    }
    ctx->pc = 0x12F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F87Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x12f87c:
    ctx->pc = 0x12F884u;
}
