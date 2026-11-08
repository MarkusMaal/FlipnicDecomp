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

// Function: FUN_0015cf50
// Address: 0x15cf50 - 0x15d088
void FUN_0015cf50_0x15cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015cf50_0x15cf50");
#endif

    switch (ctx->pc) {
        case 0x15cf78u: goto label_15cf78;
        case 0x15cf94u: goto label_15cf94;
        case 0x15cf9cu: goto label_15cf9c;
        case 0x15cfa4u: goto label_15cfa4;
        case 0x15cfacu: goto label_15cfac;
        case 0x15d02cu: goto label_15d02c;
        case 0x15d040u: goto label_15d040;
        case 0x15d04cu: goto label_15d04c;
        case 0x15d068u: goto label_15d068;
        default: break;
    }

    ctx->pc = 0x15cf50u;

    // 0x15cf50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15cf54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15cf58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15cf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15cf5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15cf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15cf60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cf64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cf68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15cf68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cf70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15cf70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15cf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15cf78:
    // 0x15cf78: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x15cf78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x15cf7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15cf80: 0x86630228  lh          $v1, 0x228($s3)
    ctx->pc = 0x15cf80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 552)));
    // 0x15cf84: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15CF84u;
    {
        const bool branch_taken_0x15cf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF84u;
        // 0x15cf88: 0x26740040  addiu       $s4, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf84) {
            ctx->pc = 0x15CFB4u;
            goto label_15cfb4;
        }
    }
    ctx->pc = 0x15CF8Cu;
    // 0x15cf8c: 0xc055dd8  jal         func_157760
    ctx->pc = 0x15CF8Cu;
    SET_GPR_U32(ctx, 31, 0x15CF94u);
    ctx->pc = 0x15CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF8Cu;
    // 0x15cf90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x15CF8Cu, 0x15CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF94u;
label_15cf94:
    // 0x15cf94: 0xc0562bc  jal         func_158AF0
    ctx->pc = 0x15CF94u;
    SET_GPR_U32(ctx, 31, 0x15CF9Cu);
    ctx->pc = 0x15CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF94u;
    // 0x15cf98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AF0u, 0x15CF94u, 0x15CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF9Cu;
label_15cf9c:
    // 0x15cf9c: 0xc055d98  jal         func_157660
    ctx->pc = 0x15CF9Cu;
    SET_GPR_U32(ctx, 31, 0x15CFA4u);
    ctx->pc = 0x15CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF9Cu;
    // 0x15cfa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157660u, 0x15CF9Cu, 0x15CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFA4u;
label_15cfa4:
    // 0x15cfa4: 0xc056250  jal         func_158940
    ctx->pc = 0x15CFA4u;
    SET_GPR_U32(ctx, 31, 0x15CFACu);
    ctx->pc = 0x15CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFA4u;
    // 0x15cfa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158940u, 0x15CFA4u, 0x15CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFACu;
label_15cfac:
    // 0x15cfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cfb0: 0xa26200ab  sb          $v0, 0xAB($s3)
    ctx->pc = 0x15cfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 171), (uint8_t)GPR_U32(ctx, 2));
label_15cfb4:
    // 0x15cfb4: 0x0  nop
    ctx->pc = 0x15cfb4u;
    // NOP
    // 0x15cfb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cfb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15cfbc: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x15cfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15cfc0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15CFC0u;
    {
        const bool branch_taken_0x15cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFC0u;
        // 0x15cfc4: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfc0) {
            ctx->pc = 0x15CF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cf78;
        }
    }
    ctx->pc = 0x15CFC8u;
    // 0x15cfc8: 0x8e032cd0  lw          $v1, 0x2CD0($s0)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x15cfcc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CFCCu;
    {
        const bool branch_taken_0x15cfcc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFCCu;
        // 0x15cfd0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfcc) {
            ctx->pc = 0x15CFDCu;
            goto label_15cfdc;
        }
    }
    ctx->pc = 0x15CFD4u;
    // 0x15cfd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15CFD4u;
    {
        const bool branch_taken_0x15cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFD4u;
        // 0x15cfd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfd4) {
            ctx->pc = 0x15CFF4u;
            goto label_15cff4;
        }
    }
    ctx->pc = 0x15CFDCu;
label_15cfdc:
    // 0x15cfdc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cfe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15cfe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cfe8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15cfec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15cff0: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x15cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_15cff4:
    // 0x15cff4: 0x84a301e8  lh          $v1, 0x1E8($a1)
    ctx->pc = 0x15cff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x15cff8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15cffc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15CFFCu;
    {
        const bool branch_taken_0x15cffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFFCu;
        // 0x15d000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cffc) {
            ctx->pc = 0x15D02Cu;
            goto label_15d02c;
        }
    }
    ctx->pc = 0x15D004u;
    // 0x15d004: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D004u;
    {
        const bool branch_taken_0x15d004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15d004) {
            ctx->pc = 0x15D02Cu;
            goto label_15d02c;
        }
    }
    ctx->pc = 0x15D00Cu;
    // 0x15d00c: 0x84a201ea  lh          $v0, 0x1EA($a1)
    ctx->pc = 0x15d00cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 490)));
    // 0x15d010: 0x2841ffff  slti        $at, $v0, -0x1
    ctx->pc = 0x15d010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15d014: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D014u;
    {
        const bool branch_taken_0x15d014 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D014u;
        // 0x15d018: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d014) {
            ctx->pc = 0x15D02Cu;
            goto label_15d02c;
        }
    }
    ctx->pc = 0x15D01Cu;
    // 0x15d01c: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D01Cu;
    {
        const bool branch_taken_0x15d01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x15D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D01Cu;
        // 0x15d020: 0x26042c00  addiu       $a0, $s0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d01c) {
            ctx->pc = 0x15D02Cu;
            goto label_15d02c;
        }
    }
    ctx->pc = 0x15D024u;
    // 0x15d024: 0xc058174  jal         func_1605D0
    ctx->pc = 0x15D024u;
    SET_GPR_U32(ctx, 31, 0x15D02Cu);
    ctx->pc = 0x1605D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1605D0u, 0x15D024u, 0x15D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D02Cu;
label_15d02c:
    // 0x15d02c: 0x8e112cd4  lw          $s1, 0x2CD4($s0)
    ctx->pc = 0x15d02cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    // 0x15d030: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15d030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d034: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D034u;
    {
        const bool branch_taken_0x15d034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D034u;
        // 0x15d038: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d034) {
            ctx->pc = 0x15D05Cu;
            goto label_15d05c;
        }
    }
    ctx->pc = 0x15D03Cu;
    // 0x15d03c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15d03cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d040:
    // 0x15d040: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x15d044: 0xc041cc0  jal         func_107300
    ctx->pc = 0x15D044u;
    SET_GPR_U32(ctx, 31, 0x15D04Cu);
    ctx->pc = 0x15D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D044u;
    // 0x15d048: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107300u, 0x15D044u, 0x15D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D04Cu;
label_15d04c:
    // 0x15d04c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15d050: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15d050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D054u;
    {
        const bool branch_taken_0x15d054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D054u;
        // 0x15d058: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d054) {
            ctx->pc = 0x15D040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d040;
        }
    }
    ctx->pc = 0x15D05Cu;
label_15d05c:
    // 0x15d05c: 0x0  nop
    ctx->pc = 0x15d05cu;
    // NOP
    // 0x15d060: 0xc057874  jal         func_15E1D0
    ctx->pc = 0x15D060u;
    SET_GPR_U32(ctx, 31, 0x15D068u);
    ctx->pc = 0x15D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D060u;
    // 0x15d064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E1D0u, 0x15D060u, 0x15D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D068u;
label_15d068:
    // 0x15d068: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15d068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d06c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d080: 0x3e00008  jr          $ra
    ctx->pc = 0x15D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D080u;
        // 0x15d084: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D088u;
}
