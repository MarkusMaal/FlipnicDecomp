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

// Function: entry_0013a5c8
// Address: 0x13a5c8 - 0x13a604
void entry_0013a5c8_0x13a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a5c8_0x13a5c8");
#endif

    ctx->pc = 0x13a5c8u;

    // 0x13a5c8: 0x8cc70068  lw          $a3, 0x68($a2)
    ctx->pc = 0x13a5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x13a5cc: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x13a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13a5d0: 0x8ccb0028  lw          $t3, 0x28($a2)
    ctx->pc = 0x13a5d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x13a5d4: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x13a5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13a5d8: 0x8ca500a0  lw          $a1, 0xA0($a1)
    ctx->pc = 0x13a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x13a5dc: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x13a5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13a5e0: 0x1684018  mult        $t0, $t3, $t0
    ctx->pc = 0x13a5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x13a5e4: 0x71673818  mult1       $a3, $t3, $a3
    ctx->pc = 0x13a5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x13a5e8: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x13a5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x13a5ec: 0xa7c821  addu        $t9, $a1, $a3
    ctx->pc = 0x13a5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13a5f0: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x13a5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x13a5f4: 0x168d0003  bne         $s4, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A5F4u;
    {
        const bool branch_taken_0x13a5f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 13));
        ctx->pc = 0x13A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5F4u;
        // 0x13a5f8: 0xa7c021  addu        $t8, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5f4) {
            ctx->pc = 0x13A604u;
            return;
        }
    }
    ctx->pc = 0x13A5FCu;
    // 0x13a5fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A5FCu;
    {
        const bool branch_taken_0x13a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5FCu;
        // 0x13a600: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5fc) {
            ctx->pc = 0x13A608u;
            return;
        }
    }
    ctx->pc = 0x13A604u;
}
