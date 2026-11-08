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

// Function: entry_001200cc
// Address: 0x1200cc - 0x1200e8
void entry_001200cc_0x1200cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001200cc_0x1200cc");
#endif

    ctx->pc = 0x1200ccu;

    // 0x1200cc: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1200CCu;
    {
        const bool branch_taken_0x1200cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1200D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200CCu;
        // 0x1200d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200cc) {
            ctx->pc = 0x1200E8u;
            return;
        }
    }
    ctx->pc = 0x1200D4u;
    // 0x1200d4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1200D4u;
    {
        const bool branch_taken_0x1200d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1200d4) {
            ctx->pc = 0x1200E8u;
            return;
        }
    }
    ctx->pc = 0x1200DCu;
    // 0x1200dc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1200dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1200e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1200e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1200e4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1200e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x1200e8u;
}
