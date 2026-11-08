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

// Function: entry_001f0ccc
// Address: 0x1f0ccc - 0x1f0cdc
void entry_001f0ccc_0x1f0ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0ccc_0x1f0ccc");
#endif

    ctx->pc = 0x1f0cccu;

    // 0x1f0ccc: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0CCCu;
    {
        const bool branch_taken_0x1f0ccc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ccc) {
            ctx->pc = 0x1F0CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0CCCu;
            // 0x1f0cd0: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CDCu;
            return;
        }
    }
    ctx->pc = 0x1F0CD4u;
    // 0x1f0cd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0CD4u;
    {
        const bool branch_taken_0x1f0cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CD4u;
        // 0x1f0cd8: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cd4) {
            ctx->pc = 0x1F0D28u;
            return;
        }
    }
    ctx->pc = 0x1F0CDCu;
}
