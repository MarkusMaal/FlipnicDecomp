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

// Function: entry_0014f8cc
// Address: 0x14f8cc - 0x14f984
void entry_0014f8cc_0x14f8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f8cc_0x14f8cc");
#endif

    ctx->pc = 0x14f8ccu;

    // 0x14f8cc: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x14f8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f8d0: 0xc9180  sll         $s2, $t4, 6
    ctx->pc = 0x14f8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x14f8d4: 0x197080  sll         $t6, $t9, 2
    ctx->pc = 0x14f8d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x14f8d8: 0x258c0024  addiu       $t4, $t4, 0x24
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 36));
    // 0x14f8dc: 0x19cc80  sll         $t9, $t9, 18
    ctx->pc = 0x14f8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 18));
    // 0x14f8e0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x14f8e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x14f8e4: 0x323c825  or          $t9, $t9, $v1
    ctx->pc = 0x14f8e4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 3));
    // 0x14f8e8: 0xa2680003  sb          $t0, 0x3($s3)
    ctx->pc = 0x14f8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x14f8ec: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x14f8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f8f0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x14f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x14f8f4: 0xa6670000  sh          $a3, 0x0($s3)
    ctx->pc = 0x14f8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x14f8f8: 0xae660008  sw          $a2, 0x8($s3)
    ctx->pc = 0x14f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
    // 0x14f8fc: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x14f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
    // 0x14f900: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x14f900u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f904: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x14f904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x14f908: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x14f908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x14f90c: 0x79730000  lq          $s3, 0x0($t3)
    ctx->pc = 0x14f90cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14f910: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f910u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f914: 0x7d730000  sq          $s3, 0x0($t3)
    ctx->pc = 0x14f914u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 19));
    // 0x14f918: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f918u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f91c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14f91cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x14f920: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x14f920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x14f924: 0x8e2b011c  lw          $t3, 0x11C($s1)
    ctx->pc = 0x14f924u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x14f928: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x14f928u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f92c: 0x1725821  addu        $t3, $t3, $s2
    ctx->pc = 0x14f92cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x14f930: 0xa2640003  sb          $a0, 0x3($s3)
    ctx->pc = 0x14f930u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x14f934: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x14f934u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f938: 0xae6b0004  sw          $t3, 0x4($s3)
    ctx->pc = 0x14f938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 11));
    // 0x14f93c: 0xa66e0000  sh          $t6, 0x0($s3)
    ctx->pc = 0x14f93cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x14f940: 0xae660008  sw          $a2, 0x8($s3)
    ctx->pc = 0x14f940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
    // 0x14f944: 0xae79000c  sw          $t9, 0xC($s3)
    ctx->pc = 0x14f944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 25));
    // 0x14f948: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f94c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14f94cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x14f950: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x14f950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x14f954: 0x8f8b84e4  lw          $t3, -0x7B1C($gp)
    ctx->pc = 0x14f954u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x14f958: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x14f958u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f95c: 0x1785825  or          $t3, $t3, $t8
    ctx->pc = 0x14f95cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 24));
    // 0x14f960: 0xa1c80003  sb          $t0, 0x3($t6)
    ctx->pc = 0x14f960u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x14f964: 0xa1c00002  sb          $zero, 0x2($t6)
    ctx->pc = 0x14f964u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f968: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x14f968u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x14f96c: 0xa5c00000  sh          $zero, 0x0($t6)
    ctx->pc = 0x14f96cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14f970: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x14f970u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x14f974: 0xadcb000c  sw          $t3, 0xC($t6)
    ctx->pc = 0x14f974u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 11));
    // 0x14f978: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f978u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f97c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14f97cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x14f980: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x14f980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    ctx->pc = 0x14f984u;
}
