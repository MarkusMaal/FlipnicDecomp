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

// Function: entry_0019418c
// Address: 0x19418c - 0x1941cc
void entry_0019418c_0x19418c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019418c_0x19418c");
#endif

    ctx->pc = 0x19418cu;

    // 0x19418c: 0x0  nop
    ctx->pc = 0x19418cu;
    // NOP
    // 0x194190: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x194194: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x194194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x194198: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x194198u;
    {
        const bool branch_taken_0x194198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194198) {
            ctx->pc = 0x1943A0u;
            return;
        }
    }
    ctx->pc = 0x1941A0u;
    // 0x1941a0: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1941a4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1941a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1941a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941ac: 0x8ca62c10  lw          $a2, 0x2C10($a1)
    ctx->pc = 0x1941acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
    // 0x1941b0: 0x8ca72c1c  lw          $a3, 0x2C1C($a1)
    ctx->pc = 0x1941b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x1941b4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1941b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1941b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1941b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1941bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1941bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1941c0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1941c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1941c4: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x1941c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x1941c8: 0x0  nop
    ctx->pc = 0x1941c8u;
    // NOP
    ctx->pc = 0x1941ccu;
}
