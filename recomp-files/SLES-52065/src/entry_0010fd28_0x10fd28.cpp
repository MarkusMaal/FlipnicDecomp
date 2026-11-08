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

// Function: entry_0010fd28
// Address: 0x10fd28 - 0x10fd38
void entry_0010fd28_0x10fd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd28_0x10fd28");
#endif

    switch (ctx->pc) {
        case 0x10fd30u: goto label_10fd30;
        default: break;
    }

    ctx->pc = 0x10fd28u;

    // 0x10fd28: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10FD28u;
    SET_GPR_U32(ctx, 31, 0x10FD30u);
    ctx->pc = 0x10FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD28u;
    // 0x10fd2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10FD28u, 0x10FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD30u;
label_10fd30:
    // 0x10fd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fd34: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x10fd34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10fd38u;
}
