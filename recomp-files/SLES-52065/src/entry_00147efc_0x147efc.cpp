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

// Function: entry_00147efc
// Address: 0x147efc - 0x147fc0
void entry_00147efc_0x147efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147efc_0x147efc");
#endif

    ctx->pc = 0x147efcu;

    // 0x147efc: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x147EFCu;
    {
        const bool branch_taken_0x147efc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x147efc) {
            ctx->pc = 0x147FC0u;
            return;
        }
    }
    ctx->pc = 0x147F04u;
    // 0x147f04: 0x90870030  lbu         $a3, 0x30($a0)
    ctx->pc = 0x147f04u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147f08: 0x30060001  andi        $a2, $zero, 0x1
    ctx->pc = 0x147f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x147f0c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x147f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x147f10: 0x65980  sll         $t3, $a2, 6
    ctx->pc = 0x147f10u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x147f14: 0x649c0  sll         $t1, $a2, 7
    ctx->pc = 0x147f14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x147f18: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x147f18u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x147f1c: 0x2418fff1  addiu       $t8, $zero, -0xF
    ctx->pc = 0x147f1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x147f20: 0x6419000c  daddiu      $t9, $zero, 0xC
    ctx->pc = 0x147f20u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x147f24: 0x240ef00f  addiu       $t6, $zero, -0xFF1
    ctx->pc = 0x147f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x147f28: 0x640f0640  daddiu      $t7, $zero, 0x640
    ctx->pc = 0x147f28u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1600);
    // 0x147f2c: 0x240cffcf  addiu       $t4, $zero, -0x31
    ctx->pc = 0x147f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147f30: 0x640d0010  daddiu      $t5, $zero, 0x10
    ctx->pc = 0x147f30u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x147f34: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x147f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x147f38: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x147f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x147f3c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x147f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x147f40: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x147f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x147f44: 0xa0860030  sb          $a2, 0x30($a0)
    ctx->pc = 0x147f44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x147f48: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x147f48u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x147f4c: 0x90900030  lbu         $s0, 0x30($a0)
    ctx->pc = 0x147f4cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147f50: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x147f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x147f54: 0x218c024  and         $t8, $s0, $t8
    ctx->pc = 0x147f54u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 16) & GPR_U64(ctx, 24));
    // 0x147f58: 0x319c025  or          $t8, $t8, $t9
    ctx->pc = 0x147f58u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 25));
    // 0x147f5c: 0xa0980030  sb          $t8, 0x30($a0)
    ctx->pc = 0x147f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 24));
    // 0x147f60: 0x94980030  lhu         $t8, 0x30($a0)
    ctx->pc = 0x147f60u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147f64: 0x30e7024  and         $t6, $t8, $t6
    ctx->pc = 0x147f64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & GPR_U64(ctx, 14));
    // 0x147f68: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x147f68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x147f6c: 0xa48e0030  sh          $t6, 0x30($a0)
    ctx->pc = 0x147f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 14));
    // 0x147f70: 0x908e0031  lbu         $t6, 0x31($a0)
    ctx->pc = 0x147f70u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147f74: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x147f74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x147f78: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x147f78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x147f7c: 0xa08c0031  sb          $t4, 0x31($a0)
    ctx->pc = 0x147f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 12));
    // 0x147f80: 0x908c0031  lbu         $t4, 0x31($a0)
    ctx->pc = 0x147f80u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147f84: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x147f84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x147f88: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x147f88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x147f8c: 0xa08a0031  sb          $t2, 0x31($a0)
    ctx->pc = 0x147f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 10));
    // 0x147f90: 0x908a0031  lbu         $t2, 0x31($a0)
    ctx->pc = 0x147f90u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147f94: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x147f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x147f98: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x147f98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x147f9c: 0xa0880031  sb          $t0, 0x31($a0)
    ctx->pc = 0x147f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 8));
    // 0x147fa0: 0x90880032  lbu         $t0, 0x32($a0)
    ctx->pc = 0x147fa0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x147fa4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x147fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x147fa8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x147fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147fac: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x147facu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x147fb0: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x147fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x147fb4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x147fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x147fb8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x147fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x147fbc: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x147fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x147fc0u;
}
