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

// Function: entry_001689c4
// Address: 0x1689c4 - 0x1689d8
void entry_001689c4_0x1689c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001689c4_0x1689c4");
#endif

    ctx->pc = 0x1689c4u;

    // 0x1689c4: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x1689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1689c8: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1689C8u;
    {
        const bool branch_taken_0x1689c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1689CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C8u;
        // 0x1689cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689c8) {
            ctx->pc = 0x1689D8u;
            return;
        }
    }
    ctx->pc = 0x1689D0u;
    // 0x1689d0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1689D0u;
    {
        const bool branch_taken_0x1689d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D0u;
        // 0x1689d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689d0) {
            ctx->pc = 0x168AB0u;
            return;
        }
    }
    ctx->pc = 0x1689D8u;
}
