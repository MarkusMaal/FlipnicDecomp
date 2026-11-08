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

// Function: FUN_001b5160
// Address: 0x1b5160 - 0x1b5268
void FUN_001b5160_0x1b5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5160_0x1b5160");
#endif

    switch (ctx->pc) {
        case 0x1b5184u: goto label_1b5184;
        case 0x1b519cu: goto label_1b519c;
        case 0x1b51e4u: goto label_1b51e4;
        case 0x1b51f0u: goto label_1b51f0;
        case 0x1b51f8u: goto label_1b51f8;
        case 0x1b5204u: goto label_1b5204;
        case 0x1b5214u: goto label_1b5214;
        case 0x1b5220u: goto label_1b5220;
        case 0x1b5228u: goto label_1b5228;
        case 0x1b5234u: goto label_1b5234;
        default: break;
    }

    ctx->pc = 0x1b5160u;

    // 0x1b5160: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1b5164: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b516c: 0x8022e788  lb          $v0, -0x1878($at)
    ctx->pc = 0x1b516cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36E788u));
    // 0x1b5170: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5170u;
    {
        const bool branch_taken_0x1b5170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5170) {
            ctx->pc = 0x1B51A8u;
            goto label_1b51a8;
        }
    }
    ctx->pc = 0x1B5178u;
    // 0x1b5178: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b517c: 0xc04698c  jal         func_11A630
    ctx->pc = 0x1B517Cu;
    SET_GPR_U32(ctx, 31, 0x1B5184u);
    ctx->pc = 0x1B5180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B517Cu;
    // 0x1b5180: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A630u, 0x1B517Cu, 0x1B5184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5184u;
label_1b5184:
    // 0x1b5184: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1b5184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1b5188: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b5188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b518c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5190: 0x24a5a8a0  addiu       $a1, $a1, -0x5760
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944928));
    // 0x1b5194: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1B5194u;
    SET_GPR_U32(ctx, 31, 0x1B519Cu);
    ctx->pc = 0x1B5198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5194u;
    // 0x1b5198: 0x24c6e778  addiu       $a2, $a2, -0x1888 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B5194u, 0x1B519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B519Cu;
label_1b519c:
    // 0x1b519c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b51a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51a4: 0xa022e788  sb          $v0, -0x1878($at)
    ctx->pc = 0x1b51a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36E788u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E788u, _value); } while (0);
label_1b51a8:
    // 0x1b51a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51ac: 0x8022ece0  lb          $v0, -0x1320($at)
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36ECE0u));
    // 0x1b51b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B51B0u;
    {
        const bool branch_taken_0x1b51b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51b0) {
            ctx->pc = 0x1B51CCu;
            goto label_1b51cc;
        }
    }
    ctx->pc = 0x1B51B8u;
    // 0x1b51b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b51c0: 0xa020ecd8  sb          $zero, -0x1328($at)
    ctx->pc = 0x1b51c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36ECD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36ECD8u, _value); } while (0);
    // 0x1b51c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51c8: 0xa022ece0  sb          $v0, -0x1320($at)
    ctx->pc = 0x1b51c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36ECE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36ECE0u, _value); } while (0);
label_1b51cc:
    // 0x1b51cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51d0: 0x9022ecd8  lbu         $v0, -0x1328($at)
    ctx->pc = 0x1b51d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36ECD8u));
    // 0x1b51d4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B51D4u;
    {
        const bool branch_taken_0x1b51d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51d4) {
            ctx->pc = 0x1B5254u;
            goto label_1b5254;
        }
    }
    ctx->pc = 0x1B51DCu;
    // 0x1b51dc: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B51DCu;
    SET_GPR_U32(ctx, 31, 0x1B51E4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B51DCu, 0x1B51E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51E4u;
label_1b51e4:
    // 0x1b51e4: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x1b51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1b51e8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B51E8u;
    SET_GPR_U32(ctx, 31, 0x1B51F0u);
    ctx->pc = 0x1B51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51E8u;
    // 0x1b51ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B51E8u, 0x1B51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51F0u;
label_1b51f0:
    // 0x1b51f0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B51F0u;
    SET_GPR_U32(ctx, 31, 0x1B51F8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B51F0u, 0x1B51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51F8u;
label_1b51f8:
    // 0x1b51f8: 0x24450264  addiu       $a1, $v0, 0x264
    ctx->pc = 0x1b51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 612));
    // 0x1b51fc: 0xc080664  jal         func_201990
    ctx->pc = 0x1B51FCu;
    SET_GPR_U32(ctx, 31, 0x1B5204u);
    ctx->pc = 0x1B5200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51FCu;
    // 0x1b5200: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B51FCu, 0x1B5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5204u;
label_1b5204:
    // 0x1b5204: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5208: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b520c: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x1B520Cu;
    SET_GPR_U32(ctx, 31, 0x1B5214u);
    ctx->pc = 0x1B5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B520Cu;
    // 0x1b5210: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1B520Cu, 0x1B5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5214u;
label_1b5214:
    // 0x1b5214: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5218: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5218u;
    SET_GPR_U32(ctx, 31, 0x1B5220u);
    ctx->pc = 0x1B521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5218u;
    // 0x1b521c: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5218u, 0x1B5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5220u;
label_1b5220:
    // 0x1b5220: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5220u;
    {
        const bool branch_taken_0x1b5220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5220) {
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B5228u;
label_1b5228:
    // 0x1b5228: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b522c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B522Cu;
    SET_GPR_U32(ctx, 31, 0x1B5234u);
    ctx->pc = 0x1B5230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B522Cu;
    // 0x1b5230: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B522Cu, 0x1B5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5234u;
label_1b5234:
    // 0x1b5234: 0x0  nop
    ctx->pc = 0x1b5234u;
    // NOP
    // 0x1b5238: 0x0  nop
    ctx->pc = 0x1b5238u;
    // NOP
    // 0x1b523c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B523Cu;
    {
        const bool branch_taken_0x1b523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b523c) {
            ctx->pc = 0x1B5228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5228;
        }
    }
    ctx->pc = 0x1B5244u;
label_1b5244:
    // 0x1b5244: 0x0  nop
    ctx->pc = 0x1b5244u;
    // NOP
    // 0x1b5248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b524c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5250: 0xa022ecd8  sb          $v0, -0x1328($at)
    ctx->pc = 0x1b5250u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36ECD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36ECD8u, _value); } while (0);
label_1b5254:
    // 0x1b5254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5258: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b525c: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x1b525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x1b5260: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5260u;
        // 0x1b5264: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5268u;
}
