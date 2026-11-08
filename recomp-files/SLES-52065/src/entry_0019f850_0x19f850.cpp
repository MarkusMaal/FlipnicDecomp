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

// Function: entry_0019f850
// Address: 0x19f850 - 0x19f894
void entry_0019f850_0x19f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f850_0x19f850");
#endif

    switch (ctx->pc) {
        case 0x19f858u: goto label_19f858;
        case 0x19f874u: goto label_19f874;
        case 0x19f88cu: goto label_19f88c;
        default: break;
    }

    ctx->pc = 0x19f850u;

    // 0x19f850: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x19F850u;
    SET_GPR_U32(ctx, 31, 0x19F858u);
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x19F850u, 0x19F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F858u;
label_19f858:
    // 0x19f858: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19f85c: 0x27b0009c  addiu       $s0, $sp, 0x9C
    ctx->pc = 0x19f85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x19f860: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x19f864: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x19f864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x19f868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19f868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19f86c: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x19F86Cu;
    SET_GPR_U32(ctx, 31, 0x19F874u);
    ctx->pc = 0x19F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F86Cu;
    // 0x19f870: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19F86Cu, 0x19F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F874u;
label_19f874:
    // 0x19f874: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19f878: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19f87c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x19f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x19f880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f884: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x19F884u;
    SET_GPR_U32(ctx, 31, 0x19F88Cu);
    ctx->pc = 0x19F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F884u;
    // 0x19f888: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x19F884u, 0x19F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F88Cu;
label_19f88c:
    // 0x19f88c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x19F88Cu;
    {
        const bool branch_taken_0x19f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f88c) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F894u;
}
