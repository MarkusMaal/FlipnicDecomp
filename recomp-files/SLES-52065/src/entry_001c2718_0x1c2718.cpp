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

// Function: entry_001c2718
// Address: 0x1c2718 - 0x1c2730
void entry_001c2718_0x1c2718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2718_0x1c2718");
#endif

    ctx->pc = 0x1c2718u;

    // 0x1c2718: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1c2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1c271c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C271Cu;
    {
        const bool branch_taken_0x1c271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C271Cu;
        // 0x1c2720: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c271c) {
            ctx->pc = 0x1C2730u;
            return;
        }
    }
    ctx->pc = 0x1C2724u;
    // 0x1c2724: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c2728: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1C2728u;
    {
        const bool branch_taken_0x1c2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2728u;
        // 0x1c272c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2728) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2730u;
}
