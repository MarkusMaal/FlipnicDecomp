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

// Function: entry_0013a6f0
// Address: 0x13a6f0 - 0x13a798
void entry_0013a6f0_0x13a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a6f0_0x13a6f0");
#endif

    ctx->pc = 0x13a6f0u;

    // 0x13a6f0: 0x8cd10038  lw          $s1, 0x38($a2)
    ctx->pc = 0x13a6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x13a6f4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6f8: 0x182900  sll         $a1, $t8, 4
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x13a6fc: 0x124400  sll         $t0, $s2, 16
    ctx->pc = 0x13a6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x13a700: 0x195900  sll         $t3, $t9, 4
    ctx->pc = 0x13a700u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x13a704: 0x1176025  or          $t4, $t0, $s7
    ctx->pc = 0x13a704u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x13a708: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x13a708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13a70c: 0x11e4025  or          $t0, $t0, $fp
    ctx->pc = 0x13a70cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 30));
    // 0x13a710: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13a710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13a714: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x13a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x13a718: 0xa0ea0003  sb          $t2, 0x3($a3)
    ctx->pc = 0x13a718u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a71c: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a71cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a720: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x13a720u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x13a724: 0xa4f20000  sh          $s2, 0x0($a3)
    ctx->pc = 0x13a724u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x13a728: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x13a728u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x13a72c: 0xacec000c  sw          $t4, 0xC($a3)
    ctx->pc = 0x13a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 12));
    // 0x13a730: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a734: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a738: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x13a73c: 0x8cc50038  lw          $a1, 0x38($a2)
    ctx->pc = 0x13a73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x13a740: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13a740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a744: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x13a744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x13a748: 0xa0ea0003  sb          $t2, 0x3($a3)
    ctx->pc = 0x13a748u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a74c: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a750: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x13a750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x13a754: 0xa4f20000  sh          $s2, 0x0($a3)
    ctx->pc = 0x13a754u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x13a758: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x13a758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x13a75c: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x13a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x13a760: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a764: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a768: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x13a76c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13a76cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a770: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x13a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x13a774: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a774u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a778: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x13a778u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x13a77c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13a780: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x13a780u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13a784: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13a784u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13a788: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x13a788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x13a78c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a790: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a794: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x13a798u;
}
