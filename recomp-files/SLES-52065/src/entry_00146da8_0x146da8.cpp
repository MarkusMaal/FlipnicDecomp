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

// Function: entry_00146da8
// Address: 0x146da8 - 0x146ea8
void entry_00146da8_0x146da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146da8_0x146da8");
#endif

    ctx->pc = 0x146da8u;

    // 0x146da8: 0x258b0022  addiu       $t3, $t4, 0x22
    ctx->pc = 0x146da8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 34));
    // 0x146dac: 0xbc100  sll         $t8, $t3, 4
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x146db0: 0x258c0022  addiu       $t4, $t4, 0x22
    ctx->pc = 0x146db0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 34));
    // 0x146db4: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146db8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x146dbc: 0xa1680003  sb          $t0, 0x3($t3)
    ctx->pc = 0x146dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146dc0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146dc4: 0xad770004  sw          $s7, 0x4($t3)
    ctx->pc = 0x146dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 23));
    // 0x146dc8: 0xa57e0000  sh          $fp, 0x0($t3)
    ctx->pc = 0x146dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 30));
    // 0x146dcc: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x146dccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
    // 0x146dd0: 0xad6e000c  sw          $t6, 0xC($t3)
    ctx->pc = 0x146dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 14));
    // 0x146dd4: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146dd8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146ddc: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146de0: 0x8df90000  lw          $t9, 0x0($t7)
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x146de4: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146de4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146de8: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x146de8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x146dec: 0xa1680003  sb          $t0, 0x3($t3)
    ctx->pc = 0x146decu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146df0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146df0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146df4: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x146df4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x146df8: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x146df8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146dfc: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x146dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x146e00: 0xad63000c  sw          $v1, 0xC($t3)
    ctx->pc = 0x146e00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 3));
    // 0x146e04: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e08: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146e08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146e0c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146e10: 0x8e9902b0  lw          $t9, 0x2B0($s4)
    ctx->pc = 0x146e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 688)));
    // 0x146e14: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e18: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x146e1c: 0xa1680003  sb          $t0, 0x3($t3)
    ctx->pc = 0x146e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146e20: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146e20u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e24: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x146e24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x146e28: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x146e28u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146e2c: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x146e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x146e30: 0xad65000c  sw          $a1, 0xC($t3)
    ctx->pc = 0x146e30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 5));
    // 0x146e34: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e38: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146e38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146e3c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146e40: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x146e40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146e44: 0x8d390000  lw          $t9, 0x0($t1)
    ctx->pc = 0x146e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e48: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x146e48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x146e4c: 0xa3280003  sb          $t0, 0x3($t9)
    ctx->pc = 0x146e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146e50: 0x3c181400  lui         $t8, 0x1400
    ctx->pc = 0x146e50u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)5120 << 16));
    // 0x146e54: 0xa3200002  sb          $zero, 0x2($t9)
    ctx->pc = 0x146e54u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e58: 0xaf2b0004  sw          $t3, 0x4($t9)
    ctx->pc = 0x146e58u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 11));
    // 0x146e5c: 0xa7260000  sh          $a2, 0x0($t9)
    ctx->pc = 0x146e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146e60: 0xaf2d0008  sw          $t5, 0x8($t9)
    ctx->pc = 0x146e60u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 13));
    // 0x146e64: 0xaf24000c  sw          $a0, 0xC($t9)
    ctx->pc = 0x146e64u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 4));
    // 0x146e68: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e6c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146e6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146e70: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146e70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146e74: 0x8f9984d0  lw          $t9, -0x7B30($gp)
    ctx->pc = 0x146e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x146e78: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e7c: 0x338c825  or          $t9, $t9, $t8
    ctx->pc = 0x146e7cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 24));
    // 0x146e80: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x146e80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146e84: 0xa1780003  sb          $t8, 0x3($t3)
    ctx->pc = 0x146e84u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 24));
    // 0x146e88: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146e88u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e8c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x146e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x146e90: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x146e90u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146e94: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x146e94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x146e98: 0xad79000c  sw          $t9, 0xC($t3)
    ctx->pc = 0x146e98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 25));
    // 0x146e9c: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146ea0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146ea4: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    ctx->pc = 0x146ea8u;
}
