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

// Function: entry_001a583c
// Address: 0x1a583c - 0x1a5854
void entry_001a583c_0x1a583c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a583c_0x1a583c");
#endif

    ctx->pc = 0x1a583cu;

    // 0x1a583c: 0x0  nop
    ctx->pc = 0x1a583cu;
    // NOP
    // 0x1a5840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a584c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1a5850: 0x24632b70  addiu       $v1, $v1, 0x2B70
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11120));
    ctx->pc = 0x1a5854u;
}
