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

// Function: entry_0014482c
// Address: 0x14482c - 0x144860
void entry_0014482c_0x14482c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014482c_0x14482c");
#endif

    switch (ctx->pc) {
        case 0x144854u: goto label_144854;
        default: break;
    }

    ctx->pc = 0x14482cu;

    // 0x14482c: 0x0  nop
    ctx->pc = 0x14482cu;
    // NOP
    // 0x144830: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x144830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144834: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x144838: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x144838u;
    {
        const bool branch_taken_0x144838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x144838) {
            ctx->pc = 0x1447D8u;
            return;
        }
    }
    ctx->pc = 0x144840u;
    // 0x144840: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x144844: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x144844u;
    {
        const bool branch_taken_0x144844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144844) {
            ctx->pc = 0x144860u;
            return;
        }
    }
    ctx->pc = 0x14484Cu;
    // 0x14484c: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x14484Cu;
    SET_GPR_U32(ctx, 31, 0x144854u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x14484Cu, 0x144854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144854u;
label_144854:
    // 0x144854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144858: 0xc051334  jal         func_144CD0
    ctx->pc = 0x144858u;
    SET_GPR_U32(ctx, 31, 0x144860u);
    ctx->pc = 0x14485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144858u;
    // 0x14485c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CD0u, 0x144858u, 0x144860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144860u;
}
