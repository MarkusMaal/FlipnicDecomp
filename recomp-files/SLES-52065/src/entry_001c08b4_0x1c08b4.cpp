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

// Function: entry_001c08b4
// Address: 0x1c08b4 - 0x1c08d8
void entry_001c08b4_0x1c08b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c08b4_0x1c08b4");
#endif

    ctx->pc = 0x1c08b4u;

    // 0x1c08b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08b8: 0x8022f558  lb          $v0, -0xAA8($at)
    ctx->pc = 0x1c08b8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F558u));
    // 0x1c08bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C08BCu;
    {
        const bool branch_taken_0x1c08bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08BCu;
        // 0x1c08c0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08bc) {
            ctx->pc = 0x1C08D8u;
            return;
        }
    }
    ctx->pc = 0x1C08C4u;
    // 0x1c08c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08c8: 0xac23f550  sw          $v1, -0xAB0($at)
    ctx->pc = 0x1c08c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F550u, _value); } while (0);
    // 0x1c08cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08d4: 0xa022f558  sb          $v0, -0xAA8($at)
    ctx->pc = 0x1c08d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F558u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F558u, _value); } while (0);
    ctx->pc = 0x1c08d8u;
}
