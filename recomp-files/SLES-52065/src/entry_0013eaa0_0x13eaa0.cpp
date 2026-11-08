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

// Function: entry_0013eaa0
// Address: 0x13eaa0 - 0x13eab8
void entry_0013eaa0_0x13eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eaa0_0x13eaa0");
#endif

    ctx->pc = 0x13eaa0u;

    // 0x13eaa0: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x13eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x13eaa4: 0x8e530118  lw          $s3, 0x118($s2)
    ctx->pc = 0x13eaa4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x13eaa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13eaac: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x13eaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x13eab0: 0x12700009  beq         $s3, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EAB0u;
    {
        const bool branch_taken_0x13eab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x13eab0) {
            ctx->pc = 0x13EAD8u;
            return;
        }
    }
    ctx->pc = 0x13EAB8u;
}
