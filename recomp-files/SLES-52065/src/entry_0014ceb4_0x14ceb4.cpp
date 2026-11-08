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

// Function: entry_0014ceb4
// Address: 0x14ceb4 - 0x14ceb8
void entry_0014ceb4_0x14ceb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ceb4_0x14ceb4");
#endif

    ctx->pc = 0x14ceb4u;

    // 0x14ceb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x14ceb8u;
}
