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

// Function: entry_0010be4c
// Address: 0x10be4c - 0x10be68
void entry_0010be4c_0x10be4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be4c_0x10be4c");
#endif

    ctx->pc = 0x10be4cu;

label_10be4c:
    // 0x10be4c: 0x0  nop
    ctx->pc = 0x10be4cu;
    // NOP
label_10be50:
    // 0x10be50: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10be50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10be54:
    // 0x10be54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10be54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10be58:
    // 0x10be58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10be5c:
    // 0x10be5c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10be5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10be60:
    // 0x10be60: 0x320f809  jalr        $t9
label_10be64:
    if (ctx->pc == 0x10BE64u) {
        ctx->pc = 0x10BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE60u;
        // 0x10be64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE68u;
        goto label_fallthrough_0x10be60;
    }
    ctx->pc = 0x10BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BE68u);
        ctx->pc = 0x10BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE60u;
        // 0x10be64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE60u, 0x10BE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10be60:
    ctx->pc = 0x10BE68u;
}
