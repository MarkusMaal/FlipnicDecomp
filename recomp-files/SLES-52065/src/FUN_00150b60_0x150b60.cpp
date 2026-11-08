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

// Function: FUN_00150b60
// Address: 0x150b60 - 0x150d28
void FUN_00150b60_0x150b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150b60_0x150b60");
#endif

    switch (ctx->pc) {
        case 0x150bc8u: goto label_150bc8;
        case 0x150bdcu: goto label_150bdc;
        case 0x150c08u: goto label_150c08;
        case 0x150c28u: goto label_150c28;
        case 0x150c30u: goto label_150c30;
        case 0x150c5cu: goto label_150c5c;
        case 0x150c9cu: goto label_150c9c;
        case 0x150cacu: goto label_150cac;
        case 0x150ce0u: goto label_150ce0;
        case 0x150cfcu: goto label_150cfc;
        default: break;
    }

    ctx->pc = 0x150b60u;

    // 0x150b60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x150b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x150b64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x150b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x150b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150b74: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x150b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x150b78: 0x8c23f350  lw          $v1, -0xCB0($at)
    ctx->pc = 0x150b78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F350u));
    // 0x150b7c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150b80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x150b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x150b84: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150b88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x150b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x150b8c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x150b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x150b90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x150b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x150b94: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x150b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x150b98: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150b9c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x150b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x150ba0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x150ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x150ba4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150ba8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x150ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x150bac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x150bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150bb0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x150bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x150bb4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x150BB4u;
    {
        const bool branch_taken_0x150bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BB4u;
        // 0x150bb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bb4) {
            ctx->pc = 0x150D10u;
            goto label_150d10;
        }
    }
    ctx->pc = 0x150BBCu;
    // 0x150bbc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x150bc0: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x150BC0u;
    SET_GPR_U32(ctx, 31, 0x150BC8u);
    ctx->pc = 0x150BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BC0u;
    // 0x150bc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x150BC0u, 0x150BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BC8u;
label_150bc8:
    // 0x150bc8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bd4: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x150BD4u;
    SET_GPR_U32(ctx, 31, 0x150BDCu);
    ctx->pc = 0x150BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BD4u;
    // 0x150bd8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x150BD4u, 0x150BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BDCu;
label_150bdc:
    // 0x150bdc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x150bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150be0: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x150be4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150be8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x150be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x150bec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150BECu;
    {
        const bool branch_taken_0x150bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bec) {
            ctx->pc = 0x150BF8u;
            goto label_150bf8;
        }
    }
    ctx->pc = 0x150BF4u;
    // 0x150bf4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x150bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_150bf8:
    // 0x150bf8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150bfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150c00: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x150C00u;
    SET_GPR_U32(ctx, 31, 0x150C08u);
    ctx->pc = 0x150C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C00u;
    // 0x150c04: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x150C00u, 0x150C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C08u;
label_150c08:
    // 0x150c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c0c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150C0Cu;
    {
        const bool branch_taken_0x150c0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x150C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C0Cu;
        // 0x150c10: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c0c) {
            ctx->pc = 0x150C30u;
            goto label_150c30;
        }
    }
    ctx->pc = 0x150C14u;
    // 0x150c14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x150c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x150c18: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x150c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x150c1c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x150c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150c20: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x150C20u;
    SET_GPR_U32(ctx, 31, 0x150C28u);
    ctx->pc = 0x150C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C20u;
    // 0x150c24: 0x24a5f330  addiu       $a1, $a1, -0xCD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x150C20u, 0x150C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C28u;
label_150c28:
    // 0x150c28: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x150C28u;
    SET_GPR_U32(ctx, 31, 0x150C30u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x150C28u, 0x150C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C30u;
label_150c30:
    // 0x150c30: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c34: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x150c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x150c38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x150c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150c3c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x150c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x150c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150c48: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x150c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x150c4c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c50: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x150c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x150c54: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x150C54u;
    SET_GPR_U32(ctx, 31, 0x150C5Cu);
    ctx->pc = 0x150C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C54u;
    // 0x150c58: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x150C54u, 0x150C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C5Cu;
label_150c5c:
    // 0x150c5c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x150c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150c64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150c6c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x150c70: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150c74: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x150c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x150c78: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x150c78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x150c7c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x150c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c80: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x150c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x150c84: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x150c88: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x150c8c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150c90: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x150c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150c94: 0xc054380  jal         func_150E00
    ctx->pc = 0x150C94u;
    SET_GPR_U32(ctx, 31, 0x150C9Cu);
    ctx->pc = 0x150C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C94u;
    // 0x150c98: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E00u, 0x150C94u, 0x150C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C9Cu;
label_150c9c:
    // 0x150c9c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x150ca0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x150ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150ca4: 0xc054380  jal         func_150E00
    ctx->pc = 0x150CA4u;
    SET_GPR_U32(ctx, 31, 0x150CACu);
    ctx->pc = 0x150CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CA4u;
    // 0x150ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E00u, 0x150CA4u, 0x150CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CACu;
label_150cac:
    // 0x150cac: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150cb0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cb4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x150cb4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150cb8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x150cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150cbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x150cc0: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x150cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x150cc4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x150cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x150cc8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x150cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x150ccc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x150cccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150cd0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x150cd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x150cd4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x150cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x150cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150CD8u;
    {
        const bool branch_taken_0x150cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CD8u;
        // 0x150cdc: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cd8) {
            ctx->pc = 0x150CFCu;
            goto label_150cfc;
        }
    }
    ctx->pc = 0x150CE0u;
label_150ce0:
    // 0x150ce0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150CE0u;
    {
        const bool branch_taken_0x150ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ce0) {
            ctx->pc = 0x150CF0u;
            goto label_150cf0;
        }
    }
    ctx->pc = 0x150CE8u;
    // 0x150ce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150cec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x150cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_150cf0:
    // 0x150cf0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cf4: 0xc05434c  jal         func_150D30
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x150CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CF4u;
    // 0x150cf8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150D30u, 0x150CF4u, 0x150CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x0  nop
    ctx->pc = 0x150cfcu;
    // NOP
    // 0x150d00: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x150d04: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x150d08: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x150D08u;
    {
        const bool branch_taken_0x150d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150d08) {
            ctx->pc = 0x150CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150ce0;
        }
    }
    ctx->pc = 0x150D10u;
label_150d10:
    // 0x150d10: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x150d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150d20: 0x3e00008  jr          $ra
    ctx->pc = 0x150D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D20u;
        // 0x150d24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150D28u;
}
