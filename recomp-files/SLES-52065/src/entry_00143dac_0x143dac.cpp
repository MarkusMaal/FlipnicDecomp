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

// Function: entry_00143dac
// Address: 0x143dac - 0x143dc4
void entry_00143dac_0x143dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143dac_0x143dac");
#endif

    ctx->pc = 0x143dacu;

    // 0x143dac: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143dacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143db0: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x143DB0u;
    {
        const bool branch_taken_0x143db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DB0u;
        // 0x143db4: 0x134140  sll         $t0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143db0) {
            ctx->pc = 0x143EACu;
            return;
        }
    }
    ctx->pc = 0x143DB8u;
    // 0x143db8: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143dbc: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x143DBCu;
    {
        const bool branch_taken_0x143dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DBCu;
        // 0x143dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dbc) {
            ctx->pc = 0x143E2Cu;
            return;
        }
    }
    ctx->pc = 0x143DC4u;
}
