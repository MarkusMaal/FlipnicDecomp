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

// Function: entry_0016d020
// Address: 0x16d020 - 0x16d028
void entry_0016d020_0x16d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d020_0x16d020");
#endif

    ctx->pc = 0x16d020u;

    // 0x16d020: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x16d020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x16d024: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x16d024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    ctx->pc = 0x16d028u;
}
