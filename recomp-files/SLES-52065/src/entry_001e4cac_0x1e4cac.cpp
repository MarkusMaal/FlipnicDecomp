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

// Function: entry_001e4cac
// Address: 0x1e4cac - 0x1e4cb4
void entry_001e4cac_0x1e4cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4cac_0x1e4cac");
#endif

    ctx->pc = 0x1e4cacu;

    // 0x1e4cac: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x1e4cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1e4cb0: 0x601027  not         $v0, $v1
    ctx->pc = 0x1e4cb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    ctx->pc = 0x1e4cb4u;
}
