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

// Function: entry_00120060
// Address: 0x120060 - 0x120080
void entry_00120060_0x120060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120060_0x120060");
#endif

    ctx->pc = 0x120060u;

    // 0x120060: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120060u;
    {
        const bool branch_taken_0x120060 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x120064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120060u;
        // 0x120064: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120060) {
            ctx->pc = 0x120084u;
            return;
        }
    }
    ctx->pc = 0x120068u;
    // 0x120068: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x120068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12006c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12006Cu;
    {
        const bool branch_taken_0x12006c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x12006c) {
            ctx->pc = 0x120080u;
            return;
        }
    }
    ctx->pc = 0x120074u;
    // 0x120074: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x120078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12007c: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x12007cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x120080u;
}
