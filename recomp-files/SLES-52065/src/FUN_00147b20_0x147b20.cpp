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

// Function: FUN_00147b20
// Address: 0x147b20 - 0x147cfc
void FUN_00147b20_0x147b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00147b20_0x147b20");
#endif

    ctx->pc = 0x147b20u;

    // 0x147b20: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x147B20u;
    {
        const bool branch_taken_0x147b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B20u;
        // 0x147b24: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b20) {
            ctx->pc = 0x147C94u;
            goto label_147c94;
        }
    }
    ctx->pc = 0x147B28u;
    // 0x147b28: 0x10a6003e  beq         $a1, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x147B28u;
    {
        const bool branch_taken_0x147b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x147B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B28u;
        // 0x147b2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b28) {
            ctx->pc = 0x147C24u;
            goto label_147c24;
        }
    }
    ctx->pc = 0x147B30u;
    // 0x147b30: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x147B30u;
    {
        const bool branch_taken_0x147b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x147b30) {
            ctx->pc = 0x147BC0u;
            goto label_147bc0;
        }
    }
    ctx->pc = 0x147B38u;
    // 0x147b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147b3c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147B3Cu;
    {
        const bool branch_taken_0x147b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x147b3c) {
            ctx->pc = 0x147B4Cu;
            goto label_147b4c;
        }
    }
    ctx->pc = 0x147B44u;
    // 0x147b44: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x147B44u;
    {
        const bool branch_taken_0x147b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b44) {
            ctx->pc = 0x147CF4u;
            goto label_147cf4;
        }
    }
    ctx->pc = 0x147B4Cu;
label_147b4c:
    // 0x147b4c: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x147b4cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147b50: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x147b50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x147b54: 0x300c0003  andi        $t4, $zero, 0x3
    ctx->pc = 0x147b54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x147b58: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x147b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x147b5c: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x147b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147b60: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x147b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x147b64: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x147b64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x147b68: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x147b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147b6c: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x147b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147b70: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x147b70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x147b74: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x147b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x147b78: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x147b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x147b7c: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x147b7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x147b80: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x147b80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x147b84: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x147b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x147b88: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x147b88u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147b8c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x147b8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x147b90: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x147b90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x147b94: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x147b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x147b98: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x147b98u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147b9c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x147b9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x147ba0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x147ba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x147ba4: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x147ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x147ba8: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x147ba8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147bac: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x147bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x147bb0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x147bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x147bb4: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x147bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x147bb8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x147BB8u;
    {
        const bool branch_taken_0x147bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BB8u;
        // 0x147bbc: 0xa0830014  sb          $v1, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bb8) {
            ctx->pc = 0x147CF4u;
            goto label_147cf4;
        }
    }
    ctx->pc = 0x147BC0u;
label_147bc0:
    // 0x147bc0: 0x908c0010  lbu         $t4, 0x10($a0)
    ctx->pc = 0x147bc0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147bc4: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x147bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x147bc8: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x147bc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x147bcc: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x147bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147bd0: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x147bd0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x147bd4: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x147bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147bd8: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x147bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x147bdc: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x147bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x147be0: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x147be0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x147be4: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x147be4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x147be8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x147be8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x147bec: 0xa08a0010  sb          $t2, 0x10($a0)
    ctx->pc = 0x147becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 10));
    // 0x147bf0: 0x908a0010  lbu         $t2, 0x10($a0)
    ctx->pc = 0x147bf0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147bf4: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x147bf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x147bf8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x147bf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x147bfc: 0xa0880010  sb          $t0, 0x10($a0)
    ctx->pc = 0x147bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 8));
    // 0x147c00: 0x90880010  lbu         $t0, 0x10($a0)
    ctx->pc = 0x147c00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c04: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x147c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x147c08: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x147c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x147c0c: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x147c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x147c10: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x147c10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c14: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x147c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x147c18: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x147c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147c1c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x147C1Cu;
    {
        const bool branch_taken_0x147c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C1Cu;
        // 0x147c20: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c1c) {
            ctx->pc = 0x147CF4u;
            goto label_147cf4;
        }
    }
    ctx->pc = 0x147C24u;
label_147c24:
    // 0x147c24: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x147c24u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c28: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x147c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x147c2c: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x147c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x147c30: 0x30cc0003  andi        $t4, $a2, 0x3
    ctx->pc = 0x147c30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x147c34: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x147c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147c38: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x147c38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147c3c: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x147c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x147c40: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x147c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147c44: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x147c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x147c48: 0x64060040  daddiu      $a2, $zero, 0x40
    ctx->pc = 0x147c48u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x147c4c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x147c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x147c50: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x147c50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x147c54: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x147c54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x147c58: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x147c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x147c5c: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x147c5cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c60: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x147c60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x147c64: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x147c64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x147c68: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x147c68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x147c6c: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x147c6cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c70: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x147c70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x147c74: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x147c74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x147c78: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x147c78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x147c7c: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x147c7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c80: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x147c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x147c84: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x147c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x147c88: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x147c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x147c8c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x147C8Cu;
    {
        const bool branch_taken_0x147c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C8Cu;
        // 0x147c90: 0xa0830014  sb          $v1, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c8c) {
            ctx->pc = 0x147CF4u;
            goto label_147cf4;
        }
    }
    ctx->pc = 0x147C94u;
label_147c94:
    // 0x147c94: 0x908c0010  lbu         $t4, 0x10($a0)
    ctx->pc = 0x147c94u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c98: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x147c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x147c9c: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x147c9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x147ca0: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x147ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147ca4: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x147ca4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x147ca8: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x147ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147cac: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x147cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x147cb0: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x147cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x147cb4: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x147cb4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x147cb8: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x147cb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x147cbc: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x147cbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x147cc0: 0xa08a0010  sb          $t2, 0x10($a0)
    ctx->pc = 0x147cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 10));
    // 0x147cc4: 0x908a0010  lbu         $t2, 0x10($a0)
    ctx->pc = 0x147cc4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147cc8: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x147cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x147ccc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x147cccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x147cd0: 0xa0880010  sb          $t0, 0x10($a0)
    ctx->pc = 0x147cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 8));
    // 0x147cd4: 0x90880010  lbu         $t0, 0x10($a0)
    ctx->pc = 0x147cd4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147cd8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x147cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x147cdc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x147cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x147ce0: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x147ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x147ce4: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x147ce4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147ce8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x147ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x147cec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x147cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147cf0: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x147cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
label_147cf4:
    // 0x147cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x147CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147CFCu;
}
