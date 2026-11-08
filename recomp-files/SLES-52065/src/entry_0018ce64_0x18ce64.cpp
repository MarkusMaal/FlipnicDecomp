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

// Function: entry_0018ce64
// Address: 0x18ce64 - 0x18ce6c
void entry_0018ce64_0x18ce64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce64_0x18ce64");
#endif

    ctx->pc = 0x18ce64u;

    // 0x18ce64: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x18ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x18ce68: 0xae000464  sw          $zero, 0x464($s0)
    ctx->pc = 0x18ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 0));
    ctx->pc = 0x18ce6cu;
}
