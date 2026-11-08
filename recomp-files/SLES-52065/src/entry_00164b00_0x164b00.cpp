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

// Function: entry_00164b00
// Address: 0x164b00 - 0x164b14
void entry_00164b00_0x164b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b00_0x164b00");
#endif

    ctx->pc = 0x164b00u;

    // 0x164b00: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164B00u;
    {
        const bool branch_taken_0x164b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x164B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B00u;
        // 0x164b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b00) {
            ctx->pc = 0x164B14u;
            return;
        }
    }
    ctx->pc = 0x164B08u;
    // 0x164b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164b0c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164B0Cu;
    {
        const bool branch_taken_0x164b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x164b0c) {
            ctx->pc = 0x164B38u;
            return;
        }
    }
    ctx->pc = 0x164B14u;
}
