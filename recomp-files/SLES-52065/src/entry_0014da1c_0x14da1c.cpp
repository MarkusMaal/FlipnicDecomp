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

// Function: entry_0014da1c
// Address: 0x14da1c - 0x14da34
void entry_0014da1c_0x14da1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da1c_0x14da1c");
#endif

    ctx->pc = 0x14da1cu;

    // 0x14da1c: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14da1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14da20: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14DA20u;
    {
        const bool branch_taken_0x14da20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA20u;
        // 0x14da24: 0x134900  sll         $t1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da20) {
            ctx->pc = 0x14DAACu;
            return;
        }
    }
    ctx->pc = 0x14DA28u;
    // 0x14da28: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14da28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14da2c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DA2Cu;
    {
        const bool branch_taken_0x14da2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA2Cu;
        // 0x14da30: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da2c) {
            ctx->pc = 0x14DA64u;
            return;
        }
    }
    ctx->pc = 0x14DA34u;
}
