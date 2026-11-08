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

// Function: entry_0010ec20
// Address: 0x10ec20 - 0x10ec38
void entry_0010ec20_0x10ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec20_0x10ec20");
#endif

    ctx->pc = 0x10ec20u;

    // 0x10ec20: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x10ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x10ec24: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10ec24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10ec28: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10EC28u;
    {
        const bool branch_taken_0x10ec28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ec28) {
            ctx->pc = 0x10EBECu;
            return;
        }
    }
    ctx->pc = 0x10EC30u;
    // 0x10ec30: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x10EC30u;
    {
        const bool branch_taken_0x10ec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC30u;
        // 0x10ec34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec30) {
            ctx->pc = 0x10ECDCu;
            return;
        }
    }
    ctx->pc = 0x10EC38u;
}
