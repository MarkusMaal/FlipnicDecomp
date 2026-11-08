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

// Function: entry_001a8f3c
// Address: 0x1a8f3c - 0x1a8f54
void entry_001a8f3c_0x1a8f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f3c_0x1a8f3c");
#endif

    ctx->pc = 0x1a8f3cu;

    // 0x1a8f3c: 0x0  nop
    ctx->pc = 0x1a8f3cu;
    // NOP
    // 0x1a8f40: 0x8e8209b0  lw          $v0, 0x9B0($s4)
    ctx->pc = 0x1a8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8f44: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1a8f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8f48: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1A8F48u;
    {
        const bool branch_taken_0x1a8f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F48u;
        // 0x1a8f4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f48) {
            ctx->pc = 0x1A8E74u;
            return;
        }
    }
    ctx->pc = 0x1A8F50u;
    // 0x1a8f50: 0xae8009c8  sw          $zero, 0x9C8($s4)
    ctx->pc = 0x1a8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2504), GPR_U32(ctx, 0));
    ctx->pc = 0x1a8f54u;
}
