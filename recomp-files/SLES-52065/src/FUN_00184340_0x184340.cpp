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

// Function: FUN_00184340
// Address: 0x184340 - 0x184458
void FUN_00184340_0x184340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00184340_0x184340");
#endif

    switch (ctx->pc) {
        case 0x184404u: goto label_184404;
        case 0x184420u: goto label_184420;
        case 0x18443cu: goto label_18443c;
        default: break;
    }

    ctx->pc = 0x184340u;

    // 0x184340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x184340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x184344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x184344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x184348: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x184348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18434c: 0x838286b8  lb          $v0, -0x7948($gp)
    ctx->pc = 0x18434cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x184350: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x184350u;
    {
        const bool branch_taken_0x184350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184350u;
        // 0x184354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184350) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184358u;
    // 0x184358: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18435c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18435cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x184360: 0xa0208fe2  sb          $zero, -0x701E($at)
    ctx->pc = 0x184360u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368FE2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368FE2u, _value); } while (0);
    // 0x184364: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x184364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x184368: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x184368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18436c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184370: 0xfc229008  sd          $v0, -0x6FF8($at)
    ctx->pc = 0x184370u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369008u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369008u, _value); } while (0);
    // 0x184374: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x184374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x184378: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x184378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18437c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184380: 0xa0228fe3  sb          $v0, -0x701D($at)
    ctx->pc = 0x184380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FE3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368FE3u, _value); } while (0);
    // 0x184384: 0x24050a00  addiu       $a1, $zero, 0xA00
    ctx->pc = 0x184384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x184388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18438c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18438cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184390: 0xa4228fe0  sh          $v0, -0x7020($at)
    ctx->pc = 0x184390u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368FE0u, _value); } while (0);
    // 0x184394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184398: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18439c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1843a0: 0xac208fe4  sw          $zero, -0x701C($at)
    ctx->pc = 0x1843a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368FE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368FE4u, _value); } while (0);
    // 0x1843a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1843a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1843a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1843ac: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1843acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843b0: 0xac238fe8  sw          $v1, -0x7018($at)
    ctx->pc = 0x1843b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368FE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368FE8u, _value); } while (0);
    // 0x1843b4: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x1843b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1843b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1843b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1843bc: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1843bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1843c0: 0xac228fec  sw          $v0, -0x7014($at)
    ctx->pc = 0x1843c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368FECu, _value); } while (0);
    // 0x1843c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1843c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1843c8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1843c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1843cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1843ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1843d0: 0xfc228ff8  sd          $v0, -0x7008($at)
    ctx->pc = 0x1843d0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368FF8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368FF8u, _value); } while (0);
    // 0x1843d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1843d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1843d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1843d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1843dc: 0x24849000  addiu       $a0, $a0, -0x7000
    ctx->pc = 0x1843dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938624));
    // 0x1843e0: 0xfc238ff0  sd          $v1, -0x7010($at)
    ctx->pc = 0x1843e0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368FF0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368FF0u, _value); } while (0);
    // 0x1843e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1843e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843e8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1843e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1843ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1843ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843f0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1843f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1843f4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1843f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1843f8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1843f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1843fc: 0xc061060  jal         func_184180
    ctx->pc = 0x1843FCu;
    SET_GPR_U32(ctx, 31, 0x184404u);
    ctx->pc = 0x184400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843FCu;
    // 0x184400: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184180u, 0x1843FCu, 0x184404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184404u;
label_184404:
    // 0x184404: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x184404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x184408: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x184408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18440c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18440cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x184410: 0x24848fe0  addiu       $a0, $a0, -0x7020
    ctx->pc = 0x184410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938592));
    // 0x184414: 0x24a54460  addiu       $a1, $a1, 0x4460
    ctx->pc = 0x184414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17504));
    // 0x184418: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x184418u;
    SET_GPR_U32(ctx, 31, 0x184420u);
    ctx->pc = 0x18441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184418u;
    // 0x18441c: 0x24c68fd0  addiu       $a2, $a2, -0x7030 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x184418u, 0x184420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184420u;
label_184420:
    // 0x184420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184424: 0xa38286b8  sb          $v0, -0x7948($gp)
    ctx->pc = 0x184424u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936248), (uint8_t)GPR_U32(ctx, 2));
label_184428:
    // 0x184428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x184428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18442c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18442cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x184430: 0x24a58fe0  addiu       $a1, $a1, -0x7020
    ctx->pc = 0x184430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938592));
    // 0x184434: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x184434u;
    SET_GPR_U32(ctx, 31, 0x18443Cu);
    ctx->pc = 0x184438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184434u;
    // 0x184438: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x184434u, 0x18443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18443Cu;
label_18443c:
    // 0x18443c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184440: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x184440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x184444: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x184444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x184448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18444c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18444cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184450: 0x3e00008  jr          $ra
    ctx->pc = 0x184450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184450u;
        // 0x184454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184458u;
}
