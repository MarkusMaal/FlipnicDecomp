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

// Function: entry_0016ca04
// Address: 0x16ca04 - 0x16ca30
void entry_0016ca04_0x16ca04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ca04_0x16ca04");
#endif

    ctx->pc = 0x16ca04u;

    // 0x16ca04: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16ca08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ca0c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16CA0Cu;
    {
        const bool branch_taken_0x16ca0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA0Cu;
        // 0x16ca10: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca0c) {
            ctx->pc = 0x16CA30u;
            return;
        }
    }
    ctx->pc = 0x16CA14u;
    // 0x16ca14: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16CA14u;
    {
        const bool branch_taken_0x16ca14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca14) {
            ctx->pc = 0x16CA30u;
            return;
        }
    }
    ctx->pc = 0x16CA1Cu;
    // 0x16ca1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ca20: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CA20u;
    {
        const bool branch_taken_0x16ca20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA20u;
        // 0x16ca24: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca20) {
            ctx->pc = 0x16CA30u;
            return;
        }
    }
    ctx->pc = 0x16CA28u;
    // 0x16ca28: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x16CA28u;
    {
        const bool branch_taken_0x16ca28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ca28) {
            ctx->pc = 0x16CB24u;
            return;
        }
    }
    ctx->pc = 0x16CA30u;
}
