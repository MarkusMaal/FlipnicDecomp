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

// Function: entry_001202a8
// Address: 0x1202a8 - 0x1202d4
void entry_001202a8_0x1202a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001202a8_0x1202a8");
#endif

    ctx->pc = 0x1202a8u;

    // 0x1202a8: 0x92850036  lbu         $a1, 0x36($s4)
    ctx->pc = 0x1202a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x1202ac: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x1202acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1202b0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1202b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1202b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1202B4u;
    {
        const bool branch_taken_0x1202b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1202b4) {
            ctx->pc = 0x1202D4u;
            return;
        }
    }
    ctx->pc = 0x1202BCu;
    // 0x1202bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1202bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1202c0: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1202c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1202c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1202c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1202c8: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x1202c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1202cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1202ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1202d0: 0xa2830036  sb          $v1, 0x36($s4)
    ctx->pc = 0x1202d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 54), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1202d4u;
}
