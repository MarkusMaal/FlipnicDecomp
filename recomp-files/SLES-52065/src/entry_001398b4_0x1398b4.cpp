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

// Function: entry_001398b4
// Address: 0x1398b4 - 0x139924
void entry_001398b4_0x1398b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001398b4_0x1398b4");
#endif

    ctx->pc = 0x1398b4u;

    // 0x1398b4: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x1398b4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1398b8: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1398b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1398bc: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x1398bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1398c0: 0x30cc0003  andi        $t4, $a2, 0x3
    ctx->pc = 0x1398c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1398c4: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x1398c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1398c8: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x1398c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1398cc: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x1398ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1398d0: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x1398d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1398d4: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x1398d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1398d8: 0x64060040  daddiu      $a2, $zero, 0x40
    ctx->pc = 0x1398d8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1398dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1398dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1398e0: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1398e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1398e4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1398e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1398e8: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x1398e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x1398ec: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x1398ecu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1398f0: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1398f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1398f4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1398f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1398f8: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x1398f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x1398fc: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x1398fcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139900: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x139900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x139904: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x139904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x139908: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x139908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x13990c: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x13990cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139910: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x139910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x139914: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x139914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x139918: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x139918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x13991c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13991Cu;
    {
        const bool branch_taken_0x13991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13991Cu;
        // 0x139920: 0xa0830014  sb          $v1, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13991c) {
            ctx->pc = 0x13998Cu;
            return;
        }
    }
    ctx->pc = 0x139924u;
}
