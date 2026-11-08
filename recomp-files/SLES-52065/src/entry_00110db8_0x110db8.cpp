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

// Function: entry_00110db8
// Address: 0x110db8 - 0x110dd8
void entry_00110db8_0x110db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110db8_0x110db8");
#endif

    ctx->pc = 0x110db8u;

    // 0x110db8: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x110db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110dbc: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x110dbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x110dc0: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x110DC0u;
    {
        const bool branch_taken_0x110dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x110dc0) {
            ctx->pc = 0x110D40u;
            return;
        }
    }
    ctx->pc = 0x110DC8u;
    // 0x110dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110dd0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x110DD0u;
    {
        const bool branch_taken_0x110dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DD0u;
        // 0x110dd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dd0) {
            ctx->pc = 0x111008u;
            return;
        }
    }
    ctx->pc = 0x110DD8u;
}
