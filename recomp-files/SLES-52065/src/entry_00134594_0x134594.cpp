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

// Function: entry_00134594
// Address: 0x134594 - 0x1345c4
void entry_00134594_0x134594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134594_0x134594");
#endif

    switch (ctx->pc) {
        case 0x1345b0u: goto label_1345b0;
        default: break;
    }

    ctx->pc = 0x134594u;

    // 0x134594: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x134594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x134598: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13459c: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x13459cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x1345a0: 0x24a5ee80  addiu       $a1, $a1, -0x1180
    ctx->pc = 0x1345a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962816));
    // 0x1345a4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1345a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1345a8: 0xc080874  jal         func_2021D0
    ctx->pc = 0x1345A8u;
    SET_GPR_U32(ctx, 31, 0x1345B0u);
    ctx->pc = 0x1345ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345A8u;
    // 0x1345ac: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1345A8u, 0x1345B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345B0u;
label_1345b0:
    // 0x1345b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1345B0u;
    {
        const bool branch_taken_0x1345b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345b0) {
            ctx->pc = 0x1345C4u;
            return;
        }
    }
    ctx->pc = 0x1345B8u;
    // 0x1345b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1345bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1345BCu;
    {
        const bool branch_taken_0x1345bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345BCu;
        // 0x1345c0: 0xa2420090  sb          $v0, 0x90($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345bc) {
            ctx->pc = 0x1345C8u;
            return;
        }
    }
    ctx->pc = 0x1345C4u;
}
