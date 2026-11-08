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

// Function: entry_001ee860
// Address: 0x1ee860 - 0x1ee878
void entry_001ee860_0x1ee860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee860_0x1ee860");
#endif

    ctx->pc = 0x1ee860u;

    // 0x1ee860: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EE860u;
    {
        const bool branch_taken_0x1ee860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee860) {
            ctx->pc = 0x1EE864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE860u;
            // 0x1ee864: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE8B4u;
            return;
        }
    }
    ctx->pc = 0x1EE868u;
    // 0x1ee868: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE868u;
    {
        const bool branch_taken_0x1ee868 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE868u;
        // 0x1ee86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee868) {
            ctx->pc = 0x1EE878u;
            return;
        }
    }
    ctx->pc = 0x1EE870u;
    // 0x1ee870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE870u;
    {
        const bool branch_taken_0x1ee870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE870u;
        // 0x1ee874: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee870) {
            ctx->pc = 0x1EE87Cu;
            return;
        }
    }
    ctx->pc = 0x1EE878u;
}
