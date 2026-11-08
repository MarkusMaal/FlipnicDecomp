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

// Function: entry_00124d40
// Address: 0x124d40 - 0x124d60
void entry_00124d40_0x124d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124d40_0x124d40");
#endif

    switch (ctx->pc) {
        case 0x124d48u: goto label_124d48;
        default: break;
    }

    ctx->pc = 0x124d40u;

    // 0x124d40: 0xc048ee8  jal         func_123BA0
    ctx->pc = 0x124D40u;
    SET_GPR_U32(ctx, 31, 0x124D48u);
    ctx->pc = 0x124D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D40u;
    // 0x124d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123BA0u, 0x124D40u, 0x124D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D48u;
label_124d48:
    // 0x124d48: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x124d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x124d4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x124d4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x124d50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124D50u;
    {
        const bool branch_taken_0x124d50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x124D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D50u;
        // 0x124d54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d50) {
            ctx->pc = 0x124D64u;
            return;
        }
    }
    ctx->pc = 0x124D58u;
    // 0x124d58: 0xc0401a4  jal         func_100690
    ctx->pc = 0x124D58u;
    SET_GPR_U32(ctx, 31, 0x124D60u);
    ctx->pc = 0x124D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D58u;
    // 0x124d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x124D58u, 0x124D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D60u;
}
