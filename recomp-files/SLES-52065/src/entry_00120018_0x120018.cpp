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

// Function: entry_00120018
// Address: 0x120018 - 0x120038
void entry_00120018_0x120018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120018_0x120018");
#endif

    ctx->pc = 0x120018u;

    // 0x120018: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120018u;
    {
        const bool branch_taken_0x120018 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x12001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120018u;
        // 0x12001c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120018) {
            ctx->pc = 0x12003Cu;
            return;
        }
    }
    ctx->pc = 0x120020u;
    // 0x120020: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x120020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120024: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120024u;
    {
        const bool branch_taken_0x120024 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120024) {
            ctx->pc = 0x120038u;
            return;
        }
    }
    ctx->pc = 0x12002Cu;
    // 0x12002c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x12002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x120030: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x120030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x120034: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x120034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x120038u;
}
