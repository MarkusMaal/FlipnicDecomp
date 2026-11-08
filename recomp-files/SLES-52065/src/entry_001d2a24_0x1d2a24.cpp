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

// Function: entry_001d2a24
// Address: 0x1d2a24 - 0x1d2a44
void entry_001d2a24_0x1d2a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a24_0x1d2a24");
#endif

    ctx->pc = 0x1d2a24u;

    // 0x1d2a24: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d2a28: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2A28u;
    {
        const bool branch_taken_0x1d2a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A28u;
        // 0x1d2a2c: 0x30e400ff  andi        $a0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a28) {
            ctx->pc = 0x1D2A44u;
            return;
        }
    }
    ctx->pc = 0x1D2A30u;
    // 0x1d2a30: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2a34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2a3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2a40: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d2a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    ctx->pc = 0x1d2a44u;
}
