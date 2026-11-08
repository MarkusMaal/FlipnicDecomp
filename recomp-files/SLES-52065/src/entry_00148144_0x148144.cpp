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

// Function: entry_00148144
// Address: 0x148144 - 0x148188
void entry_00148144_0x148144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148144_0x148144");
#endif

    ctx->pc = 0x148144u;

    // 0x148144: 0x0  nop
    ctx->pc = 0x148144u;
    // NOP
    // 0x148148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14814c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148150: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x148154: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148158: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14815c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14815cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x148160: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148164: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x148164u;
    {
        const bool branch_taken_0x148164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x148168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148164u;
        // 0x148168: 0x27a201b8  addiu       $v0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148164) {
            ctx->pc = 0x1481ACu;
            return;
        }
    }
    ctx->pc = 0x14816Cu;
    // 0x14816c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148174: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x148174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148178: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148178u;
    {
        const bool branch_taken_0x148178 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148178u;
        // 0x14817c: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148178) {
            ctx->pc = 0x148188u;
            return;
        }
    }
    ctx->pc = 0x148180u;
    // 0x148180: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x148180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x148184: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x148184u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x148188u;
}
