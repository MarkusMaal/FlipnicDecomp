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

// Function: entry_00118514
// Address: 0x118514 - 0x118534
void entry_00118514_0x118514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118514_0x118514");
#endif

    switch (ctx->pc) {
        case 0x118520u: goto label_118520;
        case 0x11852cu: goto label_11852c;
        default: break;
    }

    ctx->pc = 0x118514u;

    // 0x118514: 0x0  nop
    ctx->pc = 0x118514u;
    // NOP
    // 0x118518: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x118518u;
    SET_GPR_U32(ctx, 31, 0x118520u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x118518u, 0x118520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118520u;
label_118520:
    // 0x118520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118524: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x118524u;
    SET_GPR_U32(ctx, 31, 0x11852Cu);
    ctx->pc = 0x118528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118524u;
    // 0x118528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x118524u, 0x11852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11852Cu;
label_11852c:
    // 0x11852c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11852Cu;
    {
        const bool branch_taken_0x11852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11852c) {
            ctx->pc = 0x118550u;
            return;
        }
    }
    ctx->pc = 0x118534u;
}
