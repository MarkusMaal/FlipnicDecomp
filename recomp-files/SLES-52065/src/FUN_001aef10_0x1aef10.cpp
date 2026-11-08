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

// Function: FUN_001aef10
// Address: 0x1aef10 - 0x1af088
void FUN_001aef10_0x1aef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aef10_0x1aef10");
#endif

    switch (ctx->pc) {
        case 0x1aef64u: goto label_1aef64;
        case 0x1aef80u: goto label_1aef80;
        case 0x1aefb0u: goto label_1aefb0;
        case 0x1aefc8u: goto label_1aefc8;
        case 0x1aefe4u: goto label_1aefe4;
        case 0x1aeff8u: goto label_1aeff8;
        case 0x1af00cu: goto label_1af00c;
        default: break;
    }

    ctx->pc = 0x1aef10u;

    // 0x1aef10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1aef14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1aef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1aef18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1aef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1aef1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1aef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1aef20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1aef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aef24: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1aef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aef2c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1aef2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1aef30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aef34: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1aef34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aef3c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1aef3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1aef40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aef40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aef44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1aef44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aef4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aef50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aef50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef54: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x1aef54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x1aef58: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AEF58u;
    {
        const bool branch_taken_0x1aef58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF58u;
        // 0x1aef5c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef58) {
            ctx->pc = 0x1AEF9Cu;
            goto label_1aef9c;
        }
    }
    ctx->pc = 0x1AEF60u;
    // 0x1aef60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aef60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aef64:
    // 0x1aef64: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1aef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1aef68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1aef68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef6c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aef70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1aef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1aef74: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1aef74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aef78: 0xc057090  jal         func_15C240
    ctx->pc = 0x1AEF78u;
    SET_GPR_U32(ctx, 31, 0x1AEF80u);
    ctx->pc = 0x1AEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF78u;
    // 0x1aef7c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x1AEF78u, 0x1AEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF80u;
label_1aef80:
    // 0x1aef80: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1aef84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1aef88: 0x235182a  slt         $v1, $s1, $s5
    ctx->pc = 0x1aef88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1aef8c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1aef90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aef94: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AEF94u;
    {
        const bool branch_taken_0x1aef94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF94u;
        // 0x1aef98: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef94) {
            ctx->pc = 0x1AEF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aef64;
        }
    }
    ctx->pc = 0x1AEF9Cu;
label_1aef9c:
    // 0x1aef9c: 0x0  nop
    ctx->pc = 0x1aef9cu;
    // NOP
    // 0x1aefa0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1aefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1aefa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aefa8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1AEFA8u;
    SET_GPR_U32(ctx, 31, 0x1AEFB0u);
    ctx->pc = 0x1AEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFA8u;
    // 0x1aefac: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1AEFA8u, 0x1AEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFB0u;
label_1aefb0:
    // 0x1aefb0: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1aefb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x1aefb4: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1aefb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1aefb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aefb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefbc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1AEFBCu;
    {
        const bool branch_taken_0x1aefbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFBCu;
        // 0x1aefc0: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefbc) {
            ctx->pc = 0x1AF058u;
            goto label_1af058;
        }
    }
    ctx->pc = 0x1AEFC4u;
    // 0x1aefc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aefc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aefc8:
    // 0x1aefc8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1aefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1aefcc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1aefccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aefd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aefd4: 0x53f021  addu        $fp, $v0, $s3
    ctx->pc = 0x1aefd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1aefd8: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1aefd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1aefdc: 0xc057090  jal         func_15C240
    ctx->pc = 0x1AEFDCu;
    SET_GPR_U32(ctx, 31, 0x1AEFE4u);
    ctx->pc = 0x1AEFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFDCu;
    // 0x1aefe0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x1AEFDCu, 0x1AEFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFE4u;
label_1aefe4:
    // 0x1aefe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aefe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefe8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1aefe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aefec: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1aefecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1aeff0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AEFF0u;
    {
        const bool branch_taken_0x1aeff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFF0u;
        // 0x1aeff4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeff0) {
            ctx->pc = 0x1AF044u;
            goto label_1af044;
        }
    }
    ctx->pc = 0x1AEFF8u;
label_1aeff8:
    // 0x1aeff8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aeffc: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1af000: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1af000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af004: 0xc05704c  jal         func_15C130
    ctx->pc = 0x1AF004u;
    SET_GPR_U32(ctx, 31, 0x1AF00Cu);
    ctx->pc = 0x1AF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF004u;
    // 0x1af008: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1AF004u, 0x1AF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1af00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1af010: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1af014: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1af014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1af018: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x1af018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1af01c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1af01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1af020: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1af024: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1af024u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1af028: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1af028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1af02c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1af02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1af030: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1af030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1af034: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1af034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1af038: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af03c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AF03Cu;
    {
        const bool branch_taken_0x1af03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF03Cu;
        // 0x1af040: 0x24870001  addiu       $a3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af03c) {
            ctx->pc = 0x1AEFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeff8;
        }
    }
    ctx->pc = 0x1AF044u;
label_1af044:
    // 0x1af044: 0x0  nop
    ctx->pc = 0x1af044u;
    // NOP
    // 0x1af048: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1af04c: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x1af04cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1af050: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1AF050u;
    {
        const bool branch_taken_0x1af050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF050u;
        // 0x1af054: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af050) {
            ctx->pc = 0x1AEFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aefc8;
        }
    }
    ctx->pc = 0x1AF058u;
label_1af058:
    // 0x1af058: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1af058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1af05c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1af05cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af060: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1af060u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af064: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1af064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af068: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1af068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af06c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1af06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af080: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF080u;
        // 0x1af084: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF088u;
}
