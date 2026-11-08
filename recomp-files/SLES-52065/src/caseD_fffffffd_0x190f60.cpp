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

// Function: caseD_fffffffd
// Address: 0x190f60 - 0x190f98
void caseD_fffffffd_0x190f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffd_0x190f60");
#endif

    ctx->pc = 0x190f60u;

    // 0x190f60: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x190F60u;
    {
        const bool branch_taken_0x190f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F60u;
        // 0x190f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f60) {
            ctx->pc = 0x190F98u;
            return;
        }
    }
    ctx->pc = 0x190F68u;
    // 0x190f68: 0x8e030660  lw          $v1, 0x660($s0)
    ctx->pc = 0x190f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x190f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190f70: 0x146201ca  bne         $v1, $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x190F70u;
    {
        const bool branch_taken_0x190f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190f70) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190F78u;
    // 0x190f78: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x190f7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x190f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x190f80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x190f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190f84: 0x108301c4  beq         $a0, $v1, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x190F84u;
    {
        const bool branch_taken_0x190f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190f84) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190F8Cu;
    // 0x190f8c: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x190F8Cu;
    {
        const bool branch_taken_0x190f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f8c) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190F94u;
    // 0x190f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190f98u;
}
