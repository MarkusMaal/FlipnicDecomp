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

// Function: entry_00139b9c
// Address: 0x139b9c - 0x139c60
void entry_00139b9c_0x139b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139b9c_0x139b9c");
#endif

    ctx->pc = 0x139b9cu;

    // 0x139b9c: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x139B9Cu;
    {
        const bool branch_taken_0x139b9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b9c) {
            ctx->pc = 0x139C60u;
            return;
        }
    }
    ctx->pc = 0x139BA4u;
    // 0x139ba4: 0x90870030  lbu         $a3, 0x30($a0)
    ctx->pc = 0x139ba4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139ba8: 0x30060001  andi        $a2, $zero, 0x1
    ctx->pc = 0x139ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x139bac: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x139bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x139bb0: 0x65980  sll         $t3, $a2, 6
    ctx->pc = 0x139bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x139bb4: 0x649c0  sll         $t1, $a2, 7
    ctx->pc = 0x139bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x139bb8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x139bb8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x139bbc: 0x2418fff1  addiu       $t8, $zero, -0xF
    ctx->pc = 0x139bbcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x139bc0: 0x6419000c  daddiu      $t9, $zero, 0xC
    ctx->pc = 0x139bc0u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x139bc4: 0x240ef00f  addiu       $t6, $zero, -0xFF1
    ctx->pc = 0x139bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x139bc8: 0x640f0640  daddiu      $t7, $zero, 0x640
    ctx->pc = 0x139bc8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1600);
    // 0x139bcc: 0x240cffcf  addiu       $t4, $zero, -0x31
    ctx->pc = 0x139bccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x139bd0: 0x640d0010  daddiu      $t5, $zero, 0x10
    ctx->pc = 0x139bd0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x139bd4: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x139bd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x139bd8: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x139bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x139bdc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x139bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x139be0: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x139be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x139be4: 0xa0860030  sb          $a2, 0x30($a0)
    ctx->pc = 0x139be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x139be8: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x139be8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x139bec: 0x90900030  lbu         $s0, 0x30($a0)
    ctx->pc = 0x139becu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139bf0: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x139bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x139bf4: 0x218c024  and         $t8, $s0, $t8
    ctx->pc = 0x139bf4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 16) & GPR_U64(ctx, 24));
    // 0x139bf8: 0x319c025  or          $t8, $t8, $t9
    ctx->pc = 0x139bf8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 25));
    // 0x139bfc: 0xa0980030  sb          $t8, 0x30($a0)
    ctx->pc = 0x139bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 24));
    // 0x139c00: 0x94980030  lhu         $t8, 0x30($a0)
    ctx->pc = 0x139c00u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139c04: 0x30e7024  and         $t6, $t8, $t6
    ctx->pc = 0x139c04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & GPR_U64(ctx, 14));
    // 0x139c08: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x139c08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x139c0c: 0xa48e0030  sh          $t6, 0x30($a0)
    ctx->pc = 0x139c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 14));
    // 0x139c10: 0x908e0031  lbu         $t6, 0x31($a0)
    ctx->pc = 0x139c10u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139c14: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x139c14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x139c18: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x139c18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x139c1c: 0xa08c0031  sb          $t4, 0x31($a0)
    ctx->pc = 0x139c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 12));
    // 0x139c20: 0x908c0031  lbu         $t4, 0x31($a0)
    ctx->pc = 0x139c20u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139c24: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x139c24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x139c28: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x139c28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x139c2c: 0xa08a0031  sb          $t2, 0x31($a0)
    ctx->pc = 0x139c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 10));
    // 0x139c30: 0x908a0031  lbu         $t2, 0x31($a0)
    ctx->pc = 0x139c30u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139c34: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x139c34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x139c38: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x139c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x139c3c: 0xa0880031  sb          $t0, 0x31($a0)
    ctx->pc = 0x139c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 8));
    // 0x139c40: 0x90880032  lbu         $t0, 0x32($a0)
    ctx->pc = 0x139c40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x139c44: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x139c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x139c48: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x139c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x139c4c: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x139c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x139c50: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x139c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x139c54: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x139c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x139c58: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x139c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x139c5c: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x139c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x139c60u;
}
