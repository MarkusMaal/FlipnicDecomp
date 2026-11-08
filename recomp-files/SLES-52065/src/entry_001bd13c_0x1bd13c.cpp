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

// Function: entry_001bd13c
// Address: 0x1bd13c - 0x1bd158
void entry_001bd13c_0x1bd13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd13c_0x1bd13c");
#endif

    switch (ctx->pc) {
        case 0x1bd148u: goto label_1bd148;
        default: break;
    }

    ctx->pc = 0x1bd13cu;

    // 0x1bd13c: 0x0  nop
    ctx->pc = 0x1bd13cu;
    // NOP
    // 0x1bd140: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1BD140u;
    SET_GPR_U32(ctx, 31, 0x1BD148u);
    ctx->pc = 0x1BD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD140u;
    // 0x1bd144: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1BD140u, 0x1BD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD148u;
label_1bd148:
    // 0x1bd148: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bd148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd14c: 0x1462ffd8  bne         $v1, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1BD14Cu;
    {
        const bool branch_taken_0x1bd14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd14c) {
            ctx->pc = 0x1BD0B0u;
            return;
        }
    }
    ctx->pc = 0x1BD154u;
    // 0x1bd154: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bd154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1bd158u;
}
