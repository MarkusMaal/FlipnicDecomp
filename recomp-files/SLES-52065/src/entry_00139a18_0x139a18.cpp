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

// Function: entry_00139a18
// Address: 0x139a18 - 0x139ae0
void entry_00139a18_0x139a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139a18_0x139a18");
#endif

    ctx->pc = 0x139a18u;

    // 0x139a18: 0x90880030  lbu         $t0, 0x30($a0)
    ctx->pc = 0x139a18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139a1c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x139a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x139a20: 0x30070007  andi        $a3, $zero, 0x7
    ctx->pc = 0x139a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x139a24: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x139a24u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x139a28: 0x7c040  sll         $t8, $a3, 1
    ctx->pc = 0x139a28u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x139a2c: 0x2411fff1  addiu       $s1, $zero, -0xF
    ctx->pc = 0x139a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x139a30: 0x300700ff  andi        $a3, $zero, 0xFF
    ctx->pc = 0x139a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x139a34: 0x240ff00f  addiu       $t7, $zero, -0xFF1
    ctx->pc = 0x139a34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x139a38: 0x78100  sll         $s0, $a3, 4
    ctx->pc = 0x139a38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x139a3c: 0x240dffcf  addiu       $t5, $zero, -0x31
    ctx->pc = 0x139a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x139a40: 0x30070001  andi        $a3, $zero, 0x1
    ctx->pc = 0x139a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x139a44: 0x640e0010  daddiu      $t6, $zero, 0x10
    ctx->pc = 0x139a44u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x139a48: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x139a48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x139a4c: 0x240bffbf  addiu       $t3, $zero, -0x41
    ctx->pc = 0x139a4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x139a50: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x139a50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x139a54: 0x76180  sll         $t4, $a3, 6
    ctx->pc = 0x139a54u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x139a58: 0xa0880030  sb          $t0, 0x30($a0)
    ctx->pc = 0x139a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 8));
    // 0x139a5c: 0x751c0  sll         $t2, $a3, 7
    ctx->pc = 0x139a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x139a60: 0x90990030  lbu         $t9, 0x30($a0)
    ctx->pc = 0x139a60u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139a64: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x139a64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x139a68: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x139a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x139a6c: 0x64080004  daddiu      $t0, $zero, 0x4
    ctx->pc = 0x139a6cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x139a70: 0x3318824  and         $s1, $t9, $s1
    ctx->pc = 0x139a70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & GPR_U64(ctx, 17));
    // 0x139a74: 0x2388825  or          $s1, $s1, $t8
    ctx->pc = 0x139a74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 24));
    // 0x139a78: 0xa0910030  sb          $s1, 0x30($a0)
    ctx->pc = 0x139a78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 17));
    // 0x139a7c: 0x94910030  lhu         $s1, 0x30($a0)
    ctx->pc = 0x139a7cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x139a80: 0x22f7824  and         $t7, $s1, $t7
    ctx->pc = 0x139a80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x139a84: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x139a84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x139a88: 0xa48f0030  sh          $t7, 0x30($a0)
    ctx->pc = 0x139a88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 15));
    // 0x139a8c: 0x908f0031  lbu         $t7, 0x31($a0)
    ctx->pc = 0x139a8cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139a90: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x139a90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x139a94: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x139a94u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x139a98: 0xa08d0031  sb          $t5, 0x31($a0)
    ctx->pc = 0x139a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 13));
    // 0x139a9c: 0x908d0031  lbu         $t5, 0x31($a0)
    ctx->pc = 0x139a9cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139aa0: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x139aa0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x139aa4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x139aa4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x139aa8: 0xa08b0031  sb          $t3, 0x31($a0)
    ctx->pc = 0x139aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 11));
    // 0x139aac: 0x908b0031  lbu         $t3, 0x31($a0)
    ctx->pc = 0x139aacu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x139ab0: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x139ab0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x139ab4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x139ab4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x139ab8: 0xa0890031  sb          $t1, 0x31($a0)
    ctx->pc = 0x139ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 9));
    // 0x139abc: 0x90890032  lbu         $t1, 0x32($a0)
    ctx->pc = 0x139abcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x139ac0: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x139ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x139ac4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x139ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x139ac8: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x139ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x139acc: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x139accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x139ad0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x139ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x139ad4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x139ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x139ad8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x139AD8u;
    {
        const bool branch_taken_0x139ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AD8u;
        // 0x139adc: 0xa0830032  sb          $v1, 0x32($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ad8) {
            ctx->pc = 0x139B9Cu;
            return;
        }
    }
    ctx->pc = 0x139AE0u;
}
