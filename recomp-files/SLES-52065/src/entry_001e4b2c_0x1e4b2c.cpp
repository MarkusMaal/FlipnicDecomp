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

// Function: entry_001e4b2c
// Address: 0x1e4b2c - 0x1e4b34
void entry_001e4b2c_0x1e4b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4b2c_0x1e4b2c");
#endif

    ctx->pc = 0x1e4b2cu;

    // 0x1e4b2c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x1e4b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1e4b30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e4b34u;
}
