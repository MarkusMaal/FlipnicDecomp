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

// Function: entry_001904dc
// Address: 0x1904dc - 0x1904fc
void entry_001904dc_0x1904dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904dc_0x1904dc");
#endif

    ctx->pc = 0x1904dcu;

    // 0x1904dc: 0x0  nop
    ctx->pc = 0x1904dcu;
    // NOP
    // 0x1904e0: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1904e4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1904e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1904e8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1904E8u;
    {
        const bool branch_taken_0x1904e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1904e8) {
            ctx->pc = 0x1904CCu;
            return;
        }
    }
    ctx->pc = 0x1904F0u;
    // 0x1904f0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1904f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1904f4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1904f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1904f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1904f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1904fcu;
}
