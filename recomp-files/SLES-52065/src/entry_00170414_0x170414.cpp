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

// Function: entry_00170414
// Address: 0x170414 - 0x170424
void entry_00170414_0x170414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170414_0x170414");
#endif

    ctx->pc = 0x170414u;

    // 0x170414: 0x0  nop
    ctx->pc = 0x170414u;
    // NOP
    // 0x170418: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x170418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17041c: 0x1460ff28  bnez        $v1, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x17041Cu;
    {
        const bool branch_taken_0x17041c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17041Cu;
        // 0x170420: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17041c) {
            ctx->pc = 0x1700C0u;
            return;
        }
    }
    ctx->pc = 0x170424u;
}
