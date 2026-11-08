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

// Function: entry_0016db64
// Address: 0x16db64 - 0x16db98
void entry_0016db64_0x16db64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db64_0x16db64");
#endif

    ctx->pc = 0x16db64u;

    // 0x16db64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16db64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16db68: 0xa22528fc  sb          $a1, 0x28FC($s1)
    ctx->pc = 0x16db68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10492), (uint8_t)GPR_U32(ctx, 5));
    // 0x16db6c: 0x8e2428e0  lw          $a0, 0x28E0($s1)
    ctx->pc = 0x16db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10464)));
    // 0x16db70: 0x8e232848  lw          $v1, 0x2848($s1)
    ctx->pc = 0x16db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10312)));
    // 0x16db74: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x16db74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16db78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16db7c: 0xae232848  sw          $v1, 0x2848($s1)
    ctx->pc = 0x16db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10312), GPR_U32(ctx, 3));
    // 0x16db80: 0xa22528fd  sb          $a1, 0x28FD($s1)
    ctx->pc = 0x16db80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10493), (uint8_t)GPR_U32(ctx, 5));
    // 0x16db84: 0x8e2428e0  lw          $a0, 0x28E0($s1)
    ctx->pc = 0x16db84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10464)));
    // 0x16db88: 0x8e23284c  lw          $v1, 0x284C($s1)
    ctx->pc = 0x16db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10316)));
    // 0x16db8c: 0x72042018  mult1       $a0, $s0, $a0
    ctx->pc = 0x16db8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16db90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16db94: 0xae23284c  sw          $v1, 0x284C($s1)
    ctx->pc = 0x16db94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10316), GPR_U32(ctx, 3));
    ctx->pc = 0x16db98u;
}
