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

// Function: entry_0019f650
// Address: 0x19f650 - 0x19f66c
void entry_0019f650_0x19f650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f650_0x19f650");
#endif

    switch (ctx->pc) {
        case 0x19f664u: goto label_19f664;
        default: break;
    }

    ctx->pc = 0x19f650u;

    // 0x19f650: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x19f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x19f654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f65c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F65Cu;
    SET_GPR_U32(ctx, 31, 0x19F664u);
    ctx->pc = 0x19F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F65Cu;
    // 0x19f660: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F65Cu, 0x19F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F664u;
label_19f664:
    // 0x19f664: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x19F664u;
    {
        const bool branch_taken_0x19f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f664) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F66Cu;
}
