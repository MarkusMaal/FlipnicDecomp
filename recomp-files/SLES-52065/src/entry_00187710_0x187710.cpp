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

// Function: entry_00187710
// Address: 0x187710 - 0x187728
void entry_00187710_0x187710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187710_0x187710");
#endif

    switch (ctx->pc) {
        case 0x187718u: goto label_187718;
        case 0x187720u: goto label_187720;
        default: break;
    }

    ctx->pc = 0x187710u;

    // 0x187710: 0xc061e20  jal         func_187880
    ctx->pc = 0x187710u;
    SET_GPR_U32(ctx, 31, 0x187718u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x187710u, 0x187718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187718u;
label_187718:
    // 0x187718: 0xc061e1c  jal         func_187870
    ctx->pc = 0x187718u;
    SET_GPR_U32(ctx, 31, 0x187720u);
    ctx->pc = 0x18771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187718u;
    // 0x18771c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x187718u, 0x187720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187720u;
label_187720:
    // 0x187720: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187720u;
    SET_GPR_U32(ctx, 31, 0x187728u);
    ctx->pc = 0x187724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187720u;
    // 0x187724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187720u, 0x187728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187728u;
}
