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

// Function: FUN_001252c0
// Address: 0x1252c0 - 0x125378
void FUN_001252c0_0x1252c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001252c0_0x1252c0");
#endif

    switch (ctx->pc) {
        case 0x1252d4u: goto label_1252d4;
        default: break;
    }

    ctx->pc = 0x1252c0u;

    // 0x1252c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1252c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1252c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1252c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1252c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1252c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1252cc: 0xc049230  jal         func_1248C0
    ctx->pc = 0x1252CCu;
    SET_GPR_U32(ctx, 31, 0x1252D4u);
    ctx->pc = 0x1252D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252CCu;
    // 0x1252d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1248C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1248C0u, 0x1252CCu, 0x1252D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252D4u;
label_1252d4:
    // 0x1252d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1252d8: 0x300c0001  andi        $t4, $zero, 0x1
    ctx->pc = 0x1252d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1252dc: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x1252dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
    // 0x1252e0: 0x240bfffe  addiu       $t3, $zero, -0x2
    ctx->pc = 0x1252e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1252e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1252e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1252e8: 0x2409ffe3  addiu       $t1, $zero, -0x1D
    ctx->pc = 0x1252e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x1252ec: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1252ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1252f0: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1252f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x1252f4: 0x920d0068  lbu         $t5, 0x68($s0)
    ctx->pc = 0x1252f4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1252f8: 0x25080  sll         $t2, $v0, 2
    ctx->pc = 0x1252f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1252fc: 0x2407fe3f  addiu       $a3, $zero, -0x1C1
    ctx->pc = 0x1252fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x125300: 0x64080140  daddiu      $t0, $zero, 0x140
    ctx->pc = 0x125300u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
    // 0x125304: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x125304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x125308: 0x64060020  daddiu      $a2, $zero, 0x20
    ctx->pc = 0x125308u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x12530c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x12530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x125310: 0xc2040  sll         $a0, $t4, 1
    ctx->pc = 0x125310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x125314: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x125314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125318: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x125318u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x12531c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x12531cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x125320: 0xa20b0068  sb          $t3, 0x68($s0)
    ctx->pc = 0x125320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 11));
    // 0x125324: 0x920b0068  lbu         $t3, 0x68($s0)
    ctx->pc = 0x125324u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x125328: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x12532c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x12532cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x125330: 0xa2090068  sb          $t1, 0x68($s0)
    ctx->pc = 0x125330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 9));
    // 0x125334: 0x96090068  lhu         $t1, 0x68($s0)
    ctx->pc = 0x125334u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x125338: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x125338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x12533c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x12533cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x125340: 0xa6070068  sh          $a3, 0x68($s0)
    ctx->pc = 0x125340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 7));
    // 0x125344: 0x92070068  lbu         $a3, 0x68($s0)
    ctx->pc = 0x125344u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x125348: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x125348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x12534c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x12534cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x125350: 0xa2050068  sb          $a1, 0x68($s0)
    ctx->pc = 0x125350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x125354: 0x92050069  lbu         $a1, 0x69($s0)
    ctx->pc = 0x125354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x125358: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x125358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12535c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x12535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x125360: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x125360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x125364: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x125364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x125368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12536c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12536cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125370: 0x3e00008  jr          $ra
    ctx->pc = 0x125370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125370u;
        // 0x125374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125378u;
}
