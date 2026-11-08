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

// Function: entry_0019551c
// Address: 0x19551c - 0x19554c
void entry_0019551c_0x19551c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019551c_0x19551c");
#endif

    switch (ctx->pc) {
        case 0x195528u: goto label_195528;
        case 0x195530u: goto label_195530;
        case 0x195538u: goto label_195538;
        case 0x195544u: goto label_195544;
        default: break;
    }

    ctx->pc = 0x19551cu;

    // 0x19551c: 0x0  nop
    ctx->pc = 0x19551cu;
    // NOP
    // 0x195520: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x195520u;
    SET_GPR_U32(ctx, 31, 0x195528u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195520u, 0x195528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195528u;
label_195528:
    // 0x195528: 0xc04a02c  jal         func_1280B0
    ctx->pc = 0x195528u;
    SET_GPR_U32(ctx, 31, 0x195530u);
    ctx->pc = 0x19552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195528u;
    // 0x19552c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x195528u, 0x195530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195530u;
label_195530:
    // 0x195530: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x195530u;
    SET_GPR_U32(ctx, 31, 0x195538u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195530u, 0x195538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195538u;
label_195538:
    // 0x195538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19553c: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x19553Cu;
    SET_GPR_U32(ctx, 31, 0x195544u);
    ctx->pc = 0x195540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19553Cu;
    // 0x195540: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x19553Cu, 0x195544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195544u;
label_195544:
    // 0x195544: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x195544u;
    {
        const bool branch_taken_0x195544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195544) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x19554Cu;
}
