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

// Function: entry_001a9f68
// Address: 0x1a9f68 - 0x1a9f6c
void entry_001a9f68_0x1a9f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9f68_0x1a9f68");
#endif

    ctx->pc = 0x1a9f68u;

    // 0x1a9f68: 0xaea00948  sw          $zero, 0x948($s5)
    ctx->pc = 0x1a9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 0));
    ctx->pc = 0x1a9f6cu;
}
