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

// Function: FUN_00117f30
// Address: 0x117f30 - 0x118064
void FUN_00117f30_0x117f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117f30_0x117f30");
#endif

    switch (ctx->pc) {
        case 0x117f44u: goto label_117f44;
        case 0x117f4cu: goto label_117f4c;
        case 0x117f54u: goto label_117f54;
        case 0x117f70u: goto label_117f70;
        case 0x117f78u: goto label_117f78;
        case 0x117f80u: goto label_117f80;
        case 0x117f88u: goto label_117f88;
        case 0x117fc4u: goto label_117fc4;
        case 0x117fccu: goto label_117fcc;
        case 0x117ff8u: goto label_117ff8;
        case 0x118004u: goto label_118004;
        case 0x11800cu: goto label_11800c;
        case 0x118014u: goto label_118014;
        case 0x118054u: goto label_118054;
        default: break;
    }

    ctx->pc = 0x117f30u;

    // 0x117f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117f3c: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x117F3Cu;
    SET_GPR_U32(ctx, 31, 0x117F44u);
    ctx->pc = 0x117F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F3Cu;
    // 0x117f40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x117F3Cu, 0x117F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F44u;
label_117f44:
    // 0x117f44: 0xc045cd0  jal         func_117340
    ctx->pc = 0x117F44u;
    SET_GPR_U32(ctx, 31, 0x117F4Cu);
    ctx->pc = 0x117F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F44u;
    // 0x117f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117340u, 0x117F44u, 0x117F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F4Cu;
label_117f4c:
    // 0x117f4c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x117F4Cu;
    SET_GPR_U32(ctx, 31, 0x117F54u);
    ctx->pc = 0x117F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F4Cu;
    // 0x117f50: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x117F4Cu, 0x117F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F54u;
label_117f54:
    // 0x117f54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117F54u;
    {
        const bool branch_taken_0x117f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F54u;
        // 0x117f58: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f54) {
            ctx->pc = 0x117F70u;
            goto label_117f70;
        }
    }
    ctx->pc = 0x117F5Cu;
    // 0x117f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f60: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40
    ctx->pc = 0x117f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
    // 0x117f64: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x117f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x117f68: 0xc04b224  jal         func_12C890
    ctx->pc = 0x117F68u;
    SET_GPR_U32(ctx, 31, 0x117F70u);
    ctx->pc = 0x117F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F68u;
    // 0x117f6c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C890u, 0x117F68u, 0x117F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F70u;
label_117f70:
    // 0x117f70: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x117F70u;
    SET_GPR_U32(ctx, 31, 0x117F78u);
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x117F70u, 0x117F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F78u;
label_117f78:
    // 0x117f78: 0xc04b708  jal         func_12DC20
    ctx->pc = 0x117F78u;
    SET_GPR_U32(ctx, 31, 0x117F80u);
    ctx->pc = 0x117F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F78u;
    // 0x117f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DC20u, 0x117F78u, 0x117F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F80u;
label_117f80:
    // 0x117f80: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x117F80u;
    SET_GPR_U32(ctx, 31, 0x117F88u);
    ctx->pc = 0x117F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F80u;
    // 0x117f84: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x117F80u, 0x117F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F88u;
label_117f88:
    // 0x117f88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117F88u;
    {
        const bool branch_taken_0x117f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F88u;
        // 0x117f8c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f88) {
            ctx->pc = 0x117FB0u;
            goto label_117fb0;
        }
    }
    ctx->pc = 0x117F90u;
    // 0x117f90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x117f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x117f94: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x117f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x117f98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x117f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x117f9c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x117f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x117fa0: 0xa0440048  sb          $a0, 0x48($v0)
    ctx->pc = 0x117fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 4));
    // 0x117fa4: 0xa0440049  sb          $a0, 0x49($v0)
    ctx->pc = 0x117fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x117fa8: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x117fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x117fac: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x117facu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_117fb0:
    // 0x117fb0: 0xaf828380  sw          $v0, -0x7C80($gp)
    ctx->pc = 0x117fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935424), GPR_U32(ctx, 2));
    // 0x117fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fb8: 0x24a5e5c8  addiu       $a1, $a1, -0x1A38
    ctx->pc = 0x117fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960584));
    // 0x117fbc: 0xc06cfa0  jal         func_1B3E80
    ctx->pc = 0x117FBCu;
    SET_GPR_U32(ctx, 31, 0x117FC4u);
    ctx->pc = 0x117FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FBCu;
    // 0x117fc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x117FBCu, 0x117FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FC4u;
label_117fc4:
    // 0x117fc4: 0xc074c46  jal         func_1D3118
    ctx->pc = 0x117FC4u;
    SET_GPR_U32(ctx, 31, 0x117FCCu);
    ctx->pc = 0x117FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FC4u;
    // 0x117fc8: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3118u, 0x117FC4u, 0x117FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FCCu;
label_117fcc:
    // 0x117fcc: 0x8f858380  lw          $a1, -0x7C80($gp)
    ctx->pc = 0x117fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x117fd0: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x117fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x117fd4: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x117fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x117fd8: 0x3c023f55  lui         $v0, 0x3F55
    ctx->pc = 0x117fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16213 << 16));
    // 0x117fdc: 0x34435555  ori         $v1, $v0, 0x5555
    ctx->pc = 0x117fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x117fe0: 0xaf848020  sw          $a0, -0x7FE0($gp)
    ctx->pc = 0x117fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 4));
    // 0x117fe4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x117fe8: 0xaf838024  sw          $v1, -0x7FDC($gp)
    ctx->pc = 0x117fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934564), GPR_U32(ctx, 3));
    // 0x117fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ff0: 0xc046070  jal         func_1181C0
    ctx->pc = 0x117FF0u;
    SET_GPR_U32(ctx, 31, 0x117FF8u);
    ctx->pc = 0x117FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FF0u;
    // 0x117ff4: 0xaf828028  sw          $v0, -0x7FD8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934568), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1181C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1181C0u, 0x117FF0u, 0x117FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FF8u;
label_117ff8:
    // 0x117ff8: 0x8f858380  lw          $a1, -0x7C80($gp)
    ctx->pc = 0x117ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x117ffc: 0xc04610c  jal         func_118430
    ctx->pc = 0x117FFCu;
    SET_GPR_U32(ctx, 31, 0x118004u);
    ctx->pc = 0x118000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FFCu;
    // 0x118000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118430u, 0x117FFCu, 0x118004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118004u;
label_118004:
    // 0x118004: 0xc061810  jal         func_186040
    ctx->pc = 0x118004u;
    SET_GPR_U32(ctx, 31, 0x11800Cu);
    ctx->pc = 0x186040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186040u, 0x118004u, 0x11800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11800Cu;
label_11800c:
    // 0x11800c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x11800Cu;
    SET_GPR_U32(ctx, 31, 0x118014u);
    ctx->pc = 0x118010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11800Cu;
    // 0x118010: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x11800Cu, 0x118014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118014u;
label_118014:
    // 0x118014: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x118014u;
    {
        const bool branch_taken_0x118014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118014u;
        // 0x118018: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118014) {
            ctx->pc = 0x118040u;
            goto label_118040;
        }
    }
    ctx->pc = 0x11801Cu;
    // 0x11801c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11801cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118020: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x118020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x118024: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x118024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x118028: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x118028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x11802c: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x11802cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x118030: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x118030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x118034: 0xa0440049  sb          $a0, 0x49($v0)
    ctx->pc = 0x118034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x118038: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x118038u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x11803c: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x11803cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_118040:
    // 0x118040: 0xaf828384  sw          $v0, -0x7C7C($gp)
    ctx->pc = 0x118040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935428), GPR_U32(ctx, 2));
    // 0x118044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118048: 0x24a5e5d0  addiu       $a1, $a1, -0x1A30
    ctx->pc = 0x118048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960592));
    // 0x11804c: 0xc06cfa0  jal         func_1B3E80
    ctx->pc = 0x11804Cu;
    SET_GPR_U32(ctx, 31, 0x118054u);
    ctx->pc = 0x118050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11804Cu;
    // 0x118050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x11804Cu, 0x118054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118054u;
label_118054:
    // 0x118054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11805c: 0x3e00008  jr          $ra
    ctx->pc = 0x11805Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11805Cu;
        // 0x118060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11805Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118064u;
}
