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

// Function: entry_00187760
// Address: 0x187760 - 0x18777c
void entry_00187760_0x187760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187760_0x187760");
#endif

    switch (ctx->pc) {
        case 0x187768u: goto label_187768;
        case 0x187770u: goto label_187770;
        case 0x187778u: goto label_187778;
        default: break;
    }

    ctx->pc = 0x187760u;

    // 0x187760: 0xc061e20  jal         func_187880
    ctx->pc = 0x187760u;
    SET_GPR_U32(ctx, 31, 0x187768u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x187760u, 0x187768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187768u;
label_187768:
    // 0x187768: 0xc061e1c  jal         func_187870
    ctx->pc = 0x187768u;
    SET_GPR_U32(ctx, 31, 0x187770u);
    ctx->pc = 0x18776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187768u;
    // 0x18776c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x187768u, 0x187770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187770u;
label_187770:
    // 0x187770: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187770u;
    SET_GPR_U32(ctx, 31, 0x187778u);
    ctx->pc = 0x187774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187770u;
    // 0x187774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187770u, 0x187778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187778u;
label_187778:
    // 0x187778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18777cu;
}
