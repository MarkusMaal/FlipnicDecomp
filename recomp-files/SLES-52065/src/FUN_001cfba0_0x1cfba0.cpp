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

// Function: FUN_001cfba0
// Address: 0x1cfba0 - 0x1cfd78
void FUN_001cfba0_0x1cfba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cfba0_0x1cfba0");
#endif

    switch (ctx->pc) {
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfbf4u: goto label_1cfbf4;
        case 0x1cfc08u: goto label_1cfc08;
        case 0x1cfc10u: goto label_1cfc10;
        case 0x1cfc2cu: goto label_1cfc2c;
        case 0x1cfc64u: goto label_1cfc64;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc7cu: goto label_1cfc7c;
        case 0x1cfc90u: goto label_1cfc90;
        case 0x1cfc9cu: goto label_1cfc9c;
        case 0x1cfcacu: goto label_1cfcac;
        case 0x1cfcb4u: goto label_1cfcb4;
        case 0x1cfcd4u: goto label_1cfcd4;
        case 0x1cfce0u: goto label_1cfce0;
        case 0x1cfcf8u: goto label_1cfcf8;
        case 0x1cfd04u: goto label_1cfd04;
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd64u: goto label_1cfd64;
        default: break;
    }

    ctx->pc = 0x1cfba0u;

    // 0x1cfba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfba4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cfba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cfba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfbac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cfbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cfbb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cfbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cfbb4: 0x8c31ca84  lw          $s1, -0x357C($at)
    ctx->pc = 0x1cfbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cfbb8: 0x9222282c  lbu         $v0, 0x282C($s1)
    ctx->pc = 0x1cfbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10284)));
    // 0x1cfbbc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CFBBCu;
    {
        const bool branch_taken_0x1cfbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBBCu;
        // 0x1cfbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbbc) {
            ctx->pc = 0x1CFBF4u;
            goto label_1cfbf4;
        }
    }
    ctx->pc = 0x1CFBC4u;
    // 0x1cfbc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfbc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfbcc: 0xac22f4d8  sw          $v0, -0xB28($at)
    ctx->pc = 0x1cfbccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4D8u, _value); } while (0);
    // 0x1cfbd0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfbd4: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFBD4u;
    SET_GPR_U32(ctx, 31, 0x1CFBDCu);
    ctx->pc = 0x1CFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBD4u;
    // 0x1cfbd8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFBD4u, 0x1CFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBDCu;
label_1cfbdc:
    // 0x1cfbdc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfbe0: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFBE0u;
    SET_GPR_U32(ctx, 31, 0x1CFBE8u);
    ctx->pc = 0x1CFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBE0u;
    // 0x1cfbe4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFBE0u, 0x1CFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBE8u;
label_1cfbe8:
    // 0x1cfbe8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfbec: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFBECu;
    SET_GPR_U32(ctx, 31, 0x1CFBF4u);
    ctx->pc = 0x1CFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBECu;
    // 0x1cfbf0: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFBECu, 0x1CFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBF4u;
label_1cfbf4:
    // 0x1cfbf4: 0x9222282b  lbu         $v0, 0x282B($s1)
    ctx->pc = 0x1cfbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10283)));
    // 0x1cfbf8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CFBF8u;
    {
        const bool branch_taken_0x1cfbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfbf8) {
            ctx->pc = 0x1CFCA4u;
            goto label_1cfca4;
        }
    }
    ctx->pc = 0x1CFC00u;
    // 0x1cfc00: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFC00u;
    SET_GPR_U32(ctx, 31, 0x1CFC08u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFC00u, 0x1CFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC08u;
label_1cfc08:
    // 0x1cfc08: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1CFC08u;
    SET_GPR_U32(ctx, 31, 0x1CFC10u);
    ctx->pc = 0x1CFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC08u;
    // 0x1cfc0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1CFC08u, 0x1CFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC10u;
label_1cfc10:
    // 0x1cfc10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1cfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1cfc14: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cfc18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cfc1c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFC1Cu;
    {
        const bool branch_taken_0x1cfc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfc1c) {
            ctx->pc = 0x1CFC4Cu;
            goto label_1cfc4c;
        }
    }
    ctx->pc = 0x1CFC24u;
    // 0x1cfc24: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFC24u;
    SET_GPR_U32(ctx, 31, 0x1CFC2Cu);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFC24u, 0x1CFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC2Cu;
label_1cfc2c:
    // 0x1cfc2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cfc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfc30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfc34: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1cfc34u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cfc38: 0x0  nop
    ctx->pc = 0x1cfc38u;
    // NOP
    // 0x1cfc3c: 0x0  nop
    ctx->pc = 0x1cfc3cu;
    // NOP
    // 0x1cfc40: 0x1010  mfhi        $v0
    ctx->pc = 0x1cfc40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1cfc44: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFC44u;
    {
        const bool branch_taken_0x1cfc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfc44) {
            ctx->pc = 0x1CFC84u;
            goto label_1cfc84;
        }
    }
    ctx->pc = 0x1CFC4Cu;
label_1cfc4c:
    // 0x1cfc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfc50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfc54: 0xac22f4d8  sw          $v0, -0xB28($at)
    ctx->pc = 0x1cfc54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4D8u, _value); } while (0);
    // 0x1cfc58: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc5c: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC64u);
    ctx->pc = 0x1CFC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC5Cu;
    // 0x1cfc60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFC5Cu, 0x1CFC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC64u;
label_1cfc64:
    // 0x1cfc64: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc68: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFC68u;
    SET_GPR_U32(ctx, 31, 0x1CFC70u);
    ctx->pc = 0x1CFC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC68u;
    // 0x1cfc6c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFC68u, 0x1CFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC70u;
label_1cfc70:
    // 0x1cfc70: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc74: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFC74u;
    SET_GPR_U32(ctx, 31, 0x1CFC7Cu);
    ctx->pc = 0x1CFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC74u;
    // 0x1cfc78: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFC74u, 0x1CFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC7Cu;
label_1cfc7c:
    // 0x1cfc7c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1CFC7Cu;
    {
        const bool branch_taken_0x1cfc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC7Cu;
        // 0x1cfc80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc7c) {
            ctx->pc = 0x1CFD68u;
            goto label_1cfd68;
        }
    }
    ctx->pc = 0x1CFC84u;
label_1cfc84:
    // 0x1cfc84: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc88: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFC88u;
    SET_GPR_U32(ctx, 31, 0x1CFC90u);
    ctx->pc = 0x1CFC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC88u;
    // 0x1cfc8c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFC88u, 0x1CFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC90u;
label_1cfc90:
    // 0x1cfc90: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc94: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFC94u;
    SET_GPR_U32(ctx, 31, 0x1CFC9Cu);
    ctx->pc = 0x1CFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC94u;
    // 0x1cfc98: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFC94u, 0x1CFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC9Cu;
label_1cfc9c:
    // 0x1cfc9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1CFC9Cu;
    {
        const bool branch_taken_0x1cfc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc9c) {
            ctx->pc = 0x1CFD64u;
            goto label_1cfd64;
        }
    }
    ctx->pc = 0x1CFCA4u;
label_1cfca4:
    // 0x1cfca4: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x1CFCA4u;
    SET_GPR_U32(ctx, 31, 0x1CFCACu);
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x1CFCA4u, 0x1CFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCACu;
label_1cfcac:
    // 0x1cfcac: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFCACu;
    SET_GPR_U32(ctx, 31, 0x1CFCB4u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFCACu, 0x1CFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCB4u;
label_1cfcb4:
    // 0x1cfcb4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cfcb8: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CFCB8u;
    {
        const bool branch_taken_0x1cfcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfcb8) {
            ctx->pc = 0x1CFD0Cu;
            goto label_1cfd0c;
        }
    }
    ctx->pc = 0x1CFCC0u;
    // 0x1cfcc0: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x1cfcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
    // 0x1cfcc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CFCC4u;
    {
        const bool branch_taken_0x1cfcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCC4u;
        // 0x1cfcc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcc4) {
            ctx->pc = 0x1CFD0Cu;
            goto label_1cfd0c;
        }
    }
    ctx->pc = 0x1CFCCCu;
    // 0x1cfccc: 0xc073b34  jal         func_1CECD0
    ctx->pc = 0x1CFCCCu;
    SET_GPR_U32(ctx, 31, 0x1CFCD4u);
    ctx->pc = 0x1CECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECD0u, 0x1CFCCCu, 0x1CFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCD4u;
label_1cfcd4:
    // 0x1cfcd4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfcd8: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFCD8u;
    SET_GPR_U32(ctx, 31, 0x1CFCE0u);
    ctx->pc = 0x1CFCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCD8u;
    // 0x1cfcdc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFCD8u, 0x1CFCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCE0u;
label_1cfce0:
    // 0x1cfce0: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x1cfce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cfce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFCE4u;
    {
        const bool branch_taken_0x1cfce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfce4) {
            ctx->pc = 0x1CFCF8u;
            goto label_1cfcf8;
        }
    }
    ctx->pc = 0x1CFCECu;
    // 0x1cfcec: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfcf0: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFCF0u;
    SET_GPR_U32(ctx, 31, 0x1CFCF8u);
    ctx->pc = 0x1CFCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCF0u;
    // 0x1cfcf4: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFCF0u, 0x1CFCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCF8u;
label_1cfcf8:
    // 0x1cfcf8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfcfc: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFCFCu;
    SET_GPR_U32(ctx, 31, 0x1CFD04u);
    ctx->pc = 0x1CFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCFCu;
    // 0x1cfd00: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFCFCu, 0x1CFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD04u;
label_1cfd04:
    // 0x1cfd04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CFD04u;
    {
        const bool branch_taken_0x1cfd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd04) {
            ctx->pc = 0x1CFD64u;
            goto label_1cfd64;
        }
    }
    ctx->pc = 0x1CFD0Cu;
label_1cfd0c:
    // 0x1cfd0c: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x1CFD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD14u);
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x1CFD0Cu, 0x1CFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD14u;
label_1cfd14:
    // 0x1cfd14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfd18: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFD18u;
    {
        const bool branch_taken_0x1cfd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfd18) {
            ctx->pc = 0x1CFD58u;
            goto label_1cfd58;
        }
    }
    ctx->pc = 0x1CFD20u;
    // 0x1cfd20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfd24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfd28: 0xac22f4d8  sw          $v0, -0xB28($at)
    ctx->pc = 0x1cfd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4D8u, _value); } while (0);
    // 0x1cfd2c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd30: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFD30u;
    SET_GPR_U32(ctx, 31, 0x1CFD38u);
    ctx->pc = 0x1CFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD30u;
    // 0x1cfd34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFD30u, 0x1CFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD38u;
label_1cfd38:
    // 0x1cfd38: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd3c: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFD3Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD44u);
    ctx->pc = 0x1CFD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD3Cu;
    // 0x1cfd40: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFD3Cu, 0x1CFD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD44u;
label_1cfd44:
    // 0x1cfd44: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd48: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFD48u;
    SET_GPR_U32(ctx, 31, 0x1CFD50u);
    ctx->pc = 0x1CFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD48u;
    // 0x1cfd4c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFD48u, 0x1CFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD50u;
label_1cfd50:
    // 0x1cfd50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFD50u;
    {
        const bool branch_taken_0x1cfd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd50) {
            ctx->pc = 0x1CFD64u;
            goto label_1cfd64;
        }
    }
    ctx->pc = 0x1CFD58u;
label_1cfd58:
    // 0x1cfd58: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfd5c: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFD5Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD64u);
    ctx->pc = 0x1CFD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD5Cu;
    // 0x1cfd60: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFD5Cu, 0x1CFD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD64u;
label_1cfd64:
    // 0x1cfd64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cfd68:
    // 0x1cfd68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cfd68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfd6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cfd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfd70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD70u;
        // 0x1cfd74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFD78u;
}
