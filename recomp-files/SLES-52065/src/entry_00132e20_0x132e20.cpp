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

// Function: entry_00132e20
// Address: 0x132e20 - 0x132e28
void entry_00132e20_0x132e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132e20_0x132e20");
#endif

    ctx->pc = 0x132e20u;

    // 0x132e20: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x132e20u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x132e24: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x132e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    ctx->pc = 0x132e28u;
}
