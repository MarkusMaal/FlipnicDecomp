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

// Function: entry_001a1ecc
// Address: 0x1a1ecc - 0x1a1ed0
void entry_001a1ecc_0x1a1ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ecc_0x1a1ecc");
#endif

    ctx->pc = 0x1a1eccu;

    // 0x1a1ecc: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1a1eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x1a1ed0u;
}
