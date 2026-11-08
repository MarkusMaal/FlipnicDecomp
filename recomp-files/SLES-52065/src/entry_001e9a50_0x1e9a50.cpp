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

// Function: entry_001e9a50
// Address: 0x1e9a50 - 0x1e9a58
void entry_001e9a50_0x1e9a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9a50_0x1e9a50");
#endif

    ctx->pc = 0x1e9a50u;

    // 0x1e9a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a54: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x1e9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
    ctx->pc = 0x1e9a58u;
}
