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

// Function: entry_00118534
// Address: 0x118534 - 0x118550
void entry_00118534_0x118534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118534_0x118534");
#endif

    switch (ctx->pc) {
        case 0x118540u: goto label_118540;
        default: break;
    }

    ctx->pc = 0x118534u;

    // 0x118534: 0x0  nop
    ctx->pc = 0x118534u;
    // NOP
    // 0x118538: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118538u;
    SET_GPR_U32(ctx, 31, 0x118540u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118538u, 0x118540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118540u;
label_118540:
    // 0x118540: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x118540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118544: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x118544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118548: 0xc062ba4  jal         func_18AE90
    ctx->pc = 0x118548u;
    SET_GPR_U32(ctx, 31, 0x118550u);
    ctx->pc = 0x11854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118548u;
    // 0x11854c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE90u, 0x118548u, 0x118550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118550u;
}
