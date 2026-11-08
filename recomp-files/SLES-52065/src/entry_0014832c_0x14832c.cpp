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

// Function: entry_0014832c
// Address: 0x14832c - 0x148370
void entry_0014832c_0x14832c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014832c_0x14832c");
#endif

    ctx->pc = 0x14832cu;

    // 0x14832c: 0x0  nop
    ctx->pc = 0x14832cu;
    // NOP
    // 0x148330: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148338: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14833c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148340: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x148340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x148344: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x148344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x148348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x148348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14834c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14834Cu;
    {
        const bool branch_taken_0x14834c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x148350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14834Cu;
        // 0x148350: 0x27be0218  addiu       $fp, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14834c) {
            ctx->pc = 0x148390u;
            return;
        }
    }
    ctx->pc = 0x148354u;
    // 0x148354: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x148354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x148358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14835c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14835cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148360: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148360u;
    {
        const bool branch_taken_0x148360 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x148364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148360u;
        // 0x148364: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148360) {
            ctx->pc = 0x148370u;
            return;
        }
    }
    ctx->pc = 0x148368u;
    // 0x148368: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x148368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14836c: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14836cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x148370u;
}
