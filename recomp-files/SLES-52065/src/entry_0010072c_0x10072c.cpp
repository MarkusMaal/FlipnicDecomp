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

// Function: entry_0010072c
// Address: 0x10072c - 0x100758
void entry_0010072c_0x10072c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010072c_0x10072c");
#endif

    switch (ctx->pc) {
        case 0x100734u: goto label_100734;
        case 0x100744u: goto label_100744;
        default: break;
    }

    ctx->pc = 0x10072cu;

    // 0x10072c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x10072Cu;
    SET_GPR_U32(ctx, 31, 0x100734u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x10072Cu, 0x100734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100734u;
label_100734:
    // 0x100734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10073c: 0xc07fb0e  jal         func_1FEC38
    ctx->pc = 0x10073Cu;
    SET_GPR_U32(ctx, 31, 0x100744u);
    ctx->pc = 0x1FEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC38u, 0x10073Cu, 0x100744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100744u;
label_100744:
    // 0x100744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100748: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100748u;
    {
        const bool branch_taken_0x100748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100748) {
            ctx->pc = 0x100758u;
            return;
        }
    }
    ctx->pc = 0x100750u;
    // 0x100750: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x100750u;
    SET_GPR_U32(ctx, 31, 0x100758u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x100750u, 0x100758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100758u;
}
