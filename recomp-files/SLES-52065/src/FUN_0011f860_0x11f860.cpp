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

// Function: FUN_0011f860
// Address: 0x11f860 - 0x11f9b8
void FUN_0011f860_0x11f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f860_0x11f860");
#endif

    ctx->pc = 0x11f860u;

    // 0x11f860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f864: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x11f864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x11f868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11f86c: 0x24428840  addiu       $v0, $v0, -0x77C0
    ctx->pc = 0x11f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
    // 0x11f870: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11f874: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x11f874u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x11f878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f87c: 0x64130010  daddiu      $s3, $zero, 0x10
    ctx->pc = 0x11f87cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x11f880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11f884: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x11f884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x11f888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11f88c: 0x2412ff0f  addiu       $s2, $zero, -0xF1
    ctx->pc = 0x11f88cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x11f890: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11f890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11f894: 0x2410fff3  addiu       $s0, $zero, -0xD
    ctx->pc = 0x11f894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x11f898: 0x94860020  lhu         $a2, 0x20($a0)
    ctx->pc = 0x11f898u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11f89c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x11f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x11f8a0: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x11f8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f8a4: 0x2418ff7f  addiu       $t8, $zero, -0x81
    ctx->pc = 0x11f8a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x11f8a8: 0x64190080  daddiu      $t9, $zero, 0x80
    ctx->pc = 0x11f8a8u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x11f8ac: 0x240efff0  addiu       $t6, $zero, -0x10
    ctx->pc = 0x11f8acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x11f8b0: 0x640f000e  daddiu      $t7, $zero, 0xE
    ctx->pc = 0x11f8b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x11f8b4: 0x240d0050  addiu       $t5, $zero, 0x50
    ctx->pc = 0x11f8b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11f8b8: 0x240c0051  addiu       $t4, $zero, 0x51
    ctx->pc = 0x11f8b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x11f8bc: 0x240b0052  addiu       $t3, $zero, 0x52
    ctx->pc = 0x11f8bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11f8c0: 0x240a0053  addiu       $t2, $zero, 0x53
    ctx->pc = 0x11f8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x11f8c4: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x11f8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x11f8c8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11f8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11f8cc: 0x2407f800  addiu       $a3, $zero, -0x800
    ctx->pc = 0x11f8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x11f8d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11f8d4: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x11f8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x11f8d8: 0xa4820020  sh          $v0, 0x20($a0)
    ctx->pc = 0x11f8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f8dc: 0x300807ff  andi        $t0, $zero, 0x7FF
    ctx->pc = 0x11f8dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x11f8e0: 0x90940027  lbu         $s4, 0x27($a0)
    ctx->pc = 0x11f8e0u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x11f8e4: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x11f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x11f8e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11f8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8ec: 0x2929024  and         $s2, $s4, $s2
    ctx->pc = 0x11f8ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 18));
    // 0x11f8f0: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x11f8f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
    // 0x11f8f4: 0xa0920027  sb          $s2, 0x27($a0)
    ctx->pc = 0x11f8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 18));
    // 0x11f8f8: 0x90920027  lbu         $s2, 0x27($a0)
    ctx->pc = 0x11f8f8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x11f8fc: 0x2508024  and         $s0, $s2, $s0
    ctx->pc = 0x11f8fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x11f900: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x11f900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x11f904: 0xa0900027  sb          $s0, 0x27($a0)
    ctx->pc = 0x11f904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 16));
    // 0x11f908: 0x90900021  lbu         $s0, 0x21($a0)
    ctx->pc = 0x11f908u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x11f90c: 0x218c024  and         $t8, $s0, $t8
    ctx->pc = 0x11f90cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 16) & GPR_U64(ctx, 24));
    // 0x11f910: 0x319c025  or          $t8, $t8, $t9
    ctx->pc = 0x11f910u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 25));
    // 0x11f914: 0xa0980021  sb          $t8, 0x21($a0)
    ctx->pc = 0x11f914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 24));
    // 0x11f918: 0x90980028  lbu         $t8, 0x28($a0)
    ctx->pc = 0x11f918u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x11f91c: 0x30e7024  and         $t6, $t8, $t6
    ctx->pc = 0x11f91cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & GPR_U64(ctx, 14));
    // 0x11f920: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x11f920u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11f924: 0xa08e0028  sb          $t6, 0x28($a0)
    ctx->pc = 0x11f924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 14));
    // 0x11f928: 0xfc8d0038  sd          $t5, 0x38($a0)
    ctx->pc = 0x11f928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 13));
    // 0x11f92c: 0xfc8c0048  sd          $t4, 0x48($a0)
    ctx->pc = 0x11f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 12));
    // 0x11f930: 0xfc8b0058  sd          $t3, 0x58($a0)
    ctx->pc = 0x11f930u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 11));
    // 0x11f934: 0xfc8a0068  sd          $t2, 0x68($a0)
    ctx->pc = 0x11f934u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 10));
    // 0x11f938: 0x908a0060  lbu         $t2, 0x60($a0)
    ctx->pc = 0x11f938u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x11f93c: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x11f93cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x11f940: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x11f940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x11f944: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x11f944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f948: 0x94830040  lhu         $v1, 0x40($a0)
    ctx->pc = 0x11f948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11f94c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x11f94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x11f950: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x11f950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x11f954: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x11f954u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x11f958: 0x94830042  lhu         $v1, 0x42($a0)
    ctx->pc = 0x11f958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x11f95c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x11f95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x11f960: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x11f960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x11f964: 0xa4830042  sh          $v1, 0x42($a0)
    ctx->pc = 0x11f964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x11f968: 0x94830044  lhu         $v1, 0x44($a0)
    ctx->pc = 0x11f968u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x11f96c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x11f96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x11f970: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x11f970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x11f974: 0xa4830044  sh          $v1, 0x44($a0)
    ctx->pc = 0x11f974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x11f978: 0x94830046  lhu         $v1, 0x46($a0)
    ctx->pc = 0x11f978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x11f97c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x11f97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x11f980: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x11f980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x11f984: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x11f984u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x11f988: 0x90830047  lbu         $v1, 0x47($a0)
    ctx->pc = 0x11f988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 71)));
    // 0x11f98c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11f98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x11f990: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x11f990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x11f994: 0xa0830047  sb          $v1, 0x47($a0)
    ctx->pc = 0x11f994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f998: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x11f998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x11f99c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11f99cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f9a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11f9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f9a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f9a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11f9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11F9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9B0u;
        // 0x11f9b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F9B8u;
}
