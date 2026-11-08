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

// Function: entry_00125a70
// Address: 0x125a70 - 0x125ba4
void entry_00125a70_0x125a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a70_0x125a70");
#endif

    ctx->pc = 0x125a70u;

label_125a70:
    // 0x125a70: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125a74: 0x317607ff  andi        $s6, $t3, 0x7FF
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x125a78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x125a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x125a7c: 0x292d0010  slti        $t5, $t1, 0x10
    ctx->pc = 0x125a7cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x125a80: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x125a84: 0xa2270003  sb          $a3, 0x3($s1)
    ctx->pc = 0x125a84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x125a88: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x125a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125a8c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x125a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x125a90: 0xa6260000  sh          $a2, 0x0($s1)
    ctx->pc = 0x125a90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x125a94: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x125a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x125a98: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x125a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x125a9c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125aa0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125aa4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125aa8: 0x97b400e4  lhu         $s4, 0xE4($sp)
    ctx->pc = 0x125aa8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x125aac: 0x97b300e6  lhu         $s3, 0xE6($sp)
    ctx->pc = 0x125aacu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 230)));
    // 0x125ab0: 0xffa300b0  sd          $v1, 0xB0($sp)
    ctx->pc = 0x125ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 3));
    // 0x125ab4: 0xffa200b8  sd          $v0, 0xB8($sp)
    ctx->pc = 0x125ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 2));
    // 0x125ab8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x125ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x125abc: 0x295a024  and         $s4, $s4, $s5
    ctx->pc = 0x125abcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 21));
    // 0x125ac0: 0x2759824  and         $s3, $s3, $s5
    ctx->pc = 0x125ac0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x125ac4: 0x296a025  or          $s4, $s4, $s6
    ctx->pc = 0x125ac4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 22));
    // 0x125ac8: 0x2729825  or          $s3, $s3, $s2
    ctx->pc = 0x125ac8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x125acc: 0xa7b400e4  sh          $s4, 0xE4($sp)
    ctx->pc = 0x125accu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 20));
    // 0x125ad0: 0xa7b300e6  sh          $s3, 0xE6($sp)
    ctx->pc = 0x125ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 230), (uint16_t)GPR_U32(ctx, 19));
    // 0x125ad4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x125ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125ad8: 0x7e710000  sq          $s1, 0x0($s3)
    ctx->pc = 0x125ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 17));
    // 0x125adc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125adcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125ae0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125ae4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125ae8: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x125ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x125aec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125aecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125af0: 0xfe330000  sd          $s3, 0x0($s1)
    ctx->pc = 0x125af0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 19));
    // 0x125af4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125af4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125af8: 0xfe390008  sd          $t9, 0x8($s1)
    ctx->pc = 0x125af8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 25));
    // 0x125afc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125afcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b00: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b04: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125b08: 0x93b100e8  lbu         $s1, 0xE8($sp)
    ctx->pc = 0x125b08u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x125b0c: 0x2378824  and         $s1, $s1, $s7
    ctx->pc = 0x125b0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 23));
    // 0x125b10: 0x2388825  or          $s1, $s1, $t8
    ctx->pc = 0x125b10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 24));
    // 0x125b14: 0xa3b100e8  sb          $s1, 0xE8($sp)
    ctx->pc = 0x125b14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 232), (uint8_t)GPR_U32(ctx, 17));
    // 0x125b18: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x125b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x125b1c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b20: 0xfe330000  sd          $s3, 0x0($s1)
    ctx->pc = 0x125b20u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 19));
    // 0x125b24: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b28: 0xfe3e0008  sd          $fp, 0x8($s1)
    ctx->pc = 0x125b28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 30));
    // 0x125b2c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b30: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b34: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125b38: 0xffaf00c0  sd          $t7, 0xC0($sp)
    ctx->pc = 0x125b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 15));
    // 0x125b3c: 0xffa000c8  sd          $zero, 0xC8($sp)
    ctx->pc = 0x125b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 0));
    // 0x125b40: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x125b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x125b44: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b48: 0x7e330000  sq          $s3, 0x0($s1)
    ctx->pc = 0x125b48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 19));
    // 0x125b4c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b50: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x125b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x125b54: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b58: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125b5c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b60: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x125b60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x125b64: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x125b64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125b68: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x125b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x125b6c: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x125b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 8));
    // 0x125b70: 0xa6330000  sh          $s3, 0x0($s1)
    ctx->pc = 0x125b70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x125b74: 0x25080400  addiu       $t0, $t0, 0x400
    ctx->pc = 0x125b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x125b78: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x125b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x125b7c: 0xae2e000c  sw          $t6, 0xC($s1)
    ctx->pc = 0x125b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 14));
    // 0x125b80: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b84: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b88: 0x15a0ffb9  bnez        $t5, . + 4 + (-0x47 << 2)
    ctx->pc = 0x125B88u;
    {
        const bool branch_taken_0x125b88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B88u;
        // 0x125b8c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b88) {
            ctx->pc = 0x125A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125a70;
        }
    }
    ctx->pc = 0x125B90u;
    // 0x125b90: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x125b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x125b94: 0x29490010  slti        $t1, $t2, 0x10
    ctx->pc = 0x125b94u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x125b98: 0x1520ffb2  bnez        $t1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x125B98u;
    {
        const bool branch_taken_0x125b98 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B98u;
        // 0x125b9c: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b98) {
            ctx->pc = 0x125A64u;
            return;
        }
    }
    ctx->pc = 0x125BA0u;
    // 0x125ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125ba4u;
}
