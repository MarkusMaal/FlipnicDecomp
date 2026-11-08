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

// Function: entry_001931b8
// Address: 0x1931b8 - 0x1931c8
void entry_001931b8_0x1931b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001931b8_0x1931b8");
#endif

    ctx->pc = 0x1931b8u;

label_1931b8:
    // 0x1931b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1931b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1931bc:
    // 0x1931bc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1931bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1931c0:
    // 0x1931c0: 0x320f809  jalr        $t9
label_1931c4:
    if (ctx->pc == 0x1931C4u) {
        ctx->pc = 0x1931C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931C0u;
        // 0x1931c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931C8u;
        goto label_fallthrough_0x1931c0;
    }
    ctx->pc = 0x1931C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1931C8u);
        ctx->pc = 0x1931C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931C0u;
        // 0x1931c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931C0u, 0x1931C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1931c0:
    ctx->pc = 0x1931C8u;
}
