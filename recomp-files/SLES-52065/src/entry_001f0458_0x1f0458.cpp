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

// Function: entry_001f0458
// Address: 0x1f0458 - 0x1f0488
void entry_001f0458_0x1f0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0458_0x1f0458");
#endif

    ctx->pc = 0x1f0458u;

    // 0x1f0458: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f0458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f045c: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x1f045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1f0460: 0x8c82a458  lw          $v0, -0x5BA8($a0)
    ctx->pc = 0x1f0460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A458u));
    // 0x1f0464: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f0464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f0468: 0x2463ee90  addiu       $v1, $v1, -0x1170
    ctx->pc = 0x1f0468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962832));
    // 0x1f046c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1f046cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1f0470: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1f0470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0478: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f0478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f047c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0480: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F0480u;
    {
        const bool branch_taken_0x1f0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0480u;
        // 0x1f0484: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0480) {
            ctx->pc = 0x1F04B0u;
            return;
        }
    }
    ctx->pc = 0x1F0488u;
}
