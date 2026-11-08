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

// Function: caseD_3
// Address: 0x1918f8 - 0x19192c
void caseD_3_0x1918f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1918f8");
#endif

    ctx->pc = 0x1918f8u;

    // 0x1918f8: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1918F8u;
    {
        const bool branch_taken_0x1918f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1918f8) {
            ctx->pc = 0x191940u;
            return;
        }
    }
    ctx->pc = 0x191900u;
    // 0x191900: 0x8e430660  lw          $v1, 0x660($s2)
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x191904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191908: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x191908u;
    {
        const bool branch_taken_0x191908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x191908) {
            ctx->pc = 0x191938u;
            return;
        }
    }
    ctx->pc = 0x191910u;
    // 0x191910: 0x8e440664  lw          $a0, 0x664($s2)
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x191914: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191918: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x191918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19191c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19191Cu;
    {
        const bool branch_taken_0x19191c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19191c) {
            ctx->pc = 0x19192Cu;
            return;
        }
    }
    ctx->pc = 0x191924u;
    // 0x191924: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x191924u;
    {
        const bool branch_taken_0x191924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191924u;
        // 0x191928: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191924) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x19192Cu;
}
