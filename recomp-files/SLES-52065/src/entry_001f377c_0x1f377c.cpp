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

// Function: entry_001f377c
// Address: 0x1f377c - 0x1f3798
void entry_001f377c_0x1f377c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f377c_0x1f377c");
#endif

    ctx->pc = 0x1f377cu;

    // 0x1f377c: 0x24e3fb80  addiu       $v1, $a3, -0x480
    ctx->pc = 0x1f377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966144));
    // 0x1f3780: 0xacf2fb80  sw          $s2, -0x480($a3)
    ctx->pc = 0x1f3780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294966144), GPR_U32(ctx, 18));
    // 0x1f3784: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3784u;
    {
        const bool branch_taken_0x1f3784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3784u;
        // 0x1f3788: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3784) {
            ctx->pc = 0x1F3798u;
            return;
        }
    }
    ctx->pc = 0x1F378Cu;
    // 0x1f378c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f378cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3790: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F3790u;
    {
        const bool branch_taken_0x1f3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3790u;
        // 0x1f3794: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3790) {
            ctx->pc = 0x1F37C8u;
            return;
        }
    }
    ctx->pc = 0x1F3798u;
}
