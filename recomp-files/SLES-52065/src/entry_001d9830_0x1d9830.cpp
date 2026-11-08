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

// Function: entry_001d9830
// Address: 0x1d9830 - 0x1d9838
void entry_001d9830_0x1d9830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9830_0x1d9830");
#endif

    ctx->pc = 0x1d9830u;

    // 0x1d9830: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9834: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1d9834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x1d9838u;
}
