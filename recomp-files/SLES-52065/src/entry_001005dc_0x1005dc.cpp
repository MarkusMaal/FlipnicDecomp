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

// Function: entry_001005dc
// Address: 0x1005dc - 0x100608
void entry_001005dc_0x1005dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001005dc_0x1005dc");
#endif

    switch (ctx->pc) {
        case 0x1005e4u: goto label_1005e4;
        case 0x1005f4u: goto label_1005f4;
        default: break;
    }

    ctx->pc = 0x1005dcu;

    // 0x1005dc: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1005DCu;
    SET_GPR_U32(ctx, 31, 0x1005E4u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1005DCu, 0x1005E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005E4u;
label_1005e4:
    // 0x1005e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1005e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1005e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005ec: 0xc07fb0e  jal         func_1FEC38
    ctx->pc = 0x1005ECu;
    SET_GPR_U32(ctx, 31, 0x1005F4u);
    ctx->pc = 0x1FEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC38u, 0x1005ECu, 0x1005F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005F4u;
label_1005f4:
    // 0x1005f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1005f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1005F8u;
    {
        const bool branch_taken_0x1005f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005f8) {
            ctx->pc = 0x100608u;
            return;
        }
    }
    ctx->pc = 0x100600u;
    // 0x100600: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x100600u;
    SET_GPR_U32(ctx, 31, 0x100608u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x100600u, 0x100608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100608u;
}
