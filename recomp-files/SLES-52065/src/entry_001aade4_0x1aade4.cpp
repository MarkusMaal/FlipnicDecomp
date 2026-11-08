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

// Function: entry_001aade4
// Address: 0x1aade4 - 0x1aae10
void entry_001aade4_0x1aade4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aade4_0x1aade4");
#endif

    switch (ctx->pc) {
        case 0x1aadf4u: goto label_1aadf4;
        default: break;
    }

    ctx->pc = 0x1aade4u;

    // 0x1aade4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1aade8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1aade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1aadec: 0xc06bd80  jal         func_1AF600
    ctx->pc = 0x1AADECu;
    SET_GPR_U32(ctx, 31, 0x1AADF4u);
    ctx->pc = 0x1AADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADECu;
    // 0x1aadf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1AADECu, 0x1AADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADF4u;
label_1aadf4:
    // 0x1aadf4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1aadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1aadf8: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1aadf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1aadfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AADFCu;
    {
        const bool branch_taken_0x1aadfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aadfc) {
            ctx->pc = 0x1AAE10u;
            return;
        }
    }
    ctx->pc = 0x1AAE04u;
    // 0x1aae04: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1aae08: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1aae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1aae0c: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x1aae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1aae10u;
}
