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

// Function: entry_0016e258
// Address: 0x16e258 - 0x16e270
void entry_0016e258_0x16e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e258_0x16e258");
#endif

    switch (ctx->pc) {
        case 0x16e26cu: goto label_16e26c;
        default: break;
    }

    ctx->pc = 0x16e258u;

label_16e258:
    // 0x16e258: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16e258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_16e25c:
    // 0x16e25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e260:
    // 0x16e260: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16e260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16e264:
    // 0x16e264: 0x320f809  jalr        $t9
label_16e268:
    if (ctx->pc == 0x16E268u) {
        ctx->pc = 0x16E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E264u;
        // 0x16e268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E26Cu;
        goto label_16e26c;
    }
    ctx->pc = 0x16E264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E26Cu);
        ctx->pc = 0x16E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E264u;
        // 0x16e268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E264u, 0x16E26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E26Cu;
label_16e26c:
    // 0x16e26c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16e26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16e270u;
}
