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

// Function: entry_00202dd8
// Address: 0x202dd8 - 0x202dfc
void entry_00202dd8_0x202dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202dd8_0x202dd8");
#endif

    switch (ctx->pc) {
        case 0x202de0u: goto label_202de0;
        case 0x202decu: goto label_202dec;
        case 0x202df8u: goto label_202df8;
        default: break;
    }

    ctx->pc = 0x202dd8u;

    // 0x202dd8: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202DD8u;
    SET_GPR_U32(ctx, 31, 0x202DE0u);
    ctx->pc = 0x202DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DD8u;
    // 0x202ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202DD8u, 0x202DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DE0u;
label_202de0:
    // 0x202de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202de4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202DE4u;
    SET_GPR_U32(ctx, 31, 0x202DECu);
    ctx->pc = 0x202DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DE4u;
    // 0x202de8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202DE4u, 0x202DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DECu;
label_202dec:
    // 0x202dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202df0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202DF0u;
    SET_GPR_U32(ctx, 31, 0x202DF8u);
    ctx->pc = 0x202DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DF0u;
    // 0x202df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202DF0u, 0x202DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DF8u;
label_202df8:
    // 0x202df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202dfcu;
}
