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

// Function: entry_0010d960
// Address: 0x10d960 - 0x10d984
void entry_0010d960_0x10d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d960_0x10d960");
#endif

    ctx->pc = 0x10d960u;

    // 0x10d960: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10d960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10d964: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x10d964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10d968: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x10D968u;
    {
        const bool branch_taken_0x10d968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D968u;
        // 0x10d96c: 0x26730410  addiu       $s3, $s3, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d968) {
            ctx->pc = 0x10D8B0u;
            return;
        }
    }
    ctx->pc = 0x10D970u;
    // 0x10d970: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x10d970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x10d974: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D974u;
    {
        const bool branch_taken_0x10d974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D974u;
        // 0x10d978: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d974) {
            ctx->pc = 0x10D984u;
            return;
        }
    }
    ctx->pc = 0x10D97Cu;
    // 0x10d97c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10d97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10d980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10d984u;
}
