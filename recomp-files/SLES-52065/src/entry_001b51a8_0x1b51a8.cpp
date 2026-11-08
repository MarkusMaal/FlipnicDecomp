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

// Function: entry_001b51a8
// Address: 0x1b51a8 - 0x1b51cc
void entry_001b51a8_0x1b51a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b51a8_0x1b51a8");
#endif

    ctx->pc = 0x1b51a8u;

    // 0x1b51a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51ac: 0x8022ece0  lb          $v0, -0x1320($at)
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36ECE0u));
    // 0x1b51b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B51B0u;
    {
        const bool branch_taken_0x1b51b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51b0) {
            ctx->pc = 0x1B51CCu;
            return;
        }
    }
    ctx->pc = 0x1B51B8u;
    // 0x1b51b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b51c0: 0xa020ecd8  sb          $zero, -0x1328($at)
    ctx->pc = 0x1b51c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36ECD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36ECD8u, _value); } while (0);
    // 0x1b51c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51c8: 0xa022ece0  sb          $v0, -0x1320($at)
    ctx->pc = 0x1b51c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36ECE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36ECE0u, _value); } while (0);
    ctx->pc = 0x1b51ccu;
}
