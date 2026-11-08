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

// Function: entry_001b0eac
// Address: 0x1b0eac - 0x1b0eb0
void entry_001b0eac_0x1b0eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0eac_0x1b0eac");
#endif

    ctx->pc = 0x1b0eacu;

    // 0x1b0eac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b0eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1b0eb0u;
}
