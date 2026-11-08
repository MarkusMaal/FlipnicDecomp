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

// Function: entry_0019ee9c
// Address: 0x19ee9c - 0x19eeb4
void entry_0019ee9c_0x19ee9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee9c_0x19ee9c");
#endif

    ctx->pc = 0x19ee9cu;

    // 0x19ee9c: 0x84e32828  lh          $v1, 0x2828($a3)
    ctx->pc = 0x19ee9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10280)));
    // 0x19eea0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19eea4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19EEA4u;
    {
        const bool branch_taken_0x19eea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19eea4) {
            ctx->pc = 0x19EEC4u;
            return;
        }
    }
    ctx->pc = 0x19EEACu;
    // 0x19eeac: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x19eeb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x19eeb4u;
}
