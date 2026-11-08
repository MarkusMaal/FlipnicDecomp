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

// Function: entry_001e8880
// Address: 0x1e8880 - 0x1e8894
void entry_001e8880_0x1e8880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8880_0x1e8880");
#endif

    ctx->pc = 0x1e8880u;

    // 0x1e8880: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e8884: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1e8884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8888: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1e8888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e888c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8890: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1e8894u;
}
