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

// Function: entry_001c088c
// Address: 0x1c088c - 0x1c08b4
void entry_001c088c_0x1c088c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c088c_0x1c088c");
#endif

    ctx->pc = 0x1c088cu;

    // 0x1c088c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0890: 0x8022f548  lb          $v0, -0xAB8($at)
    ctx->pc = 0x1c0890u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F548u));
    // 0x1c0894: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0894u;
    {
        const bool branch_taken_0x1c0894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0894) {
            ctx->pc = 0x1C08B4u;
            return;
        }
    }
    ctx->pc = 0x1C089Cu;
    // 0x1c089c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c08a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08a4: 0xac23f540  sw          $v1, -0xAC0($at)
    ctx->pc = 0x1c08a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F540u, _value); } while (0);
    // 0x1c08a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08b0: 0xa022f548  sb          $v0, -0xAB8($at)
    ctx->pc = 0x1c08b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F548u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F548u, _value); } while (0);
    ctx->pc = 0x1c08b4u;
}
