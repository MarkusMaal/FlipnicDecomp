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

// Function: entry_00170fb0
// Address: 0x170fb0 - 0x170fd0
void entry_00170fb0_0x170fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170fb0_0x170fb0");
#endif

    switch (ctx->pc) {
        case 0x170fb8u: goto label_170fb8;
        default: break;
    }

    ctx->pc = 0x170fb0u;

    // 0x170fb0: 0xc05c274  jal         func_1709D0
    ctx->pc = 0x170FB0u;
    SET_GPR_U32(ctx, 31, 0x170FB8u);
    ctx->pc = 0x1709D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1709D0u, 0x170FB0u, 0x170FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FB8u;
label_170fb8:
    // 0x170fb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170FB8u;
    {
        const bool branch_taken_0x170fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170fb8) {
            ctx->pc = 0x170FD0u;
            return;
        }
    }
    ctx->pc = 0x170FC0u;
    // 0x170fc0: 0x92030264  lbu         $v1, 0x264($s0)
    ctx->pc = 0x170fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x170fc4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x170FC4u;
    {
        const bool branch_taken_0x170fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FC4u;
        // 0x170fc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fc4) {
            ctx->pc = 0x170FD0u;
            return;
        }
    }
    ctx->pc = 0x170FCCu;
    // 0x170fcc: 0xa2030265  sb          $v1, 0x265($s0)
    ctx->pc = 0x170fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 613), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x170fd0u;
}
