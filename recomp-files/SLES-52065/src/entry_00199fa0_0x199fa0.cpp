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

// Function: entry_00199fa0
// Address: 0x199fa0 - 0x199fb8
void entry_00199fa0_0x199fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199fa0_0x199fa0");
#endif

    ctx->pc = 0x199fa0u;

    // 0x199fa0: 0x8c850328  lw          $a1, 0x328($a0)
    ctx->pc = 0x199fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x199fa4: 0x8c880670  lw          $t0, 0x670($a0)
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x199fa8: 0xa8082a  slt         $at, $a1, $t0
    ctx->pc = 0x199fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x199fac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x199FACu;
    {
        const bool branch_taken_0x199fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199fac) {
            ctx->pc = 0x199FB8u;
            return;
        }
    }
    ctx->pc = 0x199FB4u;
    // 0x199fb4: 0x24a503e8  addiu       $a1, $a1, 0x3E8
    ctx->pc = 0x199fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    ctx->pc = 0x199fb8u;
}
