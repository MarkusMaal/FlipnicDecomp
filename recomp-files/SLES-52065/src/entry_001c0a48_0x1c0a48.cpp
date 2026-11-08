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

// Function: entry_001c0a48
// Address: 0x1c0a48 - 0x1c0a70
void entry_001c0a48_0x1c0a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0a48_0x1c0a48");
#endif

    ctx->pc = 0x1c0a48u;

    // 0x1c0a48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a4c: 0x8022f598  lb          $v0, -0xA68($at)
    ctx->pc = 0x1c0a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F598u));
    // 0x1c0a50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0A50u;
    {
        const bool branch_taken_0x1c0a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a50) {
            ctx->pc = 0x1C0A70u;
            return;
        }
    }
    ctx->pc = 0x1C0A58u;
    // 0x1c0a58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c0a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c0a5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a60: 0xac23f590  sw          $v1, -0xA70($at)
    ctx->pc = 0x1c0a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F590u, _value); } while (0);
    // 0x1c0a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a6c: 0xa022f598  sb          $v0, -0xA68($at)
    ctx->pc = 0x1c0a6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F598u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F598u, _value); } while (0);
    ctx->pc = 0x1c0a70u;
}
