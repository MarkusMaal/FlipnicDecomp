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

// Function: entry_0011e45c
// Address: 0x11e45c - 0x11e490
void entry_0011e45c_0x11e45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e45c_0x11e45c");
#endif

    switch (ctx->pc) {
        case 0x11e468u: goto label_11e468;
        default: break;
    }

    ctx->pc = 0x11e45cu;

    // 0x11e45c: 0x0  nop
    ctx->pc = 0x11e45cu;
    // NOP
    // 0x11e460: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11E460u;
    SET_GPR_U32(ctx, 31, 0x11E468u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11E460u, 0x11E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E468u;
label_11e468:
    // 0x11e468: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11e46c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e470: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x11e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x11e474: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E474u;
    {
        const bool branch_taken_0x11e474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e474) {
            ctx->pc = 0x11E4ACu;
            return;
        }
    }
    ctx->pc = 0x11E47Cu;
    // 0x11e47c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E47Cu;
    {
        const bool branch_taken_0x11e47c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e47c) {
            ctx->pc = 0x11E490u;
            return;
        }
    }
    ctx->pc = 0x11E484u;
    // 0x11e484: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x11e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11e488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E488u;
    {
        const bool branch_taken_0x11e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E488u;
        // 0x11e48c: 0xae420100  sw          $v0, 0x100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e488) {
            ctx->pc = 0x11E498u;
            return;
        }
    }
    ctx->pc = 0x11E490u;
}
