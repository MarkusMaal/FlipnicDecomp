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

// Function: entry_001d5660
// Address: 0x1d5660 - 0x1d5680
void entry_001d5660_0x1d5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5660_0x1d5660");
#endif

    switch (ctx->pc) {
        case 0x1d5670u: goto label_1d5670;
        default: break;
    }

    ctx->pc = 0x1d5660u;

    // 0x1d5660: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d5660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5664: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d5664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5668: 0xc07697e  jal         func_1DA5F8
    ctx->pc = 0x1D5668u;
    SET_GPR_U32(ctx, 31, 0x1D5670u);
    ctx->pc = 0x1D566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5668u;
    // 0x1d566c: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA5F8u, 0x1D5668u, 0x1D5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5670u;
label_1d5670:
    // 0x1d5670: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d5674: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5674u;
    {
        const bool branch_taken_0x1d5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5674u;
        // 0x1d5678: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5674) {
            ctx->pc = 0x1D56ECu;
            return;
        }
    }
    ctx->pc = 0x1D567Cu;
    // 0x1d567c: 0x0  nop
    ctx->pc = 0x1d567cu;
    // NOP
    ctx->pc = 0x1d5680u;
}
