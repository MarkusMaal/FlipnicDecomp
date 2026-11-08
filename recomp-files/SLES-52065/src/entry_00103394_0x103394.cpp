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

// Function: entry_00103394
// Address: 0x103394 - 0x1033c4
void entry_00103394_0x103394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103394_0x103394");
#endif

    switch (ctx->pc) {
        case 0x1033acu: goto label_1033ac;
        case 0x1033b4u: goto label_1033b4;
        default: break;
    }

    ctx->pc = 0x103394u;

    // 0x103394: 0x0  nop
    ctx->pc = 0x103394u;
    // NOP
    // 0x103398: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x103398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10339c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x10339Cu;
    {
        const bool branch_taken_0x10339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10339c) {
            ctx->pc = 0x103328u;
            return;
        }
    }
    ctx->pc = 0x1033A4u;
    // 0x1033a4: 0xc042884  jal         func_10A210
    ctx->pc = 0x1033A4u;
    SET_GPR_U32(ctx, 31, 0x1033ACu);
    ctx->pc = 0x1033A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033A4u;
    // 0x1033a8: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A210u, 0x1033A4u, 0x1033ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033ACu;
label_1033ac:
    // 0x1033ac: 0xc057640  jal         func_15D900
    ctx->pc = 0x1033ACu;
    SET_GPR_U32(ctx, 31, 0x1033B4u);
    ctx->pc = 0x1033B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033ACu;
    // 0x1033b0: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D900u, 0x1033ACu, 0x1033B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033B4u;
label_1033b4:
    // 0x1033b4: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1033b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1033b8: 0x8c702c20  lw          $s0, 0x2C20($v1)
    ctx->pc = 0x1033b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
    // 0x1033bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1033BCu;
    {
        const bool branch_taken_0x1033bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033BCu;
        // 0x1033c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033bc) {
            ctx->pc = 0x1033D4u;
            return;
        }
    }
    ctx->pc = 0x1033C4u;
}
