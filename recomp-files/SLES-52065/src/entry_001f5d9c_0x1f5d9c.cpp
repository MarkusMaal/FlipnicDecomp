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

// Function: entry_001f5d9c
// Address: 0x1f5d9c - 0x1f5dfc
void entry_001f5d9c_0x1f5d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5d9c_0x1f5d9c");
#endif

    ctx->pc = 0x1f5d9cu;

    // 0x1f5d9c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1f5d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5da0: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1f5da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1f5da4: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1f5da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5da8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f5dac: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1f5db0: 0x244211c0  addiu       $v0, $v0, 0x11C0
    ctx->pc = 0x1f5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x1f5db4: 0x27c410d0  addiu       $a0, $fp, 0x10D0
    ctx->pc = 0x1f5db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4304));
    // 0x1f5db8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5dbc: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1f5dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1f5dc0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f5dc4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1f5dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f5dc8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5dcc: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1f5dccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f5dd0: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1f5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1f5dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dd8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ddc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f5ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1f5de0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5de4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1f5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1f5de8: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1f5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x1f5dec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f5decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5df0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1f5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1f5df4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1f5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1f5df8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1f5dfcu;
}
