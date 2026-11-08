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

// Function: entry_0012fc24
// Address: 0x12fc24 - 0x12fc34
void entry_0012fc24_0x12fc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc24_0x12fc24");
#endif

    ctx->pc = 0x12fc24u;

    // 0x12fc24: 0x0  nop
    ctx->pc = 0x12fc24u;
    // NOP
    // 0x12fc28: 0xe2082b  sltu        $at, $a3, $v0
    ctx->pc = 0x12fc28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fc2c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x12FC2Cu;
    {
        const bool branch_taken_0x12fc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC2Cu;
        // 0x12fc30: 0x123040  sll         $a2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc2c) {
            ctx->pc = 0x12FC7Cu;
            return;
        }
    }
    ctx->pc = 0x12FC34u;
}
