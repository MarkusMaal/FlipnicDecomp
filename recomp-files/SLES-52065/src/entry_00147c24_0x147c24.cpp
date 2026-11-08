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

// Function: entry_00147c24
// Address: 0x147c24 - 0x147c94
void entry_00147c24_0x147c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147c24_0x147c24");
#endif

    ctx->pc = 0x147c24u;

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
            return;
        }
    }
    ctx->pc = 0x147C94u;
}
