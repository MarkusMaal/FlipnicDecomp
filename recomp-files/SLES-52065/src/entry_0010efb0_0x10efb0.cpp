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

// Function: entry_0010efb0
// Address: 0x10efb0 - 0x10eff4
void entry_0010efb0_0x10efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010efb0_0x10efb0");
#endif

    ctx->pc = 0x10efb0u;

    // 0x10efb0: 0x92260230  lbu         $a2, 0x230($s1)
    ctx->pc = 0x10efb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x10efb4: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x10efb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x10efb8: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x10efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x10efbc: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x10efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10efc0: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x10efc4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x10efc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x10efc8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10efc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10efcc: 0xa2240230  sb          $a0, 0x230($s1)
    ctx->pc = 0x10efccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 4));
    // 0x10efd0: 0x92240231  lbu         $a0, 0x231($s1)
    ctx->pc = 0x10efd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
    // 0x10efd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x10efd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x10efd8: 0x426fc  dsll32      $a0, $a0, 27
    ctx->pc = 0x10efd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 27));
    // 0x10efdc: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x10efdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x10efe0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10efe4: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x10efe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x10efe8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x10efec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10eff0: 0xa2230231  sb          $v1, 0x231($s1)
    ctx->pc = 0x10eff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10eff4u;
}
