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

// Function: entry_001944d0
// Address: 0x1944d0 - 0x194500
void entry_001944d0_0x1944d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001944d0_0x1944d0");
#endif

    switch (ctx->pc) {
        case 0x1944d8u: goto label_1944d8;
        default: break;
    }

    ctx->pc = 0x1944d0u;

    // 0x1944d0: 0xc0645ac  jal         func_1916B0
    ctx->pc = 0x1944D0u;
    SET_GPR_U32(ctx, 31, 0x1944D8u);
    ctx->pc = 0x1944D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1944D0u;
    // 0x1944d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x1944D0u, 0x1944D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944D8u;
label_1944d8:
    // 0x1944d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1944D8u;
    {
        const bool branch_taken_0x1944d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1944d8) {
            ctx->pc = 0x194548u;
            return;
        }
    }
    ctx->pc = 0x1944E0u;
    // 0x1944e0: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x1944e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x1944e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1944e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944e8: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x1944e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
    // 0x1944ec: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x1944ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x1944f0: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x1944f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
    // 0x1944f4: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x1944f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
    // 0x1944f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1944F8u;
    {
        const bool branch_taken_0x1944f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944F8u;
        // 0x1944fc: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944f8) {
            ctx->pc = 0x194530u;
            return;
        }
    }
    ctx->pc = 0x194500u;
}
