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

// Function: entry_00147d78
// Address: 0x147d78 - 0x147e40
void entry_00147d78_0x147d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147d78_0x147d78");
#endif

    ctx->pc = 0x147d78u;

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
            return;
        }
    }
    ctx->pc = 0x147E40u;
}
