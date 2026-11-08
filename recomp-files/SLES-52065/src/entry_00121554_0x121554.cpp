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

// Function: entry_00121554
// Address: 0x121554 - 0x121564
void entry_00121554_0x121554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121554_0x121554");
#endif

    ctx->pc = 0x121554u;

    // 0x121554: 0x0  nop
    ctx->pc = 0x121554u;
    // NOP
    // 0x121558: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x121558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x12155c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x12155Cu;
    {
        const bool branch_taken_0x12155c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x121560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12155Cu;
        // 0x121560: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12155c) {
            ctx->pc = 0x121534u;
            return;
        }
    }
    ctx->pc = 0x121564u;
}
