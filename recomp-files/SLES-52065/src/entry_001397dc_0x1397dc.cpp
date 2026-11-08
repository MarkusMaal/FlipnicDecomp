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

// Function: entry_001397dc
// Address: 0x1397dc - 0x139850
void entry_001397dc_0x1397dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001397dc_0x1397dc");
#endif

    ctx->pc = 0x1397dcu;

    // 0x1397dc: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x1397dcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1397e0: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x1397e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1397e4: 0x300c0003  andi        $t4, $zero, 0x3
    ctx->pc = 0x1397e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1397e8: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x1397e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1397ec: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x1397ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1397f0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1397f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1397f4: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x1397f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1397f8: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x1397f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1397fc: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x1397fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x139800: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x139800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x139804: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x139804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x139808: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13980c: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x13980cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x139810: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x139810u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x139814: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x139814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x139818: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x139818u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13981c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x13981cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x139820: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x139820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x139824: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x139824u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x139828: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x139828u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13982c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x13982cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x139830: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x139830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x139834: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x139834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x139838: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x139838u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13983c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13983cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x139840: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x139840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x139844: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x139844u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x139848: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x139848u;
    {
        const bool branch_taken_0x139848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139848u;
        // 0x13984c: 0xa0830014  sb          $v1, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139848) {
            ctx->pc = 0x13998Cu;
            return;
        }
    }
    ctx->pc = 0x139850u;
}
