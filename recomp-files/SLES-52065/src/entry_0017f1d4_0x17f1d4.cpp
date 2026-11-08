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

// Function: entry_0017f1d4
// Address: 0x17f1d4 - 0x17f1f0
void entry_0017f1d4_0x17f1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f1d4_0x17f1d4");
#endif

    ctx->pc = 0x17f1d4u;

    // 0x17f1d4: 0x0  nop
    ctx->pc = 0x17f1d4u;
    // NOP
    // 0x17f1d8: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x17f1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17f1dc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x17f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17f1e0: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F1E0u;
    {
        const bool branch_taken_0x17f1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x17f1e0) {
            ctx->pc = 0x17F1F0u;
            return;
        }
    }
    ctx->pc = 0x17F1E8u;
    // 0x17f1e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F1E8u;
    {
        const bool branch_taken_0x17f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1e8) {
            ctx->pc = 0x17F214u;
            return;
        }
    }
    ctx->pc = 0x17F1F0u;
}
