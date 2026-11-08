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

// Function: FUN_00147d40
// Address: 0x147d40 - 0x147fd0
void FUN_00147d40_0x147d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00147d40_0x147d40");
#endif

    ctx->pc = 0x147d40u;

    // 0x147d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147d44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147d48: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x147D48u;
    {
        const bool branch_taken_0x147d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D48u;
        // 0x147d4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d48) {
            ctx->pc = 0x147E40u;
            goto label_147e40;
        }
    }
    ctx->pc = 0x147D50u;
    // 0x147d50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147d54: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x147D54u;
    {
        const bool branch_taken_0x147d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x147D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D54u;
        // 0x147d58: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d54) {
            ctx->pc = 0x147D78u;
            goto label_147d78;
        }
    }
    ctx->pc = 0x147D5Cu;
    // 0x147d5c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147D5Cu;
    {
        const bool branch_taken_0x147d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x147d5c) {
            ctx->pc = 0x147D78u;
            goto label_147d78;
        }
    }
    ctx->pc = 0x147D64u;
    // 0x147d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d68: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147D68u;
    {
        const bool branch_taken_0x147d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x147d68) {
            ctx->pc = 0x147D78u;
            goto label_147d78;
        }
    }
    ctx->pc = 0x147D70u;
    // 0x147d70: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x147D70u;
    {
        const bool branch_taken_0x147d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d70) {
            ctx->pc = 0x147EFCu;
            goto label_147efc;
        }
    }
    ctx->pc = 0x147D78u;
label_147d78:
    // 0x147d78: 0x90880030  lbu         $t0, 0x30($a0)
    ctx->pc = 0x147d78u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147d7c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x147d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x147d80: 0x30070007  andi        $a3, $zero, 0x7
    ctx->pc = 0x147d80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x147d84: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x147d84u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x147d88: 0x7c040  sll         $t8, $a3, 1
    ctx->pc = 0x147d88u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x147d8c: 0x2411fff1  addiu       $s1, $zero, -0xF
    ctx->pc = 0x147d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x147d90: 0x300700ff  andi        $a3, $zero, 0xFF
    ctx->pc = 0x147d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x147d94: 0x240ff00f  addiu       $t7, $zero, -0xFF1
    ctx->pc = 0x147d94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x147d98: 0x78100  sll         $s0, $a3, 4
    ctx->pc = 0x147d98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x147d9c: 0x240dffcf  addiu       $t5, $zero, -0x31
    ctx->pc = 0x147d9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147da0: 0x30070001  andi        $a3, $zero, 0x1
    ctx->pc = 0x147da0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x147da4: 0x640e0010  daddiu      $t6, $zero, 0x10
    ctx->pc = 0x147da4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x147da8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x147da8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x147dac: 0x240bffbf  addiu       $t3, $zero, -0x41
    ctx->pc = 0x147dacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x147db0: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x147db0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x147db4: 0x76180  sll         $t4, $a3, 6
    ctx->pc = 0x147db4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x147db8: 0xa0880030  sb          $t0, 0x30($a0)
    ctx->pc = 0x147db8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 8));
    // 0x147dbc: 0x751c0  sll         $t2, $a3, 7
    ctx->pc = 0x147dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x147dc0: 0x90990030  lbu         $t9, 0x30($a0)
    ctx->pc = 0x147dc0u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147dc4: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x147dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x147dc8: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x147dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x147dcc: 0x64080004  daddiu      $t0, $zero, 0x4
    ctx->pc = 0x147dccu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x147dd0: 0x3318824  and         $s1, $t9, $s1
    ctx->pc = 0x147dd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & GPR_U64(ctx, 17));
    // 0x147dd4: 0x2388825  or          $s1, $s1, $t8
    ctx->pc = 0x147dd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 24));
    // 0x147dd8: 0xa0910030  sb          $s1, 0x30($a0)
    ctx->pc = 0x147dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 17));
    // 0x147ddc: 0x94910030  lhu         $s1, 0x30($a0)
    ctx->pc = 0x147ddcu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147de0: 0x22f7824  and         $t7, $s1, $t7
    ctx->pc = 0x147de0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x147de4: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x147de4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x147de8: 0xa48f0030  sh          $t7, 0x30($a0)
    ctx->pc = 0x147de8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 15));
    // 0x147dec: 0x908f0031  lbu         $t7, 0x31($a0)
    ctx->pc = 0x147decu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147df0: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x147df0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x147df4: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x147df4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x147df8: 0xa08d0031  sb          $t5, 0x31($a0)
    ctx->pc = 0x147df8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 13));
    // 0x147dfc: 0x908d0031  lbu         $t5, 0x31($a0)
    ctx->pc = 0x147dfcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147e00: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x147e00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x147e04: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x147e04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x147e08: 0xa08b0031  sb          $t3, 0x31($a0)
    ctx->pc = 0x147e08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 11));
    // 0x147e0c: 0x908b0031  lbu         $t3, 0x31($a0)
    ctx->pc = 0x147e0cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147e10: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x147e10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x147e14: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x147e14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x147e18: 0xa0890031  sb          $t1, 0x31($a0)
    ctx->pc = 0x147e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 9));
    // 0x147e1c: 0x90890032  lbu         $t1, 0x32($a0)
    ctx->pc = 0x147e1cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x147e20: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x147e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x147e24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x147e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147e28: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x147e28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x147e2c: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x147e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x147e30: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x147e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x147e34: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x147e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x147e38: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x147E38u;
    {
        const bool branch_taken_0x147e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E38u;
        // 0x147e3c: 0xa0830032  sb          $v1, 0x32($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e38) {
            ctx->pc = 0x147EFCu;
            goto label_147efc;
        }
    }
    ctx->pc = 0x147E40u;
label_147e40:
    // 0x147e40: 0x90880030  lbu         $t0, 0x30($a0)
    ctx->pc = 0x147e40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147e44: 0x30070001  andi        $a3, $zero, 0x1
    ctx->pc = 0x147e44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x147e48: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x147e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x147e4c: 0x76180  sll         $t4, $a3, 6
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x147e50: 0x751c0  sll         $t2, $a3, 7
    ctx->pc = 0x147e50u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x147e54: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x147e54u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x147e58: 0x2418fff1  addiu       $t8, $zero, -0xF
    ctx->pc = 0x147e58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x147e5c: 0x6419000c  daddiu      $t9, $zero, 0xC
    ctx->pc = 0x147e5cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x147e60: 0x240ff00f  addiu       $t7, $zero, -0xFF1
    ctx->pc = 0x147e60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x147e64: 0x64100640  daddiu      $s0, $zero, 0x640
    ctx->pc = 0x147e64u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1600);
    // 0x147e68: 0x240dffcf  addiu       $t5, $zero, -0x31
    ctx->pc = 0x147e68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147e6c: 0x640e0010  daddiu      $t6, $zero, 0x10
    ctx->pc = 0x147e6cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x147e70: 0x1033824  and         $a3, $t0, $v1
    ctx->pc = 0x147e70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x147e74: 0x240bffbf  addiu       $t3, $zero, -0x41
    ctx->pc = 0x147e74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x147e78: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x147e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x147e7c: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x147e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x147e80: 0xa0870030  sb          $a3, 0x30($a0)
    ctx->pc = 0x147e80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x147e84: 0x64080004  daddiu      $t0, $zero, 0x4
    ctx->pc = 0x147e84u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x147e88: 0x90910030  lbu         $s1, 0x30($a0)
    ctx->pc = 0x147e88u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147e8c: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x147e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x147e90: 0x238c024  and         $t8, $s1, $t8
    ctx->pc = 0x147e90u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 17) & GPR_U64(ctx, 24));
    // 0x147e94: 0x319c025  or          $t8, $t8, $t9
    ctx->pc = 0x147e94u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 25));
    // 0x147e98: 0xa0980030  sb          $t8, 0x30($a0)
    ctx->pc = 0x147e98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 24));
    // 0x147e9c: 0x94980030  lhu         $t8, 0x30($a0)
    ctx->pc = 0x147e9cu;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x147ea0: 0x30f7824  and         $t7, $t8, $t7
    ctx->pc = 0x147ea0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 15));
    // 0x147ea4: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x147ea4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x147ea8: 0xa48f0030  sh          $t7, 0x30($a0)
    ctx->pc = 0x147ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 15));
    // 0x147eac: 0x908f0031  lbu         $t7, 0x31($a0)
    ctx->pc = 0x147eacu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147eb0: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x147eb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x147eb4: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x147eb4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x147eb8: 0xa08d0031  sb          $t5, 0x31($a0)
    ctx->pc = 0x147eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 13));
    // 0x147ebc: 0x908d0031  lbu         $t5, 0x31($a0)
    ctx->pc = 0x147ebcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147ec0: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x147ec0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x147ec4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x147ec4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x147ec8: 0xa08b0031  sb          $t3, 0x31($a0)
    ctx->pc = 0x147ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 11));
    // 0x147ecc: 0x908b0031  lbu         $t3, 0x31($a0)
    ctx->pc = 0x147eccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x147ed0: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x147ed0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x147ed4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x147ed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x147ed8: 0xa0890031  sb          $t1, 0x31($a0)
    ctx->pc = 0x147ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 9));
    // 0x147edc: 0x90890032  lbu         $t1, 0x32($a0)
    ctx->pc = 0x147edcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x147ee0: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x147ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x147ee4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x147ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147ee8: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x147ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x147eec: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x147eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x147ef0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x147ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x147ef4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x147ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x147ef8: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x147ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
label_147efc:
    // 0x147efc: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x147EFCu;
    {
        const bool branch_taken_0x147efc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x147efc) {
            ctx->pc = 0x147FC0u;
            goto label_147fc0;
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
label_147fc0:
    // 0x147fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x147FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FC8u;
        // 0x147fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147FD0u;
}
