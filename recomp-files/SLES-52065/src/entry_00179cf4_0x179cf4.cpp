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

// Function: entry_00179cf4
// Address: 0x179cf4 - 0x179cf8
void entry_00179cf4_0x179cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179cf4_0x179cf4");
#endif

    ctx->pc = 0x179cf4u;

    // 0x179cf4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x179cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    ctx->pc = 0x179cf8u;
}
