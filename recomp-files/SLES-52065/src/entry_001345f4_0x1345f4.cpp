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

// Function: entry_001345f4
// Address: 0x1345f4 - 0x134618
void entry_001345f4_0x1345f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001345f4_0x1345f4");
#endif

    switch (ctx->pc) {
        case 0x134604u: goto label_134604;
        default: break;
    }

    ctx->pc = 0x1345f4u;

    // 0x1345f4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1345f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1345f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1345fc: 0xc080874  jal         func_2021D0
    ctx->pc = 0x1345FCu;
    SET_GPR_U32(ctx, 31, 0x134604u);
    ctx->pc = 0x134600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345FCu;
    // 0x134600: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1345FCu, 0x134604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134604u;
label_134604:
    // 0x134604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134604u;
    {
        const bool branch_taken_0x134604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134604) {
            ctx->pc = 0x134618u;
            return;
        }
    }
    ctx->pc = 0x13460Cu;
    // 0x13460c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134610u;
    {
        const bool branch_taken_0x134610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134610u;
        // 0x134614: 0xa2420092  sb          $v0, 0x92($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 146), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134610) {
            ctx->pc = 0x13461Cu;
            return;
        }
    }
    ctx->pc = 0x134618u;
}
