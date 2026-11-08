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

// Function: entry_0019e030
// Address: 0x19e030 - 0x19e050
void entry_0019e030_0x19e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e030_0x19e030");
#endif

    ctx->pc = 0x19e030u;

    // 0x19e030: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x19e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x19e034: 0x8c630674  lw          $v1, 0x674($v1)
    ctx->pc = 0x19e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
    // 0x19e038: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19e038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19e03c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x19E03Cu;
    {
        const bool branch_taken_0x19e03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e03c) {
            ctx->pc = 0x19DFDCu;
            return;
        }
    }
    ctx->pc = 0x19E044u;
    // 0x19e044: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x19e044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x19e048: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19e048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x19e04c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19e04cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x19e050u;
}
