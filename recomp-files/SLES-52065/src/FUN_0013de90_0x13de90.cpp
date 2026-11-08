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

// Function: FUN_0013de90
// Address: 0x13de90 - 0x13e158
void FUN_0013de90_0x13de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013de90_0x13de90");
#endif

    switch (ctx->pc) {
        case 0x13debcu: goto label_13debc;
        case 0x13ded0u: goto label_13ded0;
        case 0x13dee0u: goto label_13dee0;
        case 0x13def4u: goto label_13def4;
        case 0x13df10u: goto label_13df10;
        case 0x13df38u: goto label_13df38;
        case 0x13df54u: goto label_13df54;
        case 0x13df64u: goto label_13df64;
        case 0x13df94u: goto label_13df94;
        case 0x13dfa4u: goto label_13dfa4;
        case 0x13dfecu: goto label_13dfec;
        case 0x13dffcu: goto label_13dffc;
        case 0x13e00cu: goto label_13e00c;
        case 0x13e054u: goto label_13e054;
        case 0x13e064u: goto label_13e064;
        case 0x13e074u: goto label_13e074;
        case 0x13e0bcu: goto label_13e0bc;
        case 0x13e0ccu: goto label_13e0cc;
        case 0x13e0dcu: goto label_13e0dc;
        case 0x13e10cu: goto label_13e10c;
        case 0x13e128u: goto label_13e128;
        default: break;
    }

    ctx->pc = 0x13de90u;

    // 0x13de90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13de94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13de94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13de98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13de98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13de9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13dea0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13dea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13dea4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13dea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13dea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13deac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13deacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13deb0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x13deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13deb4: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DEB4u;
    SET_GPR_U32(ctx, 31, 0x13DEBCu);
    ctx->pc = 0x13DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DEB4u;
    // 0x13deb8: 0x24a5f008  addiu       $a1, $a1, -0xFF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DEB4u, 0x13DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEBCu;
label_13debc:
    // 0x13debc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13debcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dec0: 0x1200009e  beqz        $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x13DEC0u;
    {
        const bool branch_taken_0x13dec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEC0u;
        // 0x13dec4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dec0) {
            ctx->pc = 0x13E13Cu;
            goto label_13e13c;
        }
    }
    ctx->pc = 0x13DEC8u;
    // 0x13dec8: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x13DEC8u;
    SET_GPR_U32(ctx, 31, 0x13DED0u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x13DEC8u, 0x13DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DED0u;
label_13ded0:
    // 0x13ded0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13ded4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ded8: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DED8u;
    SET_GPR_U32(ctx, 31, 0x13DEE0u);
    ctx->pc = 0x13DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DED8u;
    // 0x13dedc: 0x24a5f010  addiu       $a1, $a1, -0xFF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DED8u, 0x13DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEE0u;
label_13dee0:
    // 0x13dee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13dee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dee4: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x13dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x13dee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13dee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13deec: 0xc0509cc  jal         func_142730
    ctx->pc = 0x13DEECu;
    SET_GPR_U32(ctx, 31, 0x13DEF4u);
    ctx->pc = 0x13DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DEECu;
    // 0x13def0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142730u, 0x13DEECu, 0x13DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEF4u;
label_13def4:
    // 0x13def4: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x13DEF4u;
    {
        const bool branch_taken_0x13def4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13def4) {
            ctx->pc = 0x13DF28u;
            goto label_13df28;
        }
    }
    ctx->pc = 0x13DEFCu;
    // 0x13defc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13defcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13df00: 0x26440006  addiu       $a0, $s2, 0x6
    ctx->pc = 0x13df00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x13df04: 0x24a5f018  addiu       $a1, $a1, -0xFE8
    ctx->pc = 0x13df04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963224));
    // 0x13df08: 0xc0805e6  jal         func_201798
    ctx->pc = 0x13DF08u;
    SET_GPR_U32(ctx, 31, 0x13DF10u);
    ctx->pc = 0x13DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF08u;
    // 0x13df0c: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x13DF08u, 0x13DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF10u;
label_13df10:
    // 0x13df10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DF10u;
    {
        const bool branch_taken_0x13df10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df10) {
            ctx->pc = 0x13DF24u;
            goto label_13df24;
        }
    }
    ctx->pc = 0x13DF18u;
    // 0x13df18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13df1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DF1Cu;
    {
        const bool branch_taken_0x13df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF1Cu;
        // 0x13df20: 0xae220174  sw          $v0, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df1c) {
            ctx->pc = 0x13DF28u;
            goto label_13df28;
        }
    }
    ctx->pc = 0x13DF24u;
label_13df24:
    // 0x13df24: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x13df24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
label_13df28:
    // 0x13df28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13df28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13df2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13df2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df30: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DF30u;
    SET_GPR_U32(ctx, 31, 0x13DF38u);
    ctx->pc = 0x13DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF30u;
    // 0x13df34: 0x24a5f020  addiu       $a1, $a1, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DF30u, 0x13DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF38u;
label_13df38:
    // 0x13df38: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13DF38u;
    {
        const bool branch_taken_0x13df38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df38) {
            ctx->pc = 0x13DF84u;
            goto label_13df84;
        }
    }
    ctx->pc = 0x13DF40u;
    // 0x13df40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13df40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13df44: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x13df44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x13df48: 0x24a5f018  addiu       $a1, $a1, -0xFE8
    ctx->pc = 0x13df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963224));
    // 0x13df4c: 0xc0805e6  jal         func_201798
    ctx->pc = 0x13DF4Cu;
    SET_GPR_U32(ctx, 31, 0x13DF54u);
    ctx->pc = 0x13DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF4Cu;
    // 0x13df50: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x13DF4Cu, 0x13DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF54u;
label_13df54:
    // 0x13df54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13DF54u;
    {
        const bool branch_taken_0x13df54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df54) {
            ctx->pc = 0x13DF80u;
            goto label_13df80;
        }
    }
    ctx->pc = 0x13DF5Cu;
    // 0x13df5c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13DF5Cu;
    SET_GPR_U32(ctx, 31, 0x13DF64u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13DF5Cu, 0x13DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF64u;
label_13df64:
    // 0x13df64: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x13df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x13df68: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x13df68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13df6c: 0x0  nop
    ctx->pc = 0x13df6cu;
    // NOP
    // 0x13df70: 0x0  nop
    ctx->pc = 0x13df70u;
    // NOP
    // 0x13df74: 0x1010  mfhi        $v0
    ctx->pc = 0x13df74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13df78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DF78u;
    {
        const bool branch_taken_0x13df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF78u;
        // 0x13df7c: 0xae220174  sw          $v0, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df78) {
            ctx->pc = 0x13DF84u;
            goto label_13df84;
        }
    }
    ctx->pc = 0x13DF80u;
label_13df80:
    // 0x13df80: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x13df80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
label_13df84:
    // 0x13df84: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13df84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13df88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df8c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DF8Cu;
    SET_GPR_U32(ctx, 31, 0x13DF94u);
    ctx->pc = 0x13DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF8Cu;
    // 0x13df90: 0x24a5f028  addiu       $a1, $a1, -0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DF8Cu, 0x13DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF94u;
label_13df94:
    // 0x13df94: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13DF94u;
    {
        const bool branch_taken_0x13df94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df94) {
            ctx->pc = 0x13DFECu;
            goto label_13dfec;
        }
    }
    ctx->pc = 0x13DF9Cu;
    // 0x13df9c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13DF9Cu;
    SET_GPR_U32(ctx, 31, 0x13DFA4u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13DF9Cu, 0x13DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFA4u;
label_13dfa4:
    // 0x13dfa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13dfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13dfa8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13dfac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13dfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13dfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13dfb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13dfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dfbc: 0x0  nop
    ctx->pc = 0x13dfbcu;
    // NOP
    // 0x13dfc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13dfc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13dfc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13dfc8: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x13dfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x13dfcc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13dfd0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13dfd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13dfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dfd8: 0x0  nop
    ctx->pc = 0x13dfd8u;
    // NOP
    // 0x13dfdc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13dfdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13dfe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13dfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13dfe4: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x13DFE4u;
    SET_GPR_U32(ctx, 31, 0x13DFECu);
    ctx->pc = 0x13DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFE4u;
    // 0x13dfe8: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x13DFE4u, 0x13DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFECu;
label_13dfec:
    // 0x13dfec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13dff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dff4: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DFF4u;
    SET_GPR_U32(ctx, 31, 0x13DFFCu);
    ctx->pc = 0x13DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFF4u;
    // 0x13dff8: 0x24a5f030  addiu       $a1, $a1, -0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DFF4u, 0x13DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFFCu;
label_13dffc:
    // 0x13dffc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13DFFCu;
    {
        const bool branch_taken_0x13dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dffc) {
            ctx->pc = 0x13E054u;
            goto label_13e054;
        }
    }
    ctx->pc = 0x13E004u;
    // 0x13e004: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13E004u;
    SET_GPR_U32(ctx, 31, 0x13E00Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13E004u, 0x13E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E00Cu;
label_13e00c:
    // 0x13e00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e010: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13e014: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13e014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e018: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13e01c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13e020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e024: 0x0  nop
    ctx->pc = 0x13e024u;
    // NOP
    // 0x13e028: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13e028u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e02c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13e030: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x13e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x13e034: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13e038: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13e038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13e03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e040: 0x0  nop
    ctx->pc = 0x13e040u;
    // NOP
    // 0x13e044: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13e044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13e048: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13e048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13e04c: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x13E04Cu;
    SET_GPR_U32(ctx, 31, 0x13E054u);
    ctx->pc = 0x13E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E04Cu;
    // 0x13e050: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x13E04Cu, 0x13E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E054u;
label_13e054:
    // 0x13e054: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13e054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13e058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e05c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13E05Cu;
    SET_GPR_U32(ctx, 31, 0x13E064u);
    ctx->pc = 0x13E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E05Cu;
    // 0x13e060: 0x24a5f038  addiu       $a1, $a1, -0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13E05Cu, 0x13E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E064u;
label_13e064:
    // 0x13e064: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13E064u;
    {
        const bool branch_taken_0x13e064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e064) {
            ctx->pc = 0x13E0BCu;
            goto label_13e0bc;
        }
    }
    ctx->pc = 0x13E06Cu;
    // 0x13e06c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13E06Cu;
    SET_GPR_U32(ctx, 31, 0x13E074u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13E06Cu, 0x13E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E074u;
label_13e074:
    // 0x13e074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e078: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13e078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13e07c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e080: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13e084: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13e084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13e088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e08c: 0x0  nop
    ctx->pc = 0x13e08cu;
    // NOP
    // 0x13e090: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13e090u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e094: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13e094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13e098: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x13e098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x13e09c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13e0a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13e0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13e0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e0a8: 0x0  nop
    ctx->pc = 0x13e0a8u;
    // NOP
    // 0x13e0ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13e0acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13e0b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13e0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13e0b4: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x13E0B4u;
    SET_GPR_U32(ctx, 31, 0x13E0BCu);
    ctx->pc = 0x13E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0B4u;
    // 0x13e0b8: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x13E0B4u, 0x13E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0BCu;
label_13e0bc:
    // 0x13e0bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13e0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0c4: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13E0C4u;
    SET_GPR_U32(ctx, 31, 0x13E0CCu);
    ctx->pc = 0x13E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0C4u;
    // 0x13e0c8: 0x24a5f040  addiu       $a1, $a1, -0xFC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13E0C4u, 0x13E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0CCu;
label_13e0cc:
    // 0x13e0cc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13E0CCu;
    {
        const bool branch_taken_0x13e0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e0cc) {
            ctx->pc = 0x13E13Cu;
            goto label_13e13c;
        }
    }
    ctx->pc = 0x13E0D4u;
    // 0x13e0d4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13E0D4u;
    SET_GPR_U32(ctx, 31, 0x13E0DCu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13E0D4u, 0x13E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0DCu;
label_13e0dc:
    // 0x13e0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e0e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e0e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13e0e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13e0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e0f0: 0x0  nop
    ctx->pc = 0x13e0f0u;
    // NOP
    // 0x13e0f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13e0f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e0f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x13e0fc: 0x0  nop
    ctx->pc = 0x13e0fcu;
    // NOP
    // 0x13e100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e104: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x13E104u;
    SET_GPR_U32(ctx, 31, 0x13E10Cu);
    ctx->pc = 0x13E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E104u;
    // 0x13e108: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x13E104u, 0x13E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E10Cu;
label_13e10c:
    // 0x13e10c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13e110: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13e110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e118: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x13e118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x13e11c: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x13e11cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13e120: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x13E120u;
    SET_GPR_U32(ctx, 31, 0x13E128u);
    ctx->pc = 0x13E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E120u;
    // 0x13e124: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x13E120u, 0x13E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E128u;
label_13e128:
    // 0x13e128: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13e128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13e12c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13e12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e130: 0x0  nop
    ctx->pc = 0x13e130u;
    // NOP
    // 0x13e134: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x13e134u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x13e138: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x13e138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_13e13c:
    // 0x13e13c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13e13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e140: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13e140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13e144: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13e144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e148: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e14c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e150: 0x3e00008  jr          $ra
    ctx->pc = 0x13E150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E150u;
        // 0x13e154: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E158u;
}
