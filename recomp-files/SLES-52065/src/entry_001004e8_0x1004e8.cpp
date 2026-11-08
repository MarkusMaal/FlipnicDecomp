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

// Function: entry_001004e8
// Address: 0x1004e8 - 0x100518
void entry_001004e8_0x1004e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001004e8_0x1004e8");
#endif

    switch (ctx->pc) {
        case 0x1004f0u: goto label_1004f0;
        case 0x100504u: goto label_100504;
        default: break;
    }

    ctx->pc = 0x1004e8u;

    // 0x1004e8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1004E8u;
    SET_GPR_U32(ctx, 31, 0x1004F0u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1004E8u, 0x1004F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004F0u;
label_1004f0:
    // 0x1004f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1004f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1004f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1004f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004fc: 0xc07fa8e  jal         func_1FEA38
    ctx->pc = 0x1004FCu;
    SET_GPR_U32(ctx, 31, 0x100504u);
    ctx->pc = 0x1FEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA38u, 0x1004FCu, 0x100504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100504u;
label_100504:
    // 0x100504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100508: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100508u;
    {
        const bool branch_taken_0x100508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100508) {
            ctx->pc = 0x100518u;
            return;
        }
    }
    ctx->pc = 0x100510u;
    // 0x100510: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x100510u;
    SET_GPR_U32(ctx, 31, 0x100518u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x100510u, 0x100518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100518u;
}
