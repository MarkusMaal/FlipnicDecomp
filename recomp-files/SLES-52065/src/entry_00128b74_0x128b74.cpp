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

// Function: entry_00128b74
// Address: 0x128b74 - 0x128b7c
void entry_00128b74_0x128b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128b74_0x128b74");
#endif

    ctx->pc = 0x128b74u;

    // 0x128b74: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x128b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x128b78: 0xae8000a0  sw          $zero, 0xA0($s4)
    ctx->pc = 0x128b78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
    ctx->pc = 0x128b7cu;
}
