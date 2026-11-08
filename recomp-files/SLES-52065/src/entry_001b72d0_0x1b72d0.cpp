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

// Function: entry_001b72d0
// Address: 0x1b72d0 - 0x1b7304
void entry_001b72d0_0x1b72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b72d0_0x1b72d0");
#endif

    switch (ctx->pc) {
        case 0x1b72e8u: goto label_1b72e8;
        default: break;
    }

    ctx->pc = 0x1b72d0u;

    // 0x1b72d0: 0x92640040  lbu         $a0, 0x40($s3)
    ctx->pc = 0x1b72d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1b72d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72d8: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B72D8u;
    {
        const bool branch_taken_0x1b72d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b72d8) {
            ctx->pc = 0x1B73C4u;
            return;
        }
    }
    ctx->pc = 0x1B72E0u;
    // 0x1b72e0: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1B72E0u;
    SET_GPR_U32(ctx, 31, 0x1B72E8u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1B72E0u, 0x1B72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72E8u;
label_1b72e8:
    // 0x1b72e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b72e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b72ec: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B72ECu;
    {
        const bool branch_taken_0x1b72ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72ec) {
            ctx->pc = 0x1B73C4u;
            return;
        }
    }
    ctx->pc = 0x1B72F4u;
    // 0x1b72f4: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x1b72f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1b72f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b72f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b72fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b7304u;
}
