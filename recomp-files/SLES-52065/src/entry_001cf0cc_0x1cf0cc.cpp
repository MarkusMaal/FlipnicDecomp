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

// Function: entry_001cf0cc
// Address: 0x1cf0cc - 0x1cf0f4
void entry_001cf0cc_0x1cf0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf0cc_0x1cf0cc");
#endif

    ctx->pc = 0x1cf0ccu;

    // 0x1cf0cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0d0: 0x8022fb90  lb          $v0, -0x470($at)
    ctx->pc = 0x1cf0d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB90u));
    // 0x1cf0d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF0D4u;
    {
        const bool branch_taken_0x1cf0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0d4) {
            ctx->pc = 0x1CF0F4u;
            return;
        }
    }
    ctx->pc = 0x1CF0DCu;
    // 0x1cf0dc: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x1cf0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x1cf0e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0e4: 0xac23fb88  sw          $v1, -0x478($at)
    ctx->pc = 0x1cf0e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB88u, _value); } while (0);
    // 0x1cf0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0f0: 0xa022fb90  sb          $v0, -0x470($at)
    ctx->pc = 0x1cf0f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB90u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB90u, _value); } while (0);
    ctx->pc = 0x1cf0f4u;
}
