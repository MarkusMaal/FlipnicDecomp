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

// Function: entry_00188858
// Address: 0x188858 - 0x18886c
void entry_00188858_0x188858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188858_0x188858");
#endif

    ctx->pc = 0x188858u;

    // 0x188858: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x188858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x18885c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18885Cu;
    {
        const bool branch_taken_0x18885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18885c) {
            ctx->pc = 0x18886Cu;
            return;
        }
    }
    ctx->pc = 0x188864u;
    // 0x188864: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x188864u;
    {
        const bool branch_taken_0x188864 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x188868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188864u;
        // 0x188868: 0x2503ffd0  addiu       $v1, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188864) {
            ctx->pc = 0x188878u;
            return;
        }
    }
    ctx->pc = 0x18886Cu;
}
