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

// Function: entry_00101f08
// Address: 0x101f08 - 0x101f18
void entry_00101f08_0x101f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101f08_0x101f08");
#endif

    switch (ctx->pc) {
        case 0x101f10u: goto label_101f10;
        default: break;
    }

    ctx->pc = 0x101f08u;

    // 0x101f08: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x101F08u;
    SET_GPR_U32(ctx, 31, 0x101F10u);
    ctx->pc = 0x101F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F08u;
    // 0x101f0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x101F08u, 0x101F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F10u;
label_101f10:
    // 0x101f10: 0xc0401a4  jal         func_100690
    ctx->pc = 0x101F10u;
    SET_GPR_U32(ctx, 31, 0x101F18u);
    ctx->pc = 0x101F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F10u;
    // 0x101f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x101F10u, 0x101F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F18u;
}
