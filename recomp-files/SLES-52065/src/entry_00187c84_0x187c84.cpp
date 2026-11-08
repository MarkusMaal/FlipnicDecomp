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

// Function: entry_00187c84
// Address: 0x187c84 - 0x187c90
void entry_00187c84_0x187c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c84_0x187c84");
#endif

    ctx->pc = 0x187c84u;

    // 0x187c84: 0x0  nop
    ctx->pc = 0x187c84u;
    // NOP
    // 0x187c88: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x187c88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x187c8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x187c90u;
}
