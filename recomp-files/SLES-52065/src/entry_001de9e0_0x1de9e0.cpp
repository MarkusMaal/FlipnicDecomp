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

// Function: entry_001de9e0
// Address: 0x1de9e0 - 0x1dea08
void entry_001de9e0_0x1de9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de9e0_0x1de9e0");
#endif

    ctx->pc = 0x1de9e0u;

    // 0x1de9e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1de9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de9e4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1de9e8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1de9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1de9ec: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1de9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de9f0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1de9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1de9f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1de9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de9f8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1de9f8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1de9fc: 0x1012  mflo        $v0
    ctx->pc = 0x1de9fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1dea00: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dea00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dea04: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1dea04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1dea08u;
}
