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

// Function: FUN_001b5040
// Address: 0x1b5040 - 0x1b5158
void FUN_001b5040_0x1b5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5040_0x1b5040");
#endif

    switch (ctx->pc) {
        case 0x1b5064u: goto label_1b5064;
        case 0x1b507cu: goto label_1b507c;
        case 0x1b50c4u: goto label_1b50c4;
        case 0x1b50d0u: goto label_1b50d0;
        case 0x1b50d8u: goto label_1b50d8;
        case 0x1b50e4u: goto label_1b50e4;
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b5108u: goto label_1b5108;
        case 0x1b5114u: goto label_1b5114;
        case 0x1b511cu: goto label_1b511c;
        case 0x1b5128u: goto label_1b5128;
        default: break;
    }

    ctx->pc = 0x1b5040u;

    // 0x1b5040: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1b5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1b5044: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b504c: 0x8022e210  lb          $v0, -0x1DF0($at)
    ctx->pc = 0x1b504cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36E210u));
    // 0x1b5050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5050u;
    {
        const bool branch_taken_0x1b5050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5050) {
            ctx->pc = 0x1B5088u;
            goto label_1b5088;
        }
    }
    ctx->pc = 0x1B5058u;
    // 0x1b5058: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b505c: 0xc04698c  jal         func_11A630
    ctx->pc = 0x1B505Cu;
    SET_GPR_U32(ctx, 31, 0x1B5064u);
    ctx->pc = 0x1B5060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B505Cu;
    // 0x1b5060: 0x2484e220  addiu       $a0, $a0, -0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A630u, 0x1B505Cu, 0x1B5064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5064u;
label_1b5064:
    // 0x1b5064: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1b5064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1b5068: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b5068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b506c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5070: 0x24a5a8a0  addiu       $a1, $a1, -0x5760
    ctx->pc = 0x1b5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944928));
    // 0x1b5074: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1B5074u;
    SET_GPR_U32(ctx, 31, 0x1B507Cu);
    ctx->pc = 0x1B5078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5074u;
    // 0x1b5078: 0x24c6e200  addiu       $a2, $a2, -0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B5074u, 0x1B507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B507Cu;
label_1b507c:
    // 0x1b507c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5080: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5084: 0xa022e210  sb          $v0, -0x1DF0($at)
    ctx->pc = 0x1b5084u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36E210u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E210u, _value); } while (0);
label_1b5088:
    // 0x1b5088: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b508c: 0x8022e770  lb          $v0, -0x1890($at)
    ctx->pc = 0x1b508cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36E770u));
    // 0x1b5090: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5090u;
    {
        const bool branch_taken_0x1b5090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5090) {
            ctx->pc = 0x1B50ACu;
            goto label_1b50ac;
        }
    }
    ctx->pc = 0x1B5098u;
    // 0x1b5098: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b509c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50a0: 0xa020e768  sb          $zero, -0x1898($at)
    ctx->pc = 0x1b50a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36E768u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E768u, _value); } while (0);
    // 0x1b50a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b50a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b50a8: 0xa022e770  sb          $v0, -0x1890($at)
    ctx->pc = 0x1b50a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36E770u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E770u, _value); } while (0);
label_1b50ac:
    // 0x1b50ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b50acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b50b0: 0x9022e768  lbu         $v0, -0x1898($at)
    ctx->pc = 0x1b50b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36E768u));
    // 0x1b50b4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B50B4u;
    {
        const bool branch_taken_0x1b50b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b50b4) {
            ctx->pc = 0x1B5144u;
            goto label_1b5144;
        }
    }
    ctx->pc = 0x1B50BCu;
    // 0x1b50bc: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B50BCu;
    SET_GPR_U32(ctx, 31, 0x1B50C4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B50BCu, 0x1B50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50C4u;
label_1b50c4:
    // 0x1b50c4: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x1b50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1b50c8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B50C8u;
    SET_GPR_U32(ctx, 31, 0x1B50D0u);
    ctx->pc = 0x1B50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50C8u;
    // 0x1b50cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B50C8u, 0x1B50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50D0u;
label_1b50d0:
    // 0x1b50d0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B50D0u;
    SET_GPR_U32(ctx, 31, 0x1B50D8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B50D0u, 0x1B50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50D8u;
label_1b50d8:
    // 0x1b50d8: 0x24450264  addiu       $a1, $v0, 0x264
    ctx->pc = 0x1b50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 612));
    // 0x1b50dc: 0xc080664  jal         func_201990
    ctx->pc = 0x1B50DCu;
    SET_GPR_U32(ctx, 31, 0x1B50E4u);
    ctx->pc = 0x1B50E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50DCu;
    // 0x1b50e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B50DCu, 0x1B50E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50E4u;
label_1b50e4:
    // 0x1b50e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b50e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b50ec: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x1B50ECu;
    SET_GPR_U32(ctx, 31, 0x1B50F4u);
    ctx->pc = 0x1B50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50ECu;
    // 0x1b50f0: 0x2484e220  addiu       $a0, $a0, -0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1B50ECu, 0x1B50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50F4u;
label_1b50f4:
    // 0x1b50f4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b50f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b50f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b50fc: 0x2484e220  addiu       $a0, $a0, -0x1DE0
    ctx->pc = 0x1b50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    // 0x1b5100: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x1B5100u;
    SET_GPR_U32(ctx, 31, 0x1B5108u);
    ctx->pc = 0x1B5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5100u;
    // 0x1b5104: 0x24a50d00  addiu       $a1, $a1, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x1B5100u, 0x1B5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5108u;
label_1b5108:
    // 0x1b5108: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b510c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B510Cu;
    SET_GPR_U32(ctx, 31, 0x1B5114u);
    ctx->pc = 0x1B5110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B510Cu;
    // 0x1b5110: 0x2484e220  addiu       $a0, $a0, -0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B510Cu, 0x1B5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5114u;
label_1b5114:
    // 0x1b5114: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5114u;
    {
        const bool branch_taken_0x1b5114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5114) {
            ctx->pc = 0x1B5138u;
            goto label_1b5138;
        }
    }
    ctx->pc = 0x1B511Cu;
label_1b511c:
    // 0x1b511c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b511cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5120: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5120u;
    SET_GPR_U32(ctx, 31, 0x1B5128u);
    ctx->pc = 0x1B5124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5120u;
    // 0x1b5124: 0x2484e220  addiu       $a0, $a0, -0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5120u, 0x1B5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5128u;
label_1b5128:
    // 0x1b5128: 0x0  nop
    ctx->pc = 0x1b5128u;
    // NOP
    // 0x1b512c: 0x0  nop
    ctx->pc = 0x1b512cu;
    // NOP
    // 0x1b5130: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5130u;
    {
        const bool branch_taken_0x1b5130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5130) {
            ctx->pc = 0x1B511Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b511c;
        }
    }
    ctx->pc = 0x1B5138u;
label_1b5138:
    // 0x1b5138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b513c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5140: 0xa022e768  sb          $v0, -0x1898($at)
    ctx->pc = 0x1b5140u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36E768u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E768u, _value); } while (0);
label_1b5144:
    // 0x1b5144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5148: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b514c: 0x2442e220  addiu       $v0, $v0, -0x1DE0
    ctx->pc = 0x1b514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959648));
    // 0x1b5150: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5150u;
        // 0x1b5154: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5158u;
}
