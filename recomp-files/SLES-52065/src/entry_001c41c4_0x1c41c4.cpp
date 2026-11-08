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

// Function: entry_001c41c4
// Address: 0x1c41c4 - 0x1c41dc
void entry_001c41c4_0x1c41c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c41c4_0x1c41c4");
#endif

    ctx->pc = 0x1c41c4u;

    // 0x1c41c4: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c41c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c41c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c41cc: 0x1462008e  bne         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1C41CCu;
    {
        const bool branch_taken_0x1c41cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41CCu;
        // 0x1c41d0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41cc) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C41D4u;
    // 0x1c41d4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1C41D4u;
    {
        const bool branch_taken_0x1c41d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41D4u;
        // 0x1c41d8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41d4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C41DCu;
}
