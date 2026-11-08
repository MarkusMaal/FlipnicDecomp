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

// Function: entry_0012003c
// Address: 0x12003c - 0x12005c
void entry_0012003c_0x12003c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012003c_0x12003c");
#endif

    ctx->pc = 0x12003cu;

    // 0x12003c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12003Cu;
    {
        const bool branch_taken_0x12003c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x120040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12003Cu;
        // 0x120040: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12003c) {
            ctx->pc = 0x120060u;
            return;
        }
    }
    ctx->pc = 0x120044u;
    // 0x120044: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x120044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x120048: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120048u;
    {
        const bool branch_taken_0x120048 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120048) {
            ctx->pc = 0x12005Cu;
            return;
        }
    }
    ctx->pc = 0x120050u;
    // 0x120050: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x120054: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x120054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x120058: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x120058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x12005cu;
}
