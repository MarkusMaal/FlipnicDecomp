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

// Function: entry_001f0388
// Address: 0x1f0388 - 0x1f039c
void entry_001f0388_0x1f0388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0388_0x1f0388");
#endif

    ctx->pc = 0x1f0388u;

    // 0x1f0388: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0388u;
    {
        const bool branch_taken_0x1f0388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0388) {
            ctx->pc = 0x1F039Cu;
            return;
        }
    }
    ctx->pc = 0x1F0390u;
    // 0x1f0390: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f0394: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0394u;
    {
        const bool branch_taken_0x1f0394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0394) {
            ctx->pc = 0x1F0398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0394u;
            // 0x1f0398: 0xae600414  sw          $zero, 0x414($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F03ACu;
            return;
        }
    }
    ctx->pc = 0x1F039Cu;
}
