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

// Function: entry_00128ffc
// Address: 0x128ffc - 0x12901c
void entry_00128ffc_0x128ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128ffc_0x128ffc");
#endif

    ctx->pc = 0x128ffcu;

    // 0x128ffc: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x128ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x129000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x129000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129004: 0x108300ad  beq         $a0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x129004u;
    {
        const bool branch_taken_0x129004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x129008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129004u;
        // 0x129008: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129004) {
            ctx->pc = 0x1292BCu;
            return;
        }
    }
    ctx->pc = 0x12900Cu;
    // 0x12900c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12900Cu;
    {
        const bool branch_taken_0x12900c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12900c) {
            ctx->pc = 0x12901Cu;
            return;
        }
    }
    ctx->pc = 0x129014u;
    // 0x129014: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x129014u;
    {
        const bool branch_taken_0x129014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129014u;
        // 0x129018: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129014) {
            ctx->pc = 0x12940Cu;
            return;
        }
    }
    ctx->pc = 0x12901Cu;
}
