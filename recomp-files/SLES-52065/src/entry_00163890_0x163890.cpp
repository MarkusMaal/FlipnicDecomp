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

// Function: entry_00163890
// Address: 0x163890 - 0x1638a4
void entry_00163890_0x163890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163890_0x163890");
#endif

    ctx->pc = 0x163890u;

    // 0x163890: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163890u;
    {
        const bool branch_taken_0x163890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x163894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163890u;
        // 0x163894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163890) {
            ctx->pc = 0x1638A4u;
            return;
        }
    }
    ctx->pc = 0x163898u;
    // 0x163898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16389c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16389Cu;
    {
        const bool branch_taken_0x16389c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16389c) {
            ctx->pc = 0x1638C8u;
            return;
        }
    }
    ctx->pc = 0x1638A4u;
}
