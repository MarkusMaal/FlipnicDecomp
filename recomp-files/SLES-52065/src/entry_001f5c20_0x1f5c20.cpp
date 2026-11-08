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

// Function: entry_001f5c20
// Address: 0x1f5c20 - 0x1f5c38
void entry_001f5c20_0x1f5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5c20_0x1f5c20");
#endif

    ctx->pc = 0x1f5c20u;

    // 0x1f5c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c24: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5C24u;
    {
        const bool branch_taken_0x1f5c24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C24u;
        // 0x1f5c28: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c24) {
            ctx->pc = 0x1F5C38u;
            return;
        }
    }
    ctx->pc = 0x1F5C2Cu;
    // 0x1f5c2c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f5c30: 0xac40bab0  sw          $zero, -0x4550($v0)
    ctx->pc = 0x1f5c30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BAB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BAB0u, _value); } while (0);
    // 0x1f5c34: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f5c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f5c38u;
}
