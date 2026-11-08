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

// Function: FUN_00168f00
// Address: 0x168f00 - 0x169068
void FUN_00168f00_0x168f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168f00_0x168f00");
#endif

    switch (ctx->pc) {
        case 0x168f00u: goto label_168f00;
        case 0x168f04u: goto label_168f04;
        case 0x168f08u: goto label_168f08;
        case 0x168f0cu: goto label_168f0c;
        case 0x168f10u: goto label_168f10;
        case 0x168f14u: goto label_168f14;
        case 0x168f18u: goto label_168f18;
        case 0x168f1cu: goto label_168f1c;
        case 0x168f20u: goto label_168f20;
        case 0x168f24u: goto label_168f24;
        case 0x168f28u: goto label_168f28;
        case 0x168f2cu: goto label_168f2c;
        case 0x168f30u: goto label_168f30;
        case 0x168f34u: goto label_168f34;
        case 0x168f38u: goto label_168f38;
        case 0x168f3cu: goto label_168f3c;
        case 0x168f40u: goto label_168f40;
        case 0x168f44u: goto label_168f44;
        case 0x168f48u: goto label_168f48;
        case 0x168f4cu: goto label_168f4c;
        case 0x168f50u: goto label_168f50;
        case 0x168f54u: goto label_168f54;
        case 0x168f58u: goto label_168f58;
        case 0x168f5cu: goto label_168f5c;
        case 0x168f60u: goto label_168f60;
        case 0x168f64u: goto label_168f64;
        case 0x168f68u: goto label_168f68;
        case 0x168f6cu: goto label_168f6c;
        case 0x168f70u: goto label_168f70;
        case 0x168f74u: goto label_168f74;
        case 0x168f78u: goto label_168f78;
        case 0x168f7cu: goto label_168f7c;
        case 0x168f80u: goto label_168f80;
        case 0x168f84u: goto label_168f84;
        case 0x168f88u: goto label_168f88;
        case 0x168f8cu: goto label_168f8c;
        case 0x168f90u: goto label_168f90;
        case 0x168f94u: goto label_168f94;
        case 0x168f98u: goto label_168f98;
        case 0x168f9cu: goto label_168f9c;
        case 0x168fa0u: goto label_168fa0;
        case 0x168fa4u: goto label_168fa4;
        case 0x168fa8u: goto label_168fa8;
        case 0x168facu: goto label_168fac;
        case 0x168fb0u: goto label_168fb0;
        case 0x168fb4u: goto label_168fb4;
        case 0x168fb8u: goto label_168fb8;
        case 0x168fbcu: goto label_168fbc;
        case 0x168fc0u: goto label_168fc0;
        case 0x168fc4u: goto label_168fc4;
        case 0x168fc8u: goto label_168fc8;
        case 0x168fccu: goto label_168fcc;
        case 0x168fd0u: goto label_168fd0;
        case 0x168fd4u: goto label_168fd4;
        case 0x168fd8u: goto label_168fd8;
        case 0x168fdcu: goto label_168fdc;
        case 0x168fe0u: goto label_168fe0;
        case 0x168fe4u: goto label_168fe4;
        case 0x168fe8u: goto label_168fe8;
        case 0x168fecu: goto label_168fec;
        case 0x168ff0u: goto label_168ff0;
        case 0x168ff4u: goto label_168ff4;
        case 0x168ff8u: goto label_168ff8;
        case 0x168ffcu: goto label_168ffc;
        case 0x169000u: goto label_169000;
        case 0x169004u: goto label_169004;
        case 0x169008u: goto label_169008;
        case 0x16900cu: goto label_16900c;
        case 0x169010u: goto label_169010;
        case 0x169014u: goto label_169014;
        case 0x169018u: goto label_169018;
        case 0x16901cu: goto label_16901c;
        case 0x169020u: goto label_169020;
        case 0x169024u: goto label_169024;
        case 0x169028u: goto label_169028;
        case 0x16902cu: goto label_16902c;
        case 0x169030u: goto label_169030;
        case 0x169034u: goto label_169034;
        case 0x169038u: goto label_169038;
        case 0x16903cu: goto label_16903c;
        case 0x169040u: goto label_169040;
        case 0x169044u: goto label_169044;
        case 0x169048u: goto label_169048;
        case 0x16904cu: goto label_16904c;
        case 0x169050u: goto label_169050;
        case 0x169054u: goto label_169054;
        case 0x169058u: goto label_169058;
        case 0x16905cu: goto label_16905c;
        case 0x169060u: goto label_169060;
        case 0x169064u: goto label_169064;
        default: break;
    }

    ctx->pc = 0x168f00u;

label_168f00:
    // 0x168f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_168f04:
    // 0x168f04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x168f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_168f08:
    // 0x168f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_168f0c:
    // 0x168f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168f10:
    // 0x168f10: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x168f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_168f14:
    // 0x168f14: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_168f18:
    if (ctx->pc == 0x168F18u) {
        ctx->pc = 0x168F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F14u;
        // 0x168f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F1Cu;
        goto label_168f1c;
    }
    ctx->pc = 0x168F14u;
    {
        const bool branch_taken_0x168f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F14u;
        // 0x168f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f14) {
            ctx->pc = 0x168F50u;
            goto label_168f50;
        }
    }
    ctx->pc = 0x168F1Cu;
label_168f1c:
    // 0x168f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168f20:
    // 0x168f20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_168f24:
    if (ctx->pc == 0x168F24u) {
        ctx->pc = 0x168F28u;
        goto label_168f28;
    }
    ctx->pc = 0x168F20u;
    {
        const bool branch_taken_0x168f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168f20) {
            ctx->pc = 0x168F30u;
            goto label_168f30;
        }
    }
    ctx->pc = 0x168F28u;
label_168f28:
    // 0x168f28: 0x1000001d  b           . + 4 + (0x1D << 2)
label_168f2c:
    if (ctx->pc == 0x168F2Cu) {
        ctx->pc = 0x168F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F28u;
        // 0x168f2c: 0xc6010230  lwc1        $f1, 0x230($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F30u;
        goto label_168f30;
    }
    ctx->pc = 0x168F28u;
    {
        const bool branch_taken_0x168f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F28u;
        // 0x168f2c: 0xc6010230  lwc1        $f1, 0x230($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f28) {
            ctx->pc = 0x168FA0u;
            goto label_168fa0;
        }
    }
    ctx->pc = 0x168F30u;
label_168f30:
    // 0x168f30: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_168f34:
    // 0x168f34: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_168f38:
    // 0x168f38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_168f3c:
    // 0x168f3c: 0xc0465b8  jal         func_1196E0
label_168f40:
    if (ctx->pc == 0x168F40u) {
        ctx->pc = 0x168F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F3Cu;
        // 0x168f40: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F44u;
        goto label_168f44;
    }
    ctx->pc = 0x168F3Cu;
    SET_GPR_U32(ctx, 31, 0x168F44u);
    ctx->pc = 0x168F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F3Cu;
    // 0x168f40: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1196E0u, 0x168F3Cu, 0x168F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F44u;
label_168f44:
    // 0x168f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_168f48:
    // 0x168f48: 0x1000002f  b           . + 4 + (0x2F << 2)
label_168f4c:
    if (ctx->pc == 0x168F4Cu) {
        ctx->pc = 0x168F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F48u;
        // 0x168f4c: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F50u;
        goto label_168f50;
    }
    ctx->pc = 0x168F48u;
    {
        const bool branch_taken_0x168f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F48u;
        // 0x168f4c: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f48) {
            ctx->pc = 0x169008u;
            goto label_169008;
        }
    }
    ctx->pc = 0x168F50u;
label_168f50:
    // 0x168f50: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x168f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_168f54:
    // 0x168f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_168f58:
    // 0x168f58: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x168f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
label_168f5c:
    // 0x168f5c: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_168f60:
    // 0x168f60: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x168f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_168f64:
    // 0x168f64: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x168f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_168f68:
    // 0x168f68: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_168f6c:
    if (ctx->pc == 0x168F6Cu) {
        ctx->pc = 0x168F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F68u;
        // 0x168f6c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F70u;
        goto label_168f70;
    }
    ctx->pc = 0x168F68u;
    {
        const bool branch_taken_0x168f68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F68u;
        // 0x168f6c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f68) {
            ctx->pc = 0x16900Cu;
            goto label_16900c;
        }
    }
    ctx->pc = 0x168F70u;
label_168f70:
    // 0x168f70: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x168f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_168f74:
    // 0x168f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168f78:
    // 0x168f78: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x168f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_168f7c:
    // 0x168f7c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x168f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_168f80:
    // 0x168f80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x168f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_168f84:
    // 0x168f84: 0xc046744  jal         func_119D10
label_168f88:
    if (ctx->pc == 0x168F88u) {
        ctx->pc = 0x168F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F84u;
        // 0x168f88: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F8Cu;
        goto label_168f8c;
    }
    ctx->pc = 0x168F84u;
    SET_GPR_U32(ctx, 31, 0x168F8Cu);
    ctx->pc = 0x168F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F84u;
    // 0x168f88: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x168F84u, 0x168F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F8Cu;
label_168f8c:
    // 0x168f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168f90:
    // 0x168f90: 0xc042570  jal         func_1095C0
label_168f94:
    if (ctx->pc == 0x168F94u) {
        ctx->pc = 0x168F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F90u;
        // 0x168f94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F98u;
        goto label_168f98;
    }
    ctx->pc = 0x168F90u;
    SET_GPR_U32(ctx, 31, 0x168F98u);
    ctx->pc = 0x168F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F90u;
    // 0x168f94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168F90u, 0x168F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F98u;
label_168f98:
    // 0x168f98: 0x1000002f  b           . + 4 + (0x2F << 2)
label_168f9c:
    if (ctx->pc == 0x168F9Cu) {
        ctx->pc = 0x168F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F98u;
        // 0x168f9c: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168FA0u;
        goto label_168fa0;
    }
    ctx->pc = 0x168F98u;
    {
        const bool branch_taken_0x168f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F98u;
        // 0x168f9c: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f98) {
            ctx->pc = 0x169058u;
            goto label_169058;
        }
    }
    ctx->pc = 0x168FA0u;
label_168fa0:
    // 0x168fa0: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x168fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168fa4:
    // 0x168fa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_168fa8:
    // 0x168fa8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_168fac:
    // 0x168fac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_168fb0:
    // 0x168fb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x168fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_168fb4:
    // 0x168fb4: 0x0  nop
    ctx->pc = 0x168fb4u;
    // NOP
label_168fb8:
    // 0x168fb8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_168fbc:
    if (ctx->pc == 0x168FBCu) {
        ctx->pc = 0x168FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FB8u;
        // 0x168fbc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168FC0u;
        goto label_168fc0;
    }
    ctx->pc = 0x168FB8u;
    {
        const bool branch_taken_0x168fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FB8u;
        // 0x168fbc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fb8) {
            ctx->pc = 0x168FC4u;
            goto label_168fc4;
        }
    }
    ctx->pc = 0x168FC0u;
label_168fc0:
    // 0x168fc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x168fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_168fc4:
    // 0x168fc4: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x168fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_168fc8:
    // 0x168fc8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x168fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_168fcc:
    // 0x168fcc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_168fd0:
    if (ctx->pc == 0x168FD0u) {
        ctx->pc = 0x168FD4u;
        goto label_168fd4;
    }
    ctx->pc = 0x168FCCu;
    {
        const bool branch_taken_0x168fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fcc) {
            ctx->pc = 0x168FE0u;
            goto label_168fe0;
        }
    }
    ctx->pc = 0x168FD4u;
label_168fd4:
    // 0x168fd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_168fd8:
    // 0x168fd8: 0x1000000b  b           . + 4 + (0xB << 2)
label_168fdc:
    if (ctx->pc == 0x168FDCu) {
        ctx->pc = 0x168FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD8u;
        // 0x168fdc: 0xae020240  sw          $v0, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168FE0u;
        goto label_168fe0;
    }
    ctx->pc = 0x168FD8u;
    {
        const bool branch_taken_0x168fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD8u;
        // 0x168fdc: 0xae020240  sw          $v0, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fd8) {
            ctx->pc = 0x169008u;
            goto label_169008;
        }
    }
    ctx->pc = 0x168FE0u;
label_168fe0:
    // 0x168fe0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_168fe4:
    if (ctx->pc == 0x168FE4u) {
        ctx->pc = 0x168FE8u;
        goto label_168fe8;
    }
    ctx->pc = 0x168FE0u;
    {
        const bool branch_taken_0x168fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168fe0) {
            ctx->pc = 0x168FECu;
            goto label_168fec;
        }
    }
    ctx->pc = 0x168FE8u;
label_168fe8:
    // 0x168fe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_168fec:
    // 0x168fec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_168ff0:
    // 0x168ff0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x168ff0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168ff4:
    // 0x168ff4: 0x0  nop
    ctx->pc = 0x168ff4u;
    // NOP
label_168ff8:
    // 0x168ff8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_168ffc:
    // 0x168ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x168ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_169000:
    // 0x169000: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x169000u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_169004:
    // 0x169004: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x169004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
label_169008:
    // 0x169008: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16900c:
    // 0x16900c: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x16900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_169010:
    // 0x169010: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x169010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_169014:
    // 0x169014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169018:
    // 0x169018: 0xc60c0240  lwc1        $f12, 0x240($s0)
    ctx->pc = 0x169018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16901c:
    // 0x16901c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_169020:
    // 0x169020: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x169020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_169024:
    // 0x169024: 0xc046724  jal         func_119C90
label_169028:
    if (ctx->pc == 0x169028u) {
        ctx->pc = 0x169028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169024u;
        // 0x169028: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16902Cu;
        goto label_16902c;
    }
    ctx->pc = 0x169024u;
    SET_GPR_U32(ctx, 31, 0x16902Cu);
    ctx->pc = 0x169028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169024u;
    // 0x169028: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C90u, 0x169024u, 0x16902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16902Cu;
label_16902c:
    // 0x16902c: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_169030:
    // 0x169030: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_169034:
    if (ctx->pc == 0x169034u) {
        ctx->pc = 0x169038u;
        goto label_169038;
    }
    ctx->pc = 0x169030u;
    {
        const bool branch_taken_0x169030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169030) {
            ctx->pc = 0x169058u;
            goto label_169058;
        }
    }
    ctx->pc = 0x169038u;
label_169038:
    // 0x169038: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x169038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_16903c:
    // 0x16903c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169040:
    // 0x169040: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_169044:
    if (ctx->pc == 0x169044u) {
        ctx->pc = 0x169048u;
        goto label_169048;
    }
    ctx->pc = 0x169040u;
    {
        const bool branch_taken_0x169040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169040) {
            ctx->pc = 0x169058u;
            goto label_169058;
        }
    }
    ctx->pc = 0x169048u;
label_169048:
    // 0x169048: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16904c:
    // 0x16904c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x16904cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_169050:
    // 0x169050: 0x320f809  jalr        $t9
label_169054:
    if (ctx->pc == 0x169054u) {
        ctx->pc = 0x169054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169050u;
        // 0x169054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169058u;
        goto label_169058;
    }
    ctx->pc = 0x169050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169058u);
        ctx->pc = 0x169054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169050u;
        // 0x169054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169050u, 0x169058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169058u;
label_169058:
    // 0x169058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16905c:
    // 0x16905c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16905cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169060:
    // 0x169060: 0x3e00008  jr          $ra
label_169064:
    if (ctx->pc == 0x169064u) {
        ctx->pc = 0x169064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169060u;
        // 0x169064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169068u;
        goto label_fallthrough_0x169060;
    }
    ctx->pc = 0x169060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169060u;
        // 0x169064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169060:
    ctx->pc = 0x169068u;
}
