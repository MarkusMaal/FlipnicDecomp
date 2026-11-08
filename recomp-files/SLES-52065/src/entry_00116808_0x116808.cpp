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

// Function: entry_00116808
// Address: 0x116808 - 0x116824
void entry_00116808_0x116808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116808_0x116808");
#endif

    ctx->pc = 0x116808u;

    // 0x116808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11680c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x116810: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x116810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x116814: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x116814u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x116818: 0x2463cce0  addiu       $v1, $v1, -0x3320
    ctx->pc = 0x116818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954208));
    // 0x11681c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x11681cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x116820: 0x27828018  addiu       $v0, $gp, -0x7FE8
    ctx->pc = 0x116820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
    ctx->pc = 0x116824u;
}
