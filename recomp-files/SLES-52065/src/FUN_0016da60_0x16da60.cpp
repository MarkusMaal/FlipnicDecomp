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

// Function: FUN_0016da60
// Address: 0x16da60 - 0x16dc20
void FUN_0016da60_0x16da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016da60_0x16da60");
#endif

    switch (ctx->pc) {
        case 0x16daf8u: goto label_16daf8;
        case 0x16db1cu: goto label_16db1c;
        case 0x16db28u: goto label_16db28;
        case 0x16db3cu: goto label_16db3c;
        case 0x16db48u: goto label_16db48;
        case 0x16db5cu: goto label_16db5c;
        default: break;
    }

    ctx->pc = 0x16da60u;

    // 0x16da60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16da64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16da68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16da6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16da70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16da70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16da74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16da78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16da7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16da80: 0x8ca301fc  lw          $v1, 0x1FC($a1)
    ctx->pc = 0x16da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
    // 0x16da84: 0x8f918714  lw          $s1, -0x78EC($gp)
    ctx->pc = 0x16da84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x16da88: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16da8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16da90: 0xaca301fc  sw          $v1, 0x1FC($a1)
    ctx->pc = 0x16da90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 508), GPR_U32(ctx, 3));
    // 0x16da94: 0x84a301fa  lh          $v1, 0x1FA($a1)
    ctx->pc = 0x16da94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 506)));
    // 0x16da98: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x16da98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x16da9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DA9Cu;
    {
        const bool branch_taken_0x16da9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA9Cu;
        // 0x16daa0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da9c) {
            ctx->pc = 0x16DAACu;
            goto label_16daac;
        }
    }
    ctx->pc = 0x16DAA4u;
    // 0x16daa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16daa8: 0xa4a301fa  sh          $v1, 0x1FA($a1)
    ctx->pc = 0x16daa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 506), (uint16_t)GPR_U32(ctx, 3));
label_16daac:
    // 0x16daac: 0x86440064  lh          $a0, 0x64($s2)
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x16dab0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16dab4: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x16DAB4u;
    {
        const bool branch_taken_0x16dab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAB4u;
        // 0x16dab8: 0x8cb001fc  lw          $s0, 0x1FC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dab4) {
            ctx->pc = 0x16DB64u;
            goto label_16db64;
        }
    }
    ctx->pc = 0x16DABCu;
    // 0x16dabc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16dac0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x16DAC0u;
    {
        const bool branch_taken_0x16dac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dac0) {
            ctx->pc = 0x16DB50u;
            goto label_16db50;
        }
    }
    ctx->pc = 0x16DAC8u;
    // 0x16dac8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16dacc: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16DACCu;
    {
        const bool branch_taken_0x16dacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dacc) {
            ctx->pc = 0x16DB30u;
            goto label_16db30;
        }
    }
    ctx->pc = 0x16DAD4u;
    // 0x16dad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dad8: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DAD8u;
    {
        const bool branch_taken_0x16dad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x16dad8) {
            ctx->pc = 0x16DAF0u;
            goto label_16daf0;
        }
    }
    ctx->pc = 0x16DAE0u;
    // 0x16dae0: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x16DAE0u;
    {
        const bool branch_taken_0x16dae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dae0) {
            ctx->pc = 0x16DC00u;
            goto label_16dc00;
        }
    }
    ctx->pc = 0x16DAE8u;
    // 0x16dae8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16DAE8u;
    {
        const bool branch_taken_0x16dae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAE8u;
        // 0x16daec: 0x86450066  lh          $a1, 0x66($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dae8) {
            ctx->pc = 0x16DB9Cu;
            goto label_16db9c;
        }
    }
    ctx->pc = 0x16DAF0u;
label_16daf0:
    // 0x16daf0: 0xc06cde4  jal         func_1B3790
    ctx->pc = 0x16DAF0u;
    SET_GPR_U32(ctx, 31, 0x16DAF8u);
    ctx->pc = 0x16DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAF0u;
    // 0x16daf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3790u, 0x16DAF0u, 0x16DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAF8u;
label_16daf8:
    // 0x16daf8: 0x8e832c1c  lw          $v1, 0x2C1C($s4)
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11292)));
    // 0x16dafc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x16dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16db00: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16db04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16db08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16db0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16db10: 0x9045003f  lbu         $a1, 0x3F($v0)
    ctx->pc = 0x16db10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x16db14: 0xc06ce04  jal         func_1B3810
    ctx->pc = 0x16DB14u;
    SET_GPR_U32(ctx, 31, 0x16DB1Cu);
    ctx->pc = 0x16DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB14u;
    // 0x16db18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3810u, 0x16DB14u, 0x16DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB1Cu;
label_16db1c:
    // 0x16db1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db20: 0xc06cdfc  jal         func_1B37F0
    ctx->pc = 0x16DB20u;
    SET_GPR_U32(ctx, 31, 0x16DB28u);
    ctx->pc = 0x16DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB20u;
    // 0x16db24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37F0u, 0x16DB20u, 0x16DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB28u;
label_16db28:
    // 0x16db28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16DB28u;
    {
        const bool branch_taken_0x16db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db28) {
            ctx->pc = 0x16DB98u;
            goto label_16db98;
        }
    }
    ctx->pc = 0x16DB30u;
label_16db30:
    // 0x16db30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db34: 0xc06cdf0  jal         func_1B37C0
    ctx->pc = 0x16DB34u;
    SET_GPR_U32(ctx, 31, 0x16DB3Cu);
    ctx->pc = 0x16DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB34u;
    // 0x16db38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37C0u, 0x16DB34u, 0x16DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB3Cu;
label_16db3c:
    // 0x16db3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db40: 0xc06cdfc  jal         func_1B37F0
    ctx->pc = 0x16DB40u;
    SET_GPR_U32(ctx, 31, 0x16DB48u);
    ctx->pc = 0x16DB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB40u;
    // 0x16db44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37F0u, 0x16DB40u, 0x16DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB48u;
label_16db48:
    // 0x16db48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16DB48u;
    {
        const bool branch_taken_0x16db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db48) {
            ctx->pc = 0x16DB98u;
            goto label_16db98;
        }
    }
    ctx->pc = 0x16DB50u;
label_16db50:
    // 0x16db50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db54: 0xc06cdfc  jal         func_1B37F0
    ctx->pc = 0x16DB54u;
    SET_GPR_U32(ctx, 31, 0x16DB5Cu);
    ctx->pc = 0x16DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB54u;
    // 0x16db58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37F0u, 0x16DB54u, 0x16DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB5Cu;
label_16db5c:
    // 0x16db5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16DB5Cu;
    {
        const bool branch_taken_0x16db5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db5c) {
            ctx->pc = 0x16DB98u;
            goto label_16db98;
        }
    }
    ctx->pc = 0x16DB64u;
label_16db64:
    // 0x16db64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16db64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16db68: 0xa22528fc  sb          $a1, 0x28FC($s1)
    ctx->pc = 0x16db68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10492), (uint8_t)GPR_U32(ctx, 5));
    // 0x16db6c: 0x8e2428e0  lw          $a0, 0x28E0($s1)
    ctx->pc = 0x16db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10464)));
    // 0x16db70: 0x8e232848  lw          $v1, 0x2848($s1)
    ctx->pc = 0x16db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10312)));
    // 0x16db74: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x16db74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16db78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16db7c: 0xae232848  sw          $v1, 0x2848($s1)
    ctx->pc = 0x16db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10312), GPR_U32(ctx, 3));
    // 0x16db80: 0xa22528fd  sb          $a1, 0x28FD($s1)
    ctx->pc = 0x16db80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10493), (uint8_t)GPR_U32(ctx, 5));
    // 0x16db84: 0x8e2428e0  lw          $a0, 0x28E0($s1)
    ctx->pc = 0x16db84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10464)));
    // 0x16db88: 0x8e23284c  lw          $v1, 0x284C($s1)
    ctx->pc = 0x16db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10316)));
    // 0x16db8c: 0x72042018  mult1       $a0, $s0, $a0
    ctx->pc = 0x16db8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16db90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16db94: 0xae23284c  sw          $v1, 0x284C($s1)
    ctx->pc = 0x16db94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10316), GPR_U32(ctx, 3));
label_16db98:
    // 0x16db98: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_16db9c:
    // 0x16db9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dba0: 0x8e242838  lw          $a0, 0x2838($s1)
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10296)));
    // 0x16dba4: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x16dba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16dba8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16dbac: 0xae242838  sw          $a0, 0x2838($s1)
    ctx->pc = 0x16dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10296), GPR_U32(ctx, 4));
    // 0x16dbb0: 0xa22328fe  sb          $v1, 0x28FE($s1)
    ctx->pc = 0x16dbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10494), (uint8_t)GPR_U32(ctx, 3));
    // 0x16dbb4: 0x86450068  lh          $a1, 0x68($s2)
    ctx->pc = 0x16dbb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x16dbb8: 0x862328d8  lh          $v1, 0x28D8($s1)
    ctx->pc = 0x16dbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10456)));
    // 0x16dbbc: 0x8e2428dc  lw          $a0, 0x28DC($s1)
    ctx->pc = 0x16dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10460)));
    // 0x16dbc0: 0x72052818  mult1       $a1, $s0, $a1
    ctx->pc = 0x16dbc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16dbc4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x16dbc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x16dbc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x16dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16dbcc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x16dbccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x16dbd0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x16dbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16dbd4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16dbd8: 0x0  nop
    ctx->pc = 0x16dbd8u;
    // NOP
    // 0x16dbdc: 0x3012  mflo        $a2
    ctx->pc = 0x16dbdcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x16dbe0: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x16dbe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
    // 0x16dbe4: 0x2810  mfhi        $a1
    ctx->pc = 0x16dbe4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x16dbe8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x16dbe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x16dbec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x16dbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x16dbf0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x16dbf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x16dbf4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16dbf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x16dbf8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x16dbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x16dbfc: 0xfc832818  sd          $v1, 0x2818($a0)
    ctx->pc = 0x16dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
label_16dc00:
    // 0x16dc00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16dc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16dc04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16dc04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16dc08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dc0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16dc0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dc10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16dc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16dc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dc18: 0x3e00008  jr          $ra
    ctx->pc = 0x16DC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC18u;
        // 0x16dc1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DC20u;
}
