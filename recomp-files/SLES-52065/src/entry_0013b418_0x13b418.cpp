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

// Function: entry_0013b418
// Address: 0x13b418 - 0x13b41c
void entry_0013b418_0x13b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b418_0x13b418");
#endif

    ctx->pc = 0x13b418u;

    // 0x13b418: 0x2854821  addu        $t1, $s4, $a1
    ctx->pc = 0x13b418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->pc = 0x13b41cu;
}
