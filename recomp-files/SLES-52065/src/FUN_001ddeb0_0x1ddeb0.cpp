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

// Function: FUN_001ddeb0
// Address: 0x1ddeb0 - 0x1ddff4
void FUN_001ddeb0_0x1ddeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddeb0_0x1ddeb0");
#endif

    switch (ctx->pc) {
        case 0x1ddef8u: goto label_1ddef8;
        case 0x1ddf10u: goto label_1ddf10;
        case 0x1ddf48u: goto label_1ddf48;
        default: break;
    }

    ctx->pc = 0x1ddeb0u;

    // 0x1ddeb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ddeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ddeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddeb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ddeb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ddebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ddec0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ddec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ddec4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ddec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddec8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ddec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ddecc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ddeccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dded0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dded4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dded4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dded8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ddedc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ddedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ddee0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ddee4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ddee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ddee8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1ddee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1ddeec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ddeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ddef0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DDEF0u;
    SET_GPR_U32(ctx, 31, 0x1DDEF8u);
    ctx->pc = 0x1DDEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEF0u;
    // 0x1ddef4: 0x24170004  addiu       $s7, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DDEF0u, 0x1DDEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEF8u;
label_1ddef8:
    // 0x1ddef8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ddef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddefc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ddefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ddf00: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1ddf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1ddf04: 0x24517330  addiu       $s1, $v0, 0x7330
    ctx->pc = 0x1ddf04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1ddf08: 0x247e72f8  addiu       $fp, $v1, 0x72F8
    ctx->pc = 0x1ddf08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 29432));
    // 0x1ddf0c: 0x0  nop
    ctx->pc = 0x1ddf0cu;
    // NOP
label_1ddf10:
    // 0x1ddf10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ddf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ddf14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ddf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ddf18: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DDF18u;
    {
        const bool branch_taken_0x1ddf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf18) {
            ctx->pc = 0x1DDF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF18u;
            // 0x1ddf1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF88u;
            goto label_1ddf88;
        }
    }
    ctx->pc = 0x1DDF20u;
    // 0x1ddf20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ddf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ddf24: 0x54540018  bnel        $v0, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDF24u;
    {
        const bool branch_taken_0x1ddf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1ddf24) {
            ctx->pc = 0x1DDF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF24u;
            // 0x1ddf28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF88u;
            goto label_1ddf88;
        }
    }
    ctx->pc = 0x1DDF2Cu;
    // 0x1ddf2c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ddf30: 0x54530015  bnel        $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DDF30u;
    {
        const bool branch_taken_0x1ddf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ddf30) {
            ctx->pc = 0x1DDF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF30u;
            // 0x1ddf34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF88u;
            goto label_1ddf88;
        }
    }
    ctx->pc = 0x1DDF38u;
    // 0x1ddf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf40: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1DDF40u;
    SET_GPR_U32(ctx, 31, 0x1DDF48u);
    ctx->pc = 0x1DDF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF40u;
    // 0x1ddf44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1DDF40u, 0x1DDF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF48u;
label_1ddf48:
    // 0x1ddf48: 0x2123004  sllv        $a2, $s2, $s0
    ctx->pc = 0x1ddf48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x1ddf4c: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1ddf4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ddf50: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1ddf50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf54: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1ddf54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ddf58: 0x2604ffe8  addiu       $a0, $s0, -0x18
    ctx->pc = 0x1ddf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1ddf5c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1ddf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1ddf60: 0x922804  sllv        $a1, $s2, $a0
    ctx->pc = 0x1ddf60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x1ddf64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDF64u;
    {
        const bool branch_taken_0x1ddf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF64u;
        // 0x1ddf68: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf64) {
            ctx->pc = 0x1DDF78u;
            goto label_1ddf78;
        }
    }
    ctx->pc = 0x1DDF6Cu;
    // 0x1ddf6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDF6Cu;
    {
        const bool branch_taken_0x1ddf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF6Cu;
        // 0x1ddf70: 0x861025  or          $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf6c) {
            ctx->pc = 0x1DDF7Cu;
            goto label_1ddf7c;
        }
    }
    ctx->pc = 0x1DDF74u;
    // 0x1ddf74: 0x0  nop
    ctx->pc = 0x1ddf74u;
    // NOP
label_1ddf78:
    // 0x1ddf78: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1ddf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ddf7c:
    // 0x1ddf7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ddf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ddf80: 0xae36001c  sw          $s6, 0x1C($s1)
    ctx->pc = 0x1ddf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 22));
    // 0x1ddf84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ddf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ddf88:
    // 0x1ddf88: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ddf88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ddf8c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1DDF8Cu;
    {
        const bool branch_taken_0x1ddf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF8Cu;
        // 0x1ddf90: 0x263100e8  addiu       $s1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf8c) {
            ctx->pc = 0x1DDF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddf10;
        }
    }
    ctx->pc = 0x1DDF94u;
    // 0x1ddf94: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDF94u;
    {
        const bool branch_taken_0x1ddf94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF94u;
        // 0x1ddf98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf94) {
            ctx->pc = 0x1DDFC8u;
            goto label_1ddfc8;
        }
    }
    ctx->pc = 0x1DDF9Cu;
    // 0x1ddf9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddfa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddfa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddfa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddfa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddfa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ddfa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddfac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ddfacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ddfb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ddfb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddfb4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ddfb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ddfb8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ddfb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddfbc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ddfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ddfc0: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DDFC0u;
    ctx->pc = 0x1DDFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFC0u;
    // 0x1ddfc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDFC8u;
label_1ddfc8:
    // 0x1ddfc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddfc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddfcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddfccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddfd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddfd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddfd4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ddfd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddfd8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ddfd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ddfdc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ddfdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddfe0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ddfe0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ddfe4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ddfe4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddfe8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ddfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ddfec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFECu;
        // 0x1ddff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDFF4u;
}
