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

// Function: FUN_001248c0
// Address: 0x1248c0 - 0x124970
void FUN_001248c0_0x1248c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001248c0_0x1248c0");
#endif

    switch (ctx->pc) {
        case 0x12494cu: goto label_12494c;
        default: break;
    }

    ctx->pc = 0x1248c0u;

    // 0x1248c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1248c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1248c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1248c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1248c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1248c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1248cc: 0x244288a0  addiu       $v0, $v0, -0x7760
    ctx->pc = 0x1248ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936736));
    // 0x1248d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1248d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1248d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1248d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1248d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1248d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1248dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1248dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e0: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x1248e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
    // 0x1248e4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1248e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1248e8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1248e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1248ec: 0x25140  sll         $t2, $v0, 5
    ctx->pc = 0x1248ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1248f0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1248f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1248f4: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1248f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1248f8: 0x908b0068  lbu         $t3, 0x68($a0)
    ctx->pc = 0x1248f8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1248fc: 0x2409ffdf  addiu       $t1, $zero, -0x21
    ctx->pc = 0x1248fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x124900: 0x2407f000  addiu       $a3, $zero, -0x1000
    ctx->pc = 0x124900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x124904: 0x30080fff  andi        $t0, $zero, 0xFFF
    ctx->pc = 0x124904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)4095);
    // 0x124908: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x124908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x12490c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x12490cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x124910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x124910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124914: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x124914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124918: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x124918u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x12491c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x12491cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x124920: 0xa0890068  sb          $t1, 0x68($a0)
    ctx->pc = 0x124920u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 9));
    // 0x124924: 0x9489006c  lhu         $t1, 0x6C($a0)
    ctx->pc = 0x124924u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x124928: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x124928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x12492c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x12492cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x124930: 0xa487006c  sh          $a3, 0x6C($a0)
    ctx->pc = 0x124930u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 7));
    // 0x124934: 0x9087006a  lbu         $a3, 0x6A($a0)
    ctx->pc = 0x124934u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x124938: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x124938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x12493c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124940: 0xa082006a  sb          $v0, 0x6A($a0)
    ctx->pc = 0x124940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 106), (uint8_t)GPR_U32(ctx, 2));
    // 0x124944: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x124944u;
    SET_GPR_U32(ctx, 31, 0x12494Cu);
    ctx->pc = 0x124948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124944u;
    // 0x124948: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x124944u, 0x12494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12494Cu;
label_12494c:
    // 0x12494c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12494cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x124950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124954: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x124954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x124958: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x124958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12495c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12495cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x124960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124968: 0x3e00008  jr          $ra
    ctx->pc = 0x124968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124968u;
        // 0x12496c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124970u;
}
