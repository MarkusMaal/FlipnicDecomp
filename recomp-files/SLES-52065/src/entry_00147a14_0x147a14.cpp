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

// Function: entry_00147a14
// Address: 0x147a14 - 0x147a68
void entry_00147a14_0x147a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147a14_0x147a14");
#endif

    ctx->pc = 0x147a14u;

    // 0x147a14: 0x8f848594  lw          $a0, -0x7A6C($gp)
    ctx->pc = 0x147a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x147a18: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x147a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147a1c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x147a20: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x147a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x147a24: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x147a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x147a28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x147a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x147a2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x147a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x147a30: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x147a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147a34: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x147a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x147a38: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x147a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x147a3c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x147a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x147a40: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x147a40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x147a44: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x147a44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x147a48: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x147a48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x147a4c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x147a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x147a50: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x147a50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x147a54: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x147a58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x147a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147a5c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x147a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x147a60: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x147a64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x147a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x147a68u;
}
