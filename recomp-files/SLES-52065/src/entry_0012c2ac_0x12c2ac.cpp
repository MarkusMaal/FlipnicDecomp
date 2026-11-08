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

// Function: entry_0012c2ac
// Address: 0x12c2ac - 0x12c2b0
void entry_0012c2ac_0x12c2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c2ac_0x12c2ac");
#endif

    ctx->pc = 0x12c2acu;

    // 0x12c2ac: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x12c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x12c2b0u;
}
