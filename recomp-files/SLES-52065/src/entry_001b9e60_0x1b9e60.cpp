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

// Function: entry_001b9e60
// Address: 0x1b9e60 - 0x1b9e84
void entry_001b9e60_0x1b9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9e60_0x1b9e60");
#endif

    ctx->pc = 0x1b9e60u;

    // 0x1b9e60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9e64: 0x8022f490  lb          $v0, -0xB70($at)
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F490u));
    // 0x1b9e68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9E68u;
    {
        const bool branch_taken_0x1b9e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E68u;
        // 0x1b9e6c: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e68) {
            ctx->pc = 0x1B9E84u;
            return;
        }
    }
    ctx->pc = 0x1B9E70u;
    // 0x1b9e70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9e74: 0xfc23f4a8  sd          $v1, -0xB58($at)
    ctx->pc = 0x1b9e74u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F4A8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x36F4A8u, _value); } while (0);
    // 0x1b9e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9e7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9e80: 0xa022f490  sb          $v0, -0xB70($at)
    ctx->pc = 0x1b9e80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F490u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F490u, _value); } while (0);
    ctx->pc = 0x1b9e84u;
}
