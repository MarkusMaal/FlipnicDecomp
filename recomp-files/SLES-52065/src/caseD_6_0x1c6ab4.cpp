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

// Function: caseD_6
// Address: 0x1c6ab4 - 0x1c6ad8
void caseD_6_0x1c6ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1c6ab4");
#endif

    ctx->pc = 0x1c6ab4u;

    // 0x1c6ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6ab8: 0x8022f8a8  lb          $v0, -0x758($at)
    ctx->pc = 0x1c6ab8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F8A8u));
    // 0x1c6abc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6ABCu;
    {
        const bool branch_taken_0x1c6abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6abc) {
            ctx->pc = 0x1C6AD8u;
            return;
        }
    }
    ctx->pc = 0x1C6AC4u;
    // 0x1c6ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6acc: 0xa020f8a0  sb          $zero, -0x760($at)
    ctx->pc = 0x1c6accu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A0u, _value); } while (0);
    // 0x1c6ad0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6ad4: 0xa022f8a8  sb          $v0, -0x758($at)
    ctx->pc = 0x1c6ad4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A8u, _value); } while (0);
    ctx->pc = 0x1c6ad8u;
}
