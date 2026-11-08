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

// Function: entry_001ac46c
// Address: 0x1ac46c - 0x1ac490
void entry_001ac46c_0x1ac46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac46c_0x1ac46c");
#endif

    switch (ctx->pc) {
        case 0x1ac488u: goto label_1ac488;
        default: break;
    }

    ctx->pc = 0x1ac46cu;

    // 0x1ac46c: 0x0  nop
    ctx->pc = 0x1ac46cu;
    // NOP
    // 0x1ac470: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1ac470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1ac474: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x1ac474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ac478: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC478u;
    {
        const bool branch_taken_0x1ac478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC478u;
        // 0x1ac47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac478) {
            ctx->pc = 0x1AC490u;
            return;
        }
    }
    ctx->pc = 0x1AC480u;
    // 0x1ac480: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AC480u;
    SET_GPR_U32(ctx, 31, 0x1AC488u);
    ctx->pc = 0x1AC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC480u;
    // 0x1ac484: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC480u, 0x1AC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC488u;
label_1ac488:
    // 0x1ac488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC488u;
    {
        const bool branch_taken_0x1ac488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac488) {
            ctx->pc = 0x1AC4A0u;
            return;
        }
    }
    ctx->pc = 0x1AC490u;
}
