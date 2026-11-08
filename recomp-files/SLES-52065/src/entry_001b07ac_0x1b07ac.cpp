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

// Function: entry_001b07ac
// Address: 0x1b07ac - 0x1b07c8
void entry_001b07ac_0x1b07ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b07ac_0x1b07ac");
#endif

    ctx->pc = 0x1b07acu;

    // 0x1b07ac: 0x0  nop
    ctx->pc = 0x1b07acu;
    // NOP
    // 0x1b07b0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b07b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b07b4: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1B07B4u;
    {
        const bool branch_taken_0x1b07b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07B4u;
        // 0x1b07b8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07b4) {
            ctx->pc = 0x1B063Cu;
            return;
        }
    }
    ctx->pc = 0x1B07BCu;
    // 0x1b07bc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b07bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b07c0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1B07C0u;
    {
        const bool branch_taken_0x1b07c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b07c0) {
            ctx->pc = 0x1B0638u;
            return;
        }
    }
    ctx->pc = 0x1B07C8u;
}
