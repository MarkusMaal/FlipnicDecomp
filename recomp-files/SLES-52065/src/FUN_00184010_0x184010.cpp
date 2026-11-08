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

// Function: FUN_00184010
// Address: 0x184010 - 0x184128
void FUN_00184010_0x184010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00184010_0x184010");
#endif

    switch (ctx->pc) {
        case 0x1840d4u: goto label_1840d4;
        case 0x1840f0u: goto label_1840f0;
        case 0x18410cu: goto label_18410c;
        default: break;
    }

    ctx->pc = 0x184010u;

    // 0x184010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x184010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x184014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x184014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x184018: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x184018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18401c: 0x838286b4  lb          $v0, -0x794C($gp)
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x184020: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x184020u;
    {
        const bool branch_taken_0x184020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184020u;
        // 0x184024: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184020) {
            ctx->pc = 0x1840F8u;
            goto label_1840f8;
        }
    }
    ctx->pc = 0x184028u;
    // 0x184028: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18402c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18402cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x184030: 0xa0208fa2  sb          $zero, -0x705E($at)
    ctx->pc = 0x184030u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368FA2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368FA2u, _value); } while (0);
    // 0x184034: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x184038: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18403c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18403cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184040: 0xfc228fc8  sd          $v0, -0x7038($at)
    ctx->pc = 0x184040u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FC8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368FC8u, _value); } while (0);
    // 0x184044: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x184044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x184048: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x184048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18404c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18404cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184050: 0xa0228fa3  sb          $v0, -0x705D($at)
    ctx->pc = 0x184050u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FA3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368FA3u, _value); } while (0);
    // 0x184054: 0x24050a00  addiu       $a1, $zero, 0xA00
    ctx->pc = 0x184054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x184058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18405c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18405cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184060: 0xa4228fa0  sh          $v0, -0x7060($at)
    ctx->pc = 0x184060u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368FA0u, _value); } while (0);
    // 0x184064: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x184064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x184068: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18406c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x184070: 0xac208fa4  sw          $zero, -0x705C($at)
    ctx->pc = 0x184070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368FA4u, _value); } while (0);
    // 0x184074: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x184074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x184078: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18407c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18407cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184080: 0xac238fa8  sw          $v1, -0x7058($at)
    ctx->pc = 0x184080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368FA8u, _value); } while (0);
    // 0x184084: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x184084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184088: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18408c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x18408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x184090: 0xac228fac  sw          $v0, -0x7054($at)
    ctx->pc = 0x184090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368FACu, _value); } while (0);
    // 0x184094: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x184094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x184098: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x184098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18409c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1840a0: 0xfc228fb8  sd          $v0, -0x7048($at)
    ctx->pc = 0x1840a0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FB8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368FB8u, _value); } while (0);
    // 0x1840a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1840a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1840a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1840a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1840ac: 0x24848fc0  addiu       $a0, $a0, -0x7040
    ctx->pc = 0x1840acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938560));
    // 0x1840b0: 0xfc238fb0  sd          $v1, -0x7050($at)
    ctx->pc = 0x1840b0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368FB0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368FB0u, _value); } while (0);
    // 0x1840b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1840b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840b8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1840b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1840bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1840bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840c0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1840c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1840c4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1840c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1840c8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1840c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1840cc: 0xc061060  jal         func_184180
    ctx->pc = 0x1840CCu;
    SET_GPR_U32(ctx, 31, 0x1840D4u);
    ctx->pc = 0x1840D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840CCu;
    // 0x1840d0: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184180u, 0x1840CCu, 0x1840D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840D4u;
label_1840d4:
    // 0x1840d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1840d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1840d8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1840d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1840dc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1840dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1840e0: 0x24848fa0  addiu       $a0, $a0, -0x7060
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938528));
    // 0x1840e4: 0x24a54130  addiu       $a1, $a1, 0x4130
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16688));
    // 0x1840e8: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1840E8u;
    SET_GPR_U32(ctx, 31, 0x1840F0u);
    ctx->pc = 0x1840ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840E8u;
    // 0x1840ec: 0x24c68f90  addiu       $a2, $a2, -0x7070 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1840E8u, 0x1840F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840F0u;
label_1840f0:
    // 0x1840f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1840f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1840f4: 0xa38286b4  sb          $v0, -0x794C($gp)
    ctx->pc = 0x1840f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936244), (uint8_t)GPR_U32(ctx, 2));
label_1840f8:
    // 0x1840f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1840f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1840fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x184100: 0x24a58fa0  addiu       $a1, $a1, -0x7060
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938528));
    // 0x184104: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x184104u;
    SET_GPR_U32(ctx, 31, 0x18410Cu);
    ctx->pc = 0x184108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184104u;
    // 0x184108: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x184104u, 0x18410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18410Cu;
label_18410c:
    // 0x18410c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184110: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x184114: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x184114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x184118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18411c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18411cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184120: 0x3e00008  jr          $ra
    ctx->pc = 0x184120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184120u;
        // 0x184124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184128u;
}
