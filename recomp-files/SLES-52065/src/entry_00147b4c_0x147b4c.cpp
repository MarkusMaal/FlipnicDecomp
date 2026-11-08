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

// Function: entry_00147b4c
// Address: 0x147b4c - 0x147bc0
void entry_00147b4c_0x147b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147b4c_0x147b4c");
#endif

    ctx->pc = 0x147b4cu;

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
            return;
        }
    }
    ctx->pc = 0x147BC0u;
}
