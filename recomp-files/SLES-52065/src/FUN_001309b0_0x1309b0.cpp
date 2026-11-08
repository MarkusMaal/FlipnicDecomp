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

// Function: FUN_001309b0
// Address: 0x1309b0 - 0x130a6c
void FUN_001309b0_0x1309b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001309b0_0x1309b0");
#endif

    switch (ctx->pc) {
        case 0x1309b0u: goto label_1309b0;
        case 0x1309b4u: goto label_1309b4;
        case 0x1309b8u: goto label_1309b8;
        case 0x1309bcu: goto label_1309bc;
        case 0x1309c0u: goto label_1309c0;
        case 0x1309c4u: goto label_1309c4;
        case 0x1309c8u: goto label_1309c8;
        case 0x1309ccu: goto label_1309cc;
        case 0x1309d0u: goto label_1309d0;
        case 0x1309d4u: goto label_1309d4;
        case 0x1309d8u: goto label_1309d8;
        case 0x1309dcu: goto label_1309dc;
        case 0x1309e0u: goto label_1309e0;
        case 0x1309e4u: goto label_1309e4;
        case 0x1309e8u: goto label_1309e8;
        case 0x1309ecu: goto label_1309ec;
        case 0x1309f0u: goto label_1309f0;
        case 0x1309f4u: goto label_1309f4;
        case 0x1309f8u: goto label_1309f8;
        case 0x1309fcu: goto label_1309fc;
        case 0x130a00u: goto label_130a00;
        case 0x130a04u: goto label_130a04;
        case 0x130a08u: goto label_130a08;
        case 0x130a0cu: goto label_130a0c;
        case 0x130a10u: goto label_130a10;
        case 0x130a14u: goto label_130a14;
        case 0x130a18u: goto label_130a18;
        case 0x130a1cu: goto label_130a1c;
        case 0x130a20u: goto label_130a20;
        case 0x130a24u: goto label_130a24;
        case 0x130a28u: goto label_130a28;
        case 0x130a2cu: goto label_130a2c;
        case 0x130a30u: goto label_130a30;
        case 0x130a34u: goto label_130a34;
        case 0x130a38u: goto label_130a38;
        case 0x130a3cu: goto label_130a3c;
        case 0x130a40u: goto label_130a40;
        case 0x130a44u: goto label_130a44;
        case 0x130a48u: goto label_130a48;
        case 0x130a4cu: goto label_130a4c;
        case 0x130a50u: goto label_130a50;
        case 0x130a54u: goto label_130a54;
        case 0x130a58u: goto label_130a58;
        case 0x130a5cu: goto label_130a5c;
        case 0x130a60u: goto label_130a60;
        case 0x130a64u: goto label_130a64;
        case 0x130a68u: goto label_130a68;
        default: break;
    }

    ctx->pc = 0x1309b0u;

label_1309b0:
    // 0x1309b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1309b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1309b4:
    // 0x1309b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1309b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1309b8:
    // 0x1309b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1309b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1309bc:
    // 0x1309bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1309bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1309c0:
    // 0x1309c0: 0xc0512c8  jal         func_144B20
label_1309c4:
    if (ctx->pc == 0x1309C4u) {
        ctx->pc = 0x1309C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309C0u;
        // 0x1309c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309C8u;
        goto label_1309c8;
    }
    ctx->pc = 0x1309C0u;
    SET_GPR_U32(ctx, 31, 0x1309C8u);
    ctx->pc = 0x1309C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309C0u;
    // 0x1309c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1309C0u, 0x1309C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309C8u;
label_1309c8:
    // 0x1309c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1309c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1309cc:
    // 0x1309cc: 0xc0512c4  jal         func_144B10
label_1309d0:
    if (ctx->pc == 0x1309D0u) {
        ctx->pc = 0x1309D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309CCu;
        // 0x1309d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309D4u;
        goto label_1309d4;
    }
    ctx->pc = 0x1309CCu;
    SET_GPR_U32(ctx, 31, 0x1309D4u);
    ctx->pc = 0x1309D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309CCu;
    // 0x1309d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B10u, 0x1309CCu, 0x1309D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309D4u;
label_1309d4:
    // 0x1309d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1309d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1309d8:
    // 0x1309d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1309d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1309dc:
    // 0x1309dc: 0xc051324  jal         func_144C90
label_1309e0:
    if (ctx->pc == 0x1309E0u) {
        ctx->pc = 0x1309E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309DCu;
        // 0x1309e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309E4u;
        goto label_1309e4;
    }
    ctx->pc = 0x1309DCu;
    SET_GPR_U32(ctx, 31, 0x1309E4u);
    ctx->pc = 0x1309E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309DCu;
    // 0x1309e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C90u, 0x1309DCu, 0x1309E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309E4u;
label_1309e4:
    // 0x1309e4: 0xc0513a0  jal         func_144E80
label_1309e8:
    if (ctx->pc == 0x1309E8u) {
        ctx->pc = 0x1309E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309E4u;
        // 0x1309e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309ECu;
        goto label_1309ec;
    }
    ctx->pc = 0x1309E4u;
    SET_GPR_U32(ctx, 31, 0x1309ECu);
    ctx->pc = 0x1309E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309E4u;
    // 0x1309e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E80u, 0x1309E4u, 0x1309ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309ECu;
label_1309ec:
    // 0x1309ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1309ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1309f0:
    // 0x1309f0: 0xc04d030  jal         func_1340C0
label_1309f4:
    if (ctx->pc == 0x1309F4u) {
        ctx->pc = 0x1309F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309F0u;
        // 0x1309f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309F8u;
        goto label_1309f8;
    }
    ctx->pc = 0x1309F0u;
    SET_GPR_U32(ctx, 31, 0x1309F8u);
    ctx->pc = 0x1309F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309F0u;
    // 0x1309f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1340C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1340C0u, 0x1309F0u, 0x1309F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309F8u;
label_1309f8:
    // 0x1309f8: 0xc04d988  jal         func_136620
label_1309fc:
    if (ctx->pc == 0x1309FCu) {
        ctx->pc = 0x130A00u;
        goto label_130a00;
    }
    ctx->pc = 0x1309F8u;
    SET_GPR_U32(ctx, 31, 0x130A00u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1309F8u, 0x130A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A00u;
label_130a00:
    // 0x130a00: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x130a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_130a04:
    // 0x130a04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130a08:
    // 0x130a08: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x130a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_130a0c:
    // 0x130a0c: 0x320f809  jalr        $t9
label_130a10:
    if (ctx->pc == 0x130A10u) {
        ctx->pc = 0x130A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A0Cu;
        // 0x130a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A14u;
        goto label_130a14;
    }
    ctx->pc = 0x130A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x130A14u);
        ctx->pc = 0x130A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A0Cu;
        // 0x130a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A0Cu, 0x130A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x130A14u;
label_130a14:
    // 0x130a14: 0xc04d988  jal         func_136620
label_130a18:
    if (ctx->pc == 0x130A18u) {
        ctx->pc = 0x130A1Cu;
        goto label_130a1c;
    }
    ctx->pc = 0x130A14u;
    SET_GPR_U32(ctx, 31, 0x130A1Cu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x130A14u, 0x130A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A1Cu;
label_130a1c:
    // 0x130a1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x130a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_130a20:
    // 0x130a20: 0xc04c72c  jal         func_131CB0
label_130a24:
    if (ctx->pc == 0x130A24u) {
        ctx->pc = 0x130A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A20u;
        // 0x130a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A28u;
        goto label_130a28;
    }
    ctx->pc = 0x130A20u;
    SET_GPR_U32(ctx, 31, 0x130A28u);
    ctx->pc = 0x130A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A20u;
    // 0x130a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x130A20u, 0x130A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A28u;
label_130a28:
    // 0x130a28: 0xc04d988  jal         func_136620
label_130a2c:
    if (ctx->pc == 0x130A2Cu) {
        ctx->pc = 0x130A30u;
        goto label_130a30;
    }
    ctx->pc = 0x130A28u;
    SET_GPR_U32(ctx, 31, 0x130A30u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x130A28u, 0x130A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A30u;
label_130a30:
    // 0x130a30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x130a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_130a34:
    // 0x130a34: 0xc04c72c  jal         func_131CB0
label_130a38:
    if (ctx->pc == 0x130A38u) {
        ctx->pc = 0x130A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A34u;
        // 0x130a38: 0x8c440080  lw          $a0, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A3Cu;
        goto label_130a3c;
    }
    ctx->pc = 0x130A34u;
    SET_GPR_U32(ctx, 31, 0x130A3Cu);
    ctx->pc = 0x130A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A34u;
    // 0x130a38: 0x8c440080  lw          $a0, 0x80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x130A34u, 0x130A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A3Cu;
label_130a3c:
    // 0x130a3c: 0xc04d988  jal         func_136620
label_130a40:
    if (ctx->pc == 0x130A40u) {
        ctx->pc = 0x130A44u;
        goto label_130a44;
    }
    ctx->pc = 0x130A3Cu;
    SET_GPR_U32(ctx, 31, 0x130A44u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x130A3Cu, 0x130A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A44u;
label_130a44:
    // 0x130a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x130a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_130a48:
    // 0x130a48: 0xc04c72c  jal         func_131CB0
label_130a4c:
    if (ctx->pc == 0x130A4Cu) {
        ctx->pc = 0x130A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A48u;
        // 0x130a4c: 0x8c440084  lw          $a0, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A50u;
        goto label_130a50;
    }
    ctx->pc = 0x130A48u;
    SET_GPR_U32(ctx, 31, 0x130A50u);
    ctx->pc = 0x130A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A48u;
    // 0x130a4c: 0x8c440084  lw          $a0, 0x84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x130A48u, 0x130A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A50u;
label_130a50:
    // 0x130a50: 0xc0513c4  jal         func_144F10
label_130a54:
    if (ctx->pc == 0x130A54u) {
        ctx->pc = 0x130A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A50u;
        // 0x130a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A58u;
        goto label_130a58;
    }
    ctx->pc = 0x130A50u;
    SET_GPR_U32(ctx, 31, 0x130A58u);
    ctx->pc = 0x130A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A50u;
    // 0x130a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F10u, 0x130A50u, 0x130A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A58u;
label_130a58:
    // 0x130a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_130a5c:
    // 0x130a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_130a60:
    // 0x130a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_130a64:
    // 0x130a64: 0x3e00008  jr          $ra
label_130a68:
    if (ctx->pc == 0x130A68u) {
        ctx->pc = 0x130A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A64u;
        // 0x130a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A6Cu;
        goto label_fallthrough_0x130a64;
    }
    ctx->pc = 0x130A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A64u;
        // 0x130a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x130a64:
    ctx->pc = 0x130A6Cu;
}
