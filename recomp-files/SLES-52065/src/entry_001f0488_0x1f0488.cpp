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

// Function: entry_001f0488
// Address: 0x1f0488 - 0x1f04b0
void entry_001f0488_0x1f0488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0488_0x1f0488");
#endif

    ctx->pc = 0x1f0488u;

    // 0x1f0488: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x1f0488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1f048c: 0x8c82a458  lw          $v0, -0x5BA8($a0)
    ctx->pc = 0x1f048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943832)));
    // 0x1f0490: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f0490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f0494: 0x2463ee90  addiu       $v1, $v1, -0x1170
    ctx->pc = 0x1f0494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962832));
    // 0x1f0498: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1f0498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1f049c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1f049cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f04a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f04a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f04a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f04a8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1f04a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f04ac: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x1f04acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1f04b0u;
}
