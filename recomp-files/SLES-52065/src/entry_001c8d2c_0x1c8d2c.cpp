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

// Function: entry_001c8d2c
// Address: 0x1c8d2c - 0x1c8d48
void entry_001c8d2c_0x1c8d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8d2c_0x1c8d2c");
#endif

    ctx->pc = 0x1c8d2cu;

    // 0x1c8d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8d34: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8d38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8D38u;
    {
        const bool branch_taken_0x1c8d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D38u;
        // 0x1c8d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d38) {
            ctx->pc = 0x1C8D48u;
            return;
        }
    }
    ctx->pc = 0x1C8D40u;
    // 0x1c8d40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d44: 0xac20f8b0  sw          $zero, -0x750($at)
    ctx->pc = 0x1c8d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B0u, _value); } while (0);
    ctx->pc = 0x1c8d48u;
}
