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

// Function: entry_001ce1a4
// Address: 0x1ce1a4 - 0x1ce1cc
void entry_001ce1a4_0x1ce1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce1a4_0x1ce1a4");
#endif

    ctx->pc = 0x1ce1a4u;

    // 0x1ce1a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1a8: 0x8022faf8  lb          $v0, -0x508($at)
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FAF8u));
    // 0x1ce1ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE1ACu;
    {
        const bool branch_taken_0x1ce1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1ac) {
            ctx->pc = 0x1CE1CCu;
            return;
        }
    }
    ctx->pc = 0x1CE1B4u;
    // 0x1ce1b4: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1ce1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1ce1b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1bc: 0xac23faf0  sw          $v1, -0x510($at)
    ctx->pc = 0x1ce1bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FAF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FAF0u, _value); } while (0);
    // 0x1ce1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1c8: 0xa022faf8  sb          $v0, -0x508($at)
    ctx->pc = 0x1ce1c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FAF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FAF8u, _value); } while (0);
    ctx->pc = 0x1ce1ccu;
}
