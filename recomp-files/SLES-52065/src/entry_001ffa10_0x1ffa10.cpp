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

// Function: entry_001ffa10
// Address: 0x1ffa10 - 0x1ffa1c
void entry_001ffa10_0x1ffa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffa10_0x1ffa10");
#endif

    ctx->pc = 0x1ffa10u;

    // 0x1ffa10: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1ffa14: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1ffa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ffa18: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ffa18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x1ffa1cu;
}
