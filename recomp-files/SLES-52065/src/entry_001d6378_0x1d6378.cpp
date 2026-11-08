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

// Function: entry_001d6378
// Address: 0x1d6378 - 0x1d6398
void entry_001d6378_0x1d6378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6378_0x1d6378");
#endif

    switch (ctx->pc) {
        case 0x1d638cu: goto label_1d638c;
        default: break;
    }

    ctx->pc = 0x1d6378u;

    // 0x1d6378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6378u;
    {
        const bool branch_taken_0x1d6378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6378u;
        // 0x1d637c: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6378) {
            ctx->pc = 0x1D6398u;
            return;
        }
    }
    ctx->pc = 0x1D6380u;
    // 0x1d6380: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6384: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6384u;
    SET_GPR_U32(ctx, 31, 0x1D638Cu);
    ctx->pc = 0x1D6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6384u;
    // 0x1d6388: 0x3b22821  addu        $a1, $sp, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6384u, 0x1D638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D638Cu;
label_1d638c:
    // 0x1d638c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D638Cu;
    {
        const bool branch_taken_0x1d638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D638Cu;
        // 0x1d6390: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d638c) {
            ctx->pc = 0x1D63A8u;
            return;
        }
    }
    ctx->pc = 0x1D6394u;
    // 0x1d6394: 0x0  nop
    ctx->pc = 0x1d6394u;
    // NOP
    ctx->pc = 0x1d6398u;
}
