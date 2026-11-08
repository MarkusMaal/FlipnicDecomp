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

// Function: entry_001972e0
// Address: 0x1972e0 - 0x197300
void entry_001972e0_0x1972e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001972e0_0x1972e0");
#endif

    ctx->pc = 0x1972e0u;

    // 0x1972e0: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x1972e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1972e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1972e8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1972E8u;
    {
        const bool branch_taken_0x1972e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972E8u;
        // 0x1972ec: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972e8) {
            ctx->pc = 0x197284u;
            return;
        }
    }
    ctx->pc = 0x1972F0u;
    // 0x1972f0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1972f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1972f4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1972f8: 0xaea20680  sw          $v0, 0x680($s5)
    ctx->pc = 0x1972f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 2));
    // 0x1972fc: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x1972fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
    ctx->pc = 0x197300u;
}
