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

// Function: entry_001e07a0
// Address: 0x1e07a0 - 0x1e07e8
void entry_001e07a0_0x1e07a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e07a0_0x1e07a0");
#endif

    ctx->pc = 0x1e07a0u;

    // 0x1e07a0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e07a4: 0x2446ab14  addiu       $a2, $v0, -0x54EC
    ctx->pc = 0x1e07a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945556));
    // 0x1e07a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e07ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e07acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB14u));
    // 0x1e07b0: 0x92240068  lbu         $a0, 0x68($s1)
    ctx->pc = 0x1e07b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1e07b4: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E07B4u;
    {
        const bool branch_taken_0x1e07b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07B4u;
        // 0x1e07b8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07b4) {
            ctx->pc = 0x1E07E8u;
            return;
        }
    }
    ctx->pc = 0x1E07BCu;
    // 0x1e07bc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1e07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1e07c0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e07c4: 0x24a3ab10  addiu       $v1, $a1, -0x54F0
    ctx->pc = 0x1e07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e07c8: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e07cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB10u));
    // 0x1e07d0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e07d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e07d4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1e07d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1e07d8: 0xa024a310  sb          $a0, -0x5CF0($at)
    ctx->pc = 0x1e07d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943504), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e07dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e07e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E07E0u;
    {
        const bool branch_taken_0x1e07e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07E0u;
        // 0x1e07e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07e0) {
            ctx->pc = 0x1E07F0u;
            return;
        }
    }
    ctx->pc = 0x1E07E8u;
}
