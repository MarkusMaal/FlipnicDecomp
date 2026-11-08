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

// Function: entry_00143c24
// Address: 0x143c24 - 0x143c34
void entry_00143c24_0x143c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c24_0x143c24");
#endif

    ctx->pc = 0x143c24u;

    // 0x143c24: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C24u;
    {
        const bool branch_taken_0x143c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c24) {
            ctx->pc = 0x143C34u;
            return;
        }
    }
    ctx->pc = 0x143C2Cu;
    // 0x143c2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143C2Cu;
    SET_GPR_U32(ctx, 31, 0x143C34u);
    ctx->pc = 0x143C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C2Cu;
    // 0x143c30: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143C2Cu, 0x143C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C34u;
}
