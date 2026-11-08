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

// Function: entry_001b7968
// Address: 0x1b7968 - 0x1b7994
void entry_001b7968_0x1b7968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7968_0x1b7968");
#endif

    switch (ctx->pc) {
        case 0x1b7970u: goto label_1b7970;
        case 0x1b797cu: goto label_1b797c;
        default: break;
    }

    ctx->pc = 0x1b7968u;

    // 0x1b7968: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7968u;
    SET_GPR_U32(ctx, 31, 0x1B7970u);
    ctx->pc = 0x1B796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7968u;
    // 0x1b796c: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7968u, 0x1B7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7970u;
label_1b7970:
    // 0x1b7970: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1b7970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1b7974: 0xc06de80  jal         func_1B7A00
    ctx->pc = 0x1B7974u;
    SET_GPR_U32(ctx, 31, 0x1B797Cu);
    ctx->pc = 0x1B7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7974u;
    // 0x1b7978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A00u, 0x1B7974u, 0x1B797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B797Cu;
label_1b797c:
    // 0x1b797c: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x1b797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1b7980: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x1b7980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1b7984: 0x1483ffef  bne         $a0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B7984u;
    {
        const bool branch_taken_0x1b7984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7984) {
            ctx->pc = 0x1B7944u;
            return;
        }
    }
    ctx->pc = 0x1B798Cu;
    // 0x1b798c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B798Cu;
    {
        const bool branch_taken_0x1b798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b798c) {
            ctx->pc = 0x1B79C8u;
            return;
        }
    }
    ctx->pc = 0x1B7994u;
}
