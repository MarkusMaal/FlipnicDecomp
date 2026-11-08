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

// Function: entry_00205f1c
// Address: 0x205f1c - 0x205f34
void entry_00205f1c_0x205f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205f1c_0x205f1c");
#endif

    switch (ctx->pc) {
        case 0x205f24u: goto label_205f24;
        default: break;
    }

    ctx->pc = 0x205f1cu;

    // 0x205f1c: 0xc08180c  jal         func_206030
    ctx->pc = 0x205F1Cu;
    SET_GPR_U32(ctx, 31, 0x205F24u);
    ctx->pc = 0x205F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F1Cu;
    // 0x205f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206030u, 0x205F1Cu, 0x205F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F24u;
label_205f24:
    // 0x205f24: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x205F24u;
    {
        const bool branch_taken_0x205f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F24u;
        // 0x205f28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f24) {
            ctx->pc = 0x205FB8u;
            return;
        }
    }
    ctx->pc = 0x205F2Cu;
    // 0x205f2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x205f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x205f30: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x205f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x205f34u;
}
