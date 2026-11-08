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

// Function: entry_002063c8
// Address: 0x2063c8 - 0x2063e0
void entry_002063c8_0x2063c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002063c8_0x2063c8");
#endif

    ctx->pc = 0x2063c8u;

    // 0x2063c8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2063cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2063ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2063d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2063d4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2063d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2063d8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2063d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2063dc: 0x0  nop
    ctx->pc = 0x2063dcu;
    // NOP
    ctx->pc = 0x2063e0u;
}
