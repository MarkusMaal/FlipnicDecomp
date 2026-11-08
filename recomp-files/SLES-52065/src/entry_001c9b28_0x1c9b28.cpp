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

// Function: entry_001c9b28
// Address: 0x1c9b28 - 0x1c9b4c
void entry_001c9b28_0x1c9b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9b28_0x1c9b28");
#endif

    ctx->pc = 0x1c9b28u;

    // 0x1c9b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b2c: 0x8023f8f8  lb          $v1, -0x708($at)
    ctx->pc = 0x1c9b2cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F8F8u));
    // 0x1c9b30: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B30u;
    {
        const bool branch_taken_0x1c9b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B30u;
        // 0x1c9b34: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b30) {
            ctx->pc = 0x1C9B4Cu;
            return;
        }
    }
    ctx->pc = 0x1C9B38u;
    // 0x1c9b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b3c: 0xac24f8f0  sw          $a0, -0x710($at)
    ctx->pc = 0x1c9b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F8F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8F0u, _value); } while (0);
    // 0x1c9b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b48: 0xa023f8f8  sb          $v1, -0x708($at)
    ctx->pc = 0x1c9b48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F8F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8F8u, _value); } while (0);
    ctx->pc = 0x1c9b4cu;
}
