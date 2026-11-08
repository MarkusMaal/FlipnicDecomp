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

// Function: entry_001cdf18
// Address: 0x1cdf18 - 0x1cdf44
void entry_001cdf18_0x1cdf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdf18_0x1cdf18");
#endif

    ctx->pc = 0x1cdf18u;

    // 0x1cdf18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf1c: 0x8022fa80  lb          $v0, -0x580($at)
    ctx->pc = 0x1cdf1cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA80u));
    // 0x1cdf20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDF20u;
    {
        const bool branch_taken_0x1cdf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF20u;
        // 0x1cdf24: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf20) {
            ctx->pc = 0x1CDF44u;
            return;
        }
    }
    ctx->pc = 0x1CDF28u;
    // 0x1cdf28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdf2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf30: 0xa022fa80  sb          $v0, -0x580($at)
    ctx->pc = 0x1cdf30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA80u, _value); } while (0);
    // 0x1cdf34: 0x3c03440e  lui         $v1, 0x440E
    ctx->pc = 0x1cdf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17422 << 16));
    // 0x1cdf38: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1cdf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1cdf3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf40: 0xac22fa78  sw          $v0, -0x588($at)
    ctx->pc = 0x1cdf40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA78u, _value); } while (0);
    ctx->pc = 0x1cdf44u;
}
