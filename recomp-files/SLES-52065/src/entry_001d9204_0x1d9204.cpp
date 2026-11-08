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

// Function: entry_001d9204
// Address: 0x1d9204 - 0x1d9228
void entry_001d9204_0x1d9204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9204_0x1d9204");
#endif

    switch (ctx->pc) {
        case 0x1d9218u: goto label_1d9218;
        default: break;
    }

    ctx->pc = 0x1d9204u;

    // 0x1d9204: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1d9204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x1d9208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d920c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d920cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9210: 0xc07839a  jal         func_1E0E68
    ctx->pc = 0x1D9210u;
    SET_GPR_U32(ctx, 31, 0x1D9218u);
    ctx->pc = 0x1D9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9210u;
    // 0x1d9214: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E68u, 0x1D9210u, 0x1D9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9218u;
label_1d9218:
    // 0x1d9218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9218u;
    {
        const bool branch_taken_0x1d9218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9218u;
        // 0x1d921c: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9218) {
            ctx->pc = 0x1D9228u;
            return;
        }
    }
    ctx->pc = 0x1D9220u;
    // 0x1d9220: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D9220u;
    {
        const bool branch_taken_0x1d9220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9220u;
        // 0x1d9224: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9220) {
            ctx->pc = 0x1D92ACu;
            return;
        }
    }
    ctx->pc = 0x1D9228u;
}
