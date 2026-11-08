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

// Function: entry_00197c84
// Address: 0x197c84 - 0x197c94
void entry_00197c84_0x197c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c84_0x197c84");
#endif

    ctx->pc = 0x197c84u;

    // 0x197c84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x197c84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c88: 0x8cc606c0  lw          $a2, 0x6C0($a2)
    ctx->pc = 0x197c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1728)));
    // 0x197c8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c90: 0x24ca002c  addiu       $t2, $a2, 0x2C
    ctx->pc = 0x197c90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    ctx->pc = 0x197c94u;
}
