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

// Function: entry_0015ca90
// Address: 0x15ca90 - 0x15cabc
void entry_0015ca90_0x15ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca90_0x15ca90");
#endif

    ctx->pc = 0x15ca90u;

    // 0x15ca90: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15ca94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15ca94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ca98: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15ca9c: 0x85250004  lh          $a1, 0x4($t1)
    ctx->pc = 0x15ca9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x15caa0: 0x85230006  lh          $v1, 0x6($t1)
    ctx->pc = 0x15caa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x15caa4: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x15caa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x15caa8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x15caa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15caac: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x15caacu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x15cab0: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x15CAB0u;
    {
        const bool branch_taken_0x15cab0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cab0) {
            ctx->pc = 0x15CABCu;
            return;
        }
    }
    ctx->pc = 0x15CAB8u;
    // 0x15cab8: 0xa1240042  sb          $a0, 0x42($t1)
    ctx->pc = 0x15cab8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 66), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15cabcu;
}
