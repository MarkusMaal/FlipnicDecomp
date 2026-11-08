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

// Function: entry_0012f974
// Address: 0x12f974 - 0x12f988
void entry_0012f974_0x12f974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f974_0x12f974");
#endif

    ctx->pc = 0x12f974u;

    // 0x12f974: 0x0  nop
    ctx->pc = 0x12f974u;
    // NOP
    // 0x12f978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f97c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12f97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12f980: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12F980u;
    {
        const bool branch_taken_0x12f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F980u;
        // 0x12f984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f980) {
            ctx->pc = 0x12F95Cu;
            return;
        }
    }
    ctx->pc = 0x12F988u;
}
