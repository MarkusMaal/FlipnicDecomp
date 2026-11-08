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

// Function: entry_001ad1c8
// Address: 0x1ad1c8 - 0x1ad1f4
void entry_001ad1c8_0x1ad1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad1c8_0x1ad1c8");
#endif

    switch (ctx->pc) {
        case 0x1ad1d8u: goto label_1ad1d8;
        default: break;
    }

    ctx->pc = 0x1ad1c8u;

    // 0x1ad1c8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1ad1cc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1ad1d0: 0xc06bd80  jal         func_1AF600
    ctx->pc = 0x1AD1D0u;
    SET_GPR_U32(ctx, 31, 0x1AD1D8u);
    ctx->pc = 0x1AD1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1D0u;
    // 0x1ad1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1AD1D0u, 0x1AD1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1D8u;
label_1ad1d8:
    // 0x1ad1d8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ad1dc: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ad1dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1ad1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD1E0u;
    {
        const bool branch_taken_0x1ad1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad1e0) {
            ctx->pc = 0x1AD1F4u;
            return;
        }
    }
    ctx->pc = 0x1AD1E8u;
    // 0x1ad1e8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1ad1ec: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1ad1f0: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x1ad1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ad1f4u;
}
