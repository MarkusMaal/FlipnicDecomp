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

// Function: entry_0010d0b4
// Address: 0x10d0b4 - 0x10d0c4
void entry_0010d0b4_0x10d0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0b4_0x10d0b4");
#endif

    ctx->pc = 0x10d0b4u;

    // 0x10d0b4: 0x0  nop
    ctx->pc = 0x10d0b4u;
    // NOP
    // 0x10d0b8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x10d0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10d0bc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10D0BCu;
    {
        const bool branch_taken_0x10d0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0BCu;
        // 0x10d0c0: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0bc) {
            ctx->pc = 0x10D08Cu;
            return;
        }
    }
    ctx->pc = 0x10D0C4u;
}
