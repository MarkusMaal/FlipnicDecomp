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

// Function: entry_00205314
// Address: 0x205314 - 0x205334
void entry_00205314_0x205314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205314_0x205314");
#endif

    ctx->pc = 0x205314u;

    // 0x205314: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x205314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205318: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x205318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20531c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x20531cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205320: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x205320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x205324: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x205324u;
    {
        const bool branch_taken_0x205324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205324) {
            ctx->pc = 0x205328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205324u;
            // 0x205328: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052E0u;
            return;
        }
    }
    ctx->pc = 0x20532Cu;
    // 0x20532c: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x20532Cu;
    {
        const bool branch_taken_0x20532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20532Cu;
        // 0x205330: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20532c) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x205334u;
}
