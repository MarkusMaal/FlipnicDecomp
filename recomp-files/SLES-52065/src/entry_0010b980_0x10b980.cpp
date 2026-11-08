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

// Function: entry_0010b980
// Address: 0x10b980 - 0x10b998
void entry_0010b980_0x10b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b980_0x10b980");
#endif

    ctx->pc = 0x10b980u;

label_10b980:
    // 0x10b980: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10b980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10b984:
    // 0x10b984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b988:
    // 0x10b988: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b98c:
    // 0x10b98c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10b98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10b990:
    // 0x10b990: 0x320f809  jalr        $t9
label_10b994:
    if (ctx->pc == 0x10B994u) {
        ctx->pc = 0x10B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B990u;
        // 0x10b994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B998u;
        goto label_fallthrough_0x10b990;
    }
    ctx->pc = 0x10B990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B998u);
        ctx->pc = 0x10B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B990u;
        // 0x10b994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B990u, 0x10B998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10b990:
    ctx->pc = 0x10B998u;
}
