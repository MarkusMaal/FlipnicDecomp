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

// Function: entry_0015dce4
// Address: 0x15dce4 - 0x15dd1c
void entry_0015dce4_0x15dce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dce4_0x15dce4");
#endif

    ctx->pc = 0x15dce4u;

label_15dce4:
    // 0x15dce4: 0x0  nop
    ctx->pc = 0x15dce4u;
    // NOP
    // 0x15dce8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x15dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x15dcec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dcf0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15dcf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15dcf8: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x15dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x15dcfc: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15dd00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dd04: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15dd08: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15dd0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x15dd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15dd10: 0x130102a  slt         $v0, $t1, $s0
    ctx->pc = 0x15dd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15dd14: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15DD14u;
    {
        const bool branch_taken_0x15dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD14u;
        // 0x15dd18: 0xac642cd8  sw          $a0, 0x2CD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd14) {
            ctx->pc = 0x15DCE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dce4;
        }
    }
    ctx->pc = 0x15DD1Cu;
}
