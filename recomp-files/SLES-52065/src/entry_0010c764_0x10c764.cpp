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

// Function: entry_0010c764
// Address: 0x10c764 - 0x10c768
void entry_0010c764_0x10c764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c764_0x10c764");
#endif

    ctx->pc = 0x10c764u;

    // 0x10c764: 0x8624024e  lh          $a0, 0x24E($s1)
    ctx->pc = 0x10c764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 590)));
    ctx->pc = 0x10c768u;
}
