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

// Function: entry_00139ae0
// Address: 0x139ae0 - 0x139b9c
void entry_00139ae0_0x139ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139ae0_0x139ae0");
#endif

    ctx->pc = 0x139ae0u;

    // 0x139ae0: 0x90880030  lbu         $t0, 0x30($a0)
    ctx->pc = 0x139ae0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139ae4: 0x30070001  andi        $a3, $zero, 0x1
    ctx->pc = 0x139ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x139ae8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x139ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x139aec: 0x76180  sll         $t4, $a3, 6
    ctx->pc = 0x139aecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x139af0: 0x751c0  sll         $t2, $a3, 7
    ctx->pc = 0x139af0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x139af4: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x139af4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x139af8: 0x2418fff1  addiu       $t8, $zero, -0xF
    ctx->pc = 0x139af8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x139afc: 0x6419000c  daddiu      $t9, $zero, 0xC
    ctx->pc = 0x139afcu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x139b00: 0x240ff00f  addiu       $t7, $zero, -0xFF1
    ctx->pc = 0x139b00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x139b04: 0x64100640  daddiu      $s0, $zero, 0x640
    ctx->pc = 0x139b04u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1600);
    // 0x139b08: 0x240dffcf  addiu       $t5, $zero, -0x31
    ctx->pc = 0x139b08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x139b0c: 0x640e0010  daddiu      $t6, $zero, 0x10
    ctx->pc = 0x139b0cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x139b10: 0x1033824  and         $a3, $t0, $v1
    ctx->pc = 0x139b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x139b14: 0x240bffbf  addiu       $t3, $zero, -0x41
    ctx->pc = 0x139b14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x139b18: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x139b18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x139b1c: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x139b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x139b20: 0xa0870030  sb          $a3, 0x30($a0)
    ctx->pc = 0x139b20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x139b24: 0x64080004  daddiu      $t0, $zero, 0x4
    ctx->pc = 0x139b24u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x139b28: 0x90910030  lbu         $s1, 0x30($a0)
    ctx->pc = 0x139b28u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139b2c: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x139b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x139b30: 0x238c024  and         $t8, $s1, $t8
    ctx->pc = 0x139b30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 17) & GPR_U64(ctx, 24));
    // 0x139b34: 0x319c025  or          $t8, $t8, $t9
    ctx->pc = 0x139b34u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 25));
    // 0x139b38: 0xa0980030  sb          $t8, 0x30($a0)
    ctx->pc = 0x139b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 24));
    // 0x139b3c: 0x94980030  lhu         $t8, 0x30($a0)
    ctx->pc = 0x139b3cu;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139b40: 0x30f7824  and         $t7, $t8, $t7
    ctx->pc = 0x139b40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 15));
    // 0x139b44: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x139b44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x139b48: 0xa48f0030  sh          $t7, 0x30($a0)
    ctx->pc = 0x139b48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 15));
    // 0x139b4c: 0x908f0031  lbu         $t7, 0x31($a0)
    ctx->pc = 0x139b4cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139b50: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x139b50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x139b54: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x139b54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x139b58: 0xa08d0031  sb          $t5, 0x31($a0)
    ctx->pc = 0x139b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 13));
    // 0x139b5c: 0x908d0031  lbu         $t5, 0x31($a0)
    ctx->pc = 0x139b5cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139b60: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x139b60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x139b64: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x139b64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x139b68: 0xa08b0031  sb          $t3, 0x31($a0)
    ctx->pc = 0x139b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 11));
    // 0x139b6c: 0x908b0031  lbu         $t3, 0x31($a0)
    ctx->pc = 0x139b6cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139b70: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x139b70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x139b74: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x139b74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x139b78: 0xa0890031  sb          $t1, 0x31($a0)
    ctx->pc = 0x139b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 9));
    // 0x139b7c: 0x90890032  lbu         $t1, 0x32($a0)
    ctx->pc = 0x139b7cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x139b80: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x139b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x139b84: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x139b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x139b88: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x139b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x139b8c: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x139b8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x139b90: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x139b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x139b94: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x139b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x139b98: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x139b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x139b9cu;
}
