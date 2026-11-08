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

// Function: entry_001ef858
// Address: 0x1ef858 - 0x1ef87c
void entry_001ef858_0x1ef858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef858_0x1ef858");
#endif

    switch (ctx->pc) {
        case 0x1ef860u: goto label_1ef860;
        case 0x1ef874u: goto label_1ef874;
        default: break;
    }

    ctx->pc = 0x1ef858u;

    // 0x1ef858: 0xc07bbbe  jal         func_1EEEF8
    ctx->pc = 0x1EF858u;
    SET_GPR_U32(ctx, 31, 0x1EF860u);
    ctx->pc = 0x1EEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEEF8u, 0x1EF858u, 0x1EF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF860u;
label_1ef860:
    // 0x1ef860: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ef860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef864: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF864u;
    {
        const bool branch_taken_0x1ef864 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef864) {
            ctx->pc = 0x1EF868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF864u;
            // 0x1ef868: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF87Cu;
            return;
        }
    }
    ctx->pc = 0x1EF86Cu;
    // 0x1ef86c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF86Cu;
    SET_GPR_U32(ctx, 31, 0x1EF874u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF86Cu, 0x1EF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF874u;
label_1ef874:
    // 0x1ef874: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1EF874u;
    {
        const bool branch_taken_0x1ef874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF874u;
        // 0x1ef878: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef874) {
            ctx->pc = 0x1EFA14u;
            return;
        }
    }
    ctx->pc = 0x1EF87Cu;
}
