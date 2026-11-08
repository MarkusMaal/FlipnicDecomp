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

// Function: entry_0020a4a0
// Address: 0x20a4a0 - 0x20a4a4
void entry_0020a4a0_0x20a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a4a0_0x20a4a0");
#endif

    ctx->pc = 0x20a4a0u;

    // 0x20a4a0: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x20a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    ctx->pc = 0x20a4a4u;
}
