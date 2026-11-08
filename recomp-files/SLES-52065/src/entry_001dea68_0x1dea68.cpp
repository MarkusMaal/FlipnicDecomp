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

// Function: entry_001dea68
// Address: 0x1dea68 - 0x1dea88
void entry_001dea68_0x1dea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dea68_0x1dea68");
#endif

    ctx->pc = 0x1dea68u;

    // 0x1dea68: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1dea68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dea6c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x1dea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dea70: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1dea70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dea74: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x1dea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1dea78: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1dea78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1dea7c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1dea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dea80: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x1dea80u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1dea84: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x1dea84u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    ctx->pc = 0x1dea88u;
}
