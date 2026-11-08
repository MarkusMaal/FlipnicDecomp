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

// Function: entry_001e26a4
// Address: 0x1e26a4 - 0x1e26b8
void entry_001e26a4_0x1e26a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e26a4_0x1e26a4");
#endif

    ctx->pc = 0x1e26a4u;

label_1e26a4:
    // 0x1e26a4: 0x0  nop
    ctx->pc = 0x1e26a4u;
    // NOP
label_1e26a8:
    // 0x1e26a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e26ac:
    // 0x1e26ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e26b0:
    // 0x1e26b0: 0x320f809  jalr        $t9
label_1e26b4:
    if (ctx->pc == 0x1E26B4u) {
        ctx->pc = 0x1E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26B0u;
        // 0x1e26b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26B8u;
        goto label_fallthrough_0x1e26b0;
    }
    ctx->pc = 0x1E26B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E26B8u);
        ctx->pc = 0x1E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26B0u;
        // 0x1e26b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E26B0u, 0x1E26B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e26b0:
    ctx->pc = 0x1E26B8u;
}
