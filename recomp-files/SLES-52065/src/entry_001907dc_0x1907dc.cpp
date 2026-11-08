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

// Function: entry_001907dc
// Address: 0x1907dc - 0x1907fc
void entry_001907dc_0x1907dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907dc_0x1907dc");
#endif

    ctx->pc = 0x1907dcu;

    // 0x1907dc: 0x0  nop
    ctx->pc = 0x1907dcu;
    // NOP
    // 0x1907e0: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1907e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1907e4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1907e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1907e8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1907E8u;
    {
        const bool branch_taken_0x1907e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907e8) {
            ctx->pc = 0x1907CCu;
            return;
        }
    }
    ctx->pc = 0x1907F0u;
    // 0x1907f0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1907f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1907f4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1907f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1907f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1907f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x1907fcu;
}
