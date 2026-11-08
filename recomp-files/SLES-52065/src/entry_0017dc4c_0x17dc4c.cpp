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

// Function: entry_0017dc4c
// Address: 0x17dc4c - 0x17dc58
void entry_0017dc4c_0x17dc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc4c_0x17dc4c");
#endif

    switch (ctx->pc) {
        case 0x17dc54u: goto label_17dc54;
        default: break;
    }

    ctx->pc = 0x17dc4cu;

    // 0x17dc4c: 0xc05fb94  jal         func_17EE50
    ctx->pc = 0x17DC4Cu;
    SET_GPR_U32(ctx, 31, 0x17DC54u);
    ctx->pc = 0x17DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC4Cu;
    // 0x17dc50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17DC4Cu, 0x17DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC54u;
label_17dc54:
    // 0x17dc54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x17dc58u;
}
