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

// Function: entry_001fdf4c
// Address: 0x1fdf4c - 0x1fdf64
void entry_001fdf4c_0x1fdf4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf4c_0x1fdf4c");
#endif

    switch (ctx->pc) {
        case 0x1fdf58u: goto label_1fdf58;
        default: break;
    }

    ctx->pc = 0x1fdf4cu;

    // 0x1fdf4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf50: 0xc07f872  jal         func_1FE1C8
    ctx->pc = 0x1FDF50u;
    SET_GPR_U32(ctx, 31, 0x1FDF58u);
    ctx->pc = 0x1FDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF50u;
    // 0x1fdf54: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x1FDF50u, 0x1FDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF58u;
label_1fdf58:
    // 0x1fdf58: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1FDF58u;
    {
        const bool branch_taken_0x1fdf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF58u;
        // 0x1fdf5c: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf58) {
            ctx->pc = 0x1FE12Cu;
            return;
        }
    }
    ctx->pc = 0x1FDF60u;
    // 0x1fdf60: 0x56982d  daddu       $s3, $v0, $s6
    ctx->pc = 0x1fdf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 22));
    ctx->pc = 0x1fdf64u;
}
