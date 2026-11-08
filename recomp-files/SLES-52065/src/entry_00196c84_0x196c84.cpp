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

// Function: entry_00196c84
// Address: 0x196c84 - 0x196c94
void entry_00196c84_0x196c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196c84_0x196c84");
#endif

    ctx->pc = 0x196c84u;

    // 0x196c84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196c84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c88: 0x8c630490  lw          $v1, 0x490($v1)
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
    // 0x196c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c90: 0x2468002c  addiu       $t0, $v1, 0x2C
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    ctx->pc = 0x196c94u;
}
