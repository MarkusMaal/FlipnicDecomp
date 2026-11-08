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

// Function: entry_001b52b8
// Address: 0x1b52b8 - 0x1b52dc
void entry_001b52b8_0x1b52b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b52b8_0x1b52b8");
#endif

    ctx->pc = 0x1b52b8u;

    // 0x1b52b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52bc: 0x8022f250  lb          $v0, -0xDB0($at)
    ctx->pc = 0x1b52bcu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F250u));
    // 0x1b52c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B52C0u;
    {
        const bool branch_taken_0x1b52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b52c0) {
            ctx->pc = 0x1B52DCu;
            return;
        }
    }
    ctx->pc = 0x1B52C8u;
    // 0x1b52c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b52d0: 0xa020f248  sb          $zero, -0xDB8($at)
    ctx->pc = 0x1b52d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F248u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F248u, _value); } while (0);
    // 0x1b52d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52d8: 0xa022f250  sb          $v0, -0xDB0($at)
    ctx->pc = 0x1b52d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F250u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F250u, _value); } while (0);
    ctx->pc = 0x1b52dcu;
}
