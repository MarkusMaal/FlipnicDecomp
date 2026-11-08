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

// Function: entry_001cf428
// Address: 0x1cf428 - 0x1cf44c
void entry_001cf428_0x1cf428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf428_0x1cf428");
#endif

    ctx->pc = 0x1cf428u;

    // 0x1cf428: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf42c: 0x8022fbd8  lb          $v0, -0x428($at)
    ctx->pc = 0x1cf42cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FBD8u));
    // 0x1cf430: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF430u;
    {
        const bool branch_taken_0x1cf430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF430u;
        // 0x1cf434: 0x3c033fc0  lui         $v1, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf430) {
            ctx->pc = 0x1CF44Cu;
            return;
        }
    }
    ctx->pc = 0x1CF438u;
    // 0x1cf438: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf43c: 0xac23fbd0  sw          $v1, -0x430($at)
    ctx->pc = 0x1cf43cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBD0u, _value); } while (0);
    // 0x1cf440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf444: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf448: 0xa022fbd8  sb          $v0, -0x428($at)
    ctx->pc = 0x1cf448u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FBD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FBD8u, _value); } while (0);
    ctx->pc = 0x1cf44cu;
}
