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

// Function: FUN_001bbd60
// Address: 0x1bbd60 - 0x1bc070
void FUN_001bbd60_0x1bbd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bbd60_0x1bbd60");
#endif

    switch (ctx->pc) {
        case 0x1bbdc4u: goto label_1bbdc4;
        case 0x1bbdccu: goto label_1bbdcc;
        case 0x1bbe44u: goto label_1bbe44;
        case 0x1bbe4cu: goto label_1bbe4c;
        case 0x1bbe80u: goto label_1bbe80;
        case 0x1bbea4u: goto label_1bbea4;
        case 0x1bbeacu: goto label_1bbeac;
        case 0x1bbed8u: goto label_1bbed8;
        case 0x1bbefcu: goto label_1bbefc;
        case 0x1bbf04u: goto label_1bbf04;
        case 0x1bbf1cu: goto label_1bbf1c;
        case 0x1bbf38u: goto label_1bbf38;
        case 0x1bbf64u: goto label_1bbf64;
        case 0x1bbfd4u: goto label_1bbfd4;
        case 0x1bbfdcu: goto label_1bbfdc;
        case 0x1bc000u: goto label_1bc000;
        case 0x1bc020u: goto label_1bc020;
        default: break;
    }

    ctx->pc = 0x1bbd60u;

    // 0x1bbd60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bbd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1bbd64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bbd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1bbd68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bbd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bbd6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bbd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bbd70: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1bbd70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bbd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bbd78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bbd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bbd7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bbd80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bbd84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbd88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bbd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbd90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bbd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd94: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x1bbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x1bbd98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bbd9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbda0: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1bbda0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bbda4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBDA4u;
    {
        const bool branch_taken_0x1bbda4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDA4u;
        // 0x1bbda8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbda4) {
            ctx->pc = 0x1BBDCCu;
            goto label_1bbdcc;
        }
    }
    ctx->pc = 0x1BBDACu;
    // 0x1bbdac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbdb0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbdb4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bbdb8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbdbc: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBDBCu;
    SET_GPR_U32(ctx, 31, 0x1BBDC4u);
    ctx->pc = 0x1BBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDBCu;
    // 0x1bbdc0: 0x24a51110  addiu       $a1, $a1, 0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBDBCu, 0x1BBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDC4u;
label_1bbdc4:
    // 0x1bbdc4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBDC4u;
    SET_GPR_U32(ctx, 31, 0x1BBDCCu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBDC4u, 0x1BBDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDCCu;
label_1bbdcc:
    // 0x1bbdcc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bbdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbdd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bbdd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbdd8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bbddc: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1bbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x1bbde0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1bbde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1bbde4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1bbde4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bbde8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBDE8u;
    {
        const bool branch_taken_0x1bbde8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDE8u;
        // 0x1bbdec: 0x27a20098  addiu       $v0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbde8) {
            ctx->pc = 0x1BBDFCu;
            goto label_1bbdfc;
        }
    }
    ctx->pc = 0x1BBDF0u;
    // 0x1bbdf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBDF0u;
    {
        const bool branch_taken_0x1bbdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDF0u;
        // 0x1bbdf4: 0x27a2009c  addiu       $v0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdf0) {
            ctx->pc = 0x1BBDFCu;
            goto label_1bbdfc;
        }
    }
    ctx->pc = 0x1BBDF8u;
    // 0x1bbdf8: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x1bbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1bbdfc:
    // 0x1bbdfc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1bbdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbe00: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1bbe04: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1bbe04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1bbe08: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBE08u;
    {
        const bool branch_taken_0x1bbe08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe08) {
            ctx->pc = 0x1BBE2Cu;
            goto label_1bbe2c;
        }
    }
    ctx->pc = 0x1BBE10u;
    // 0x1bbe10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbe14: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1bbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bbe18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbe1c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1bbe20: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1bbe20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bbe24: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBE24u;
    {
        const bool branch_taken_0x1bbe24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe24) {
            ctx->pc = 0x1BBE4Cu;
            goto label_1bbe4c;
        }
    }
    ctx->pc = 0x1BBE2Cu;
label_1bbe2c:
    // 0x1bbe2c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbe2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbe30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe34: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bbe38: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbe3c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE44u);
    ctx->pc = 0x1BBE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE3Cu;
    // 0x1bbe40: 0x24a51140  addiu       $a1, $a1, 0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBE3Cu, 0x1BBE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE44u;
label_1bbe44:
    // 0x1bbe44: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBE44u;
    SET_GPR_U32(ctx, 31, 0x1BBE4Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBE44u, 0x1BBE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE4Cu;
label_1bbe4c:
    // 0x1bbe4c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bbe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbe50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1bbe50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bbe54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bbe58: 0xb31823  subu        $v1, $a1, $s3
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1bbe5c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1bbe5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bbe60: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBE60u;
    {
        const bool branch_taken_0x1bbe60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE60u;
        // 0x1bbe64: 0x203a021  addu        $s4, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe60) {
            ctx->pc = 0x1BBE78u;
            goto label_1bbe78;
        }
    }
    ctx->pc = 0x1BBE68u;
    // 0x1bbe68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbe6c: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x1bbe6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1bbe70: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x1BBE70u;
    {
        const bool branch_taken_0x1bbe70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe70) {
            ctx->pc = 0x1BBFE4u;
            goto label_1bbfe4;
        }
    }
    ctx->pc = 0x1BBE78u;
label_1bbe78:
    // 0x1bbe78: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BBE78u;
    SET_GPR_U32(ctx, 31, 0x1BBE80u);
    ctx->pc = 0x1BBE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE78u;
    // 0x1bbe7c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BBE78u, 0x1BBE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE80u;
label_1bbe80:
    // 0x1bbe80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bbe80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe84: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBE84u;
    {
        const bool branch_taken_0x1bbe84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe84) {
            ctx->pc = 0x1BBEACu;
            goto label_1bbeac;
        }
    }
    ctx->pc = 0x1BBE8Cu;
    // 0x1bbe8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe94: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bbe98: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbe9c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BBEA4u);
    ctx->pc = 0x1BBEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE9Cu;
    // 0x1bbea0: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBE9Cu, 0x1BBEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEA4u;
label_1bbea4:
    // 0x1bbea4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBEA4u;
    SET_GPR_U32(ctx, 31, 0x1BBEACu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBEA4u, 0x1BBEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEACu;
label_1bbeac:
    // 0x1bbeac: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BBEACu;
    {
        const bool branch_taken_0x1bbeac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbeac) {
            ctx->pc = 0x1BBF08u;
            goto label_1bbf08;
        }
    }
    ctx->pc = 0x1BBEB4u;
    // 0x1bbeb4: 0x26830003  addiu       $v1, $s4, 0x3
    ctx->pc = 0x1bbeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x1bbeb8: 0x32820003  andi        $v0, $s4, 0x3
    ctx->pc = 0x1bbeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x1bbebc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbec4: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x1bbec4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x1bbec8: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1bbec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1bbecc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1bbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bbed0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BBED0u;
    SET_GPR_U32(ctx, 31, 0x1BBED8u);
    ctx->pc = 0x1BBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBED0u;
    // 0x1bbed4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BBED0u, 0x1BBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBED8u;
label_1bbed8:
    // 0x1bbed8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bbed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbedc: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBEDCu;
    {
        const bool branch_taken_0x1bbedc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbedc) {
            ctx->pc = 0x1BBF04u;
            goto label_1bbf04;
        }
    }
    ctx->pc = 0x1BBEE4u;
    // 0x1bbee4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbee8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbeec: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bbef0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbef4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBEF4u;
    SET_GPR_U32(ctx, 31, 0x1BBEFCu);
    ctx->pc = 0x1BBEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEF4u;
    // 0x1bbef8: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBEF4u, 0x1BBEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEFCu;
label_1bbefc:
    // 0x1bbefc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBEFCu;
    SET_GPR_U32(ctx, 31, 0x1BBF04u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBEFCu, 0x1BBF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF04u;
label_1bbf04:
    // 0x1bbf04: 0xaeb6000c  sw          $s6, 0xC($s5)
    ctx->pc = 0x1bbf04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 22));
label_1bbf08:
    // 0x1bbf08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbf0c: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1bbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf10: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbf14: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BBF14u;
    SET_GPR_U32(ctx, 31, 0x1BBF1Cu);
    ctx->pc = 0x1BBF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF14u;
    // 0x1bbf18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BBF14u, 0x1BBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF1Cu;
label_1bbf1c:
    // 0x1bbf1c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBF1Cu;
    {
        const bool branch_taken_0x1bbf1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf1c) {
            ctx->pc = 0x1BBF38u;
            goto label_1bbf38;
        }
    }
    ctx->pc = 0x1BBF24u;
    // 0x1bbf24: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf28: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x1bbf28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1bbf2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bbf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf30: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1BBF30u;
    SET_GPR_U32(ctx, 31, 0x1BBF38u);
    ctx->pc = 0x1BBF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF30u;
    // 0x1bbf34: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1BBF30u, 0x1BBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF38u;
label_1bbf38:
    // 0x1bbf38: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1bbf38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbf3c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1bbf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1bbf40: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1bbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf44: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1bbf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bbf48: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1bbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bbf4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1bbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bbf50: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1bbf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1bbf54: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1bbf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1bbf58: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1bbf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1bbf5c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BBF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF64u);
    ctx->pc = 0x1BBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF5Cu;
    // 0x1bbf60: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BBF5Cu, 0x1BBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF64u;
label_1bbf64:
    // 0x1bbf64: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bbf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bbf68: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf6c: 0x90233010  lbu         $v1, 0x3010($at)
    ctx->pc = 0x1bbf6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213010u));
    // 0x1bbf70: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1bbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1bbf74: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1bbf74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbf78: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1bbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1bbf7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbf80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bbf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bbf84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBF84u;
    {
        const bool branch_taken_0x1bbf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf84) {
            ctx->pc = 0x1BBFA4u;
            goto label_1bbfa4;
        }
    }
    ctx->pc = 0x1BBF8Cu;
    // 0x1bbf8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBF8Cu;
    {
        const bool branch_taken_0x1bbf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf8c) {
            ctx->pc = 0x1BBF9Cu;
            goto label_1bbf9c;
        }
    }
    ctx->pc = 0x1BBF94u;
    // 0x1bbf94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBF94u;
    {
        const bool branch_taken_0x1bbf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF94u;
        // 0x1bbf98: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf94) {
            ctx->pc = 0x1BBFA4u;
            goto label_1bbfa4;
        }
    }
    ctx->pc = 0x1BBF9Cu;
label_1bbf9c:
    // 0x1bbf9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbfa0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bbfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1bbfa4:
    // 0x1bbfa4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bbfa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bbfac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bbfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bbfb0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1bbfb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1bbfb4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1bbfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1bbfb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbfbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBFBCu;
    {
        const bool branch_taken_0x1bbfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfbc) {
            ctx->pc = 0x1BBFDCu;
            goto label_1bbfdc;
        }
    }
    ctx->pc = 0x1BBFC4u;
    // 0x1bbfc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBFC4u;
    {
        const bool branch_taken_0x1bbfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfc4) {
            ctx->pc = 0x1BBFD4u;
            goto label_1bbfd4;
        }
    }
    ctx->pc = 0x1BBFCCu;
    // 0x1bbfcc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BBFCCu;
    SET_GPR_U32(ctx, 31, 0x1BBFD4u);
    ctx->pc = 0x1BBFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFCCu;
    // 0x1bbfd0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BBFCCu, 0x1BBFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFD4u;
label_1bbfd4:
    // 0x1bbfd4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BBFD4u;
    SET_GPR_U32(ctx, 31, 0x1BBFDCu);
    ctx->pc = 0x1BBFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFD4u;
    // 0x1bbfd8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BBFD4u, 0x1BBFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFDCu;
label_1bbfdc:
    // 0x1bbfdc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBFDCu;
    {
        const bool branch_taken_0x1bbfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFDCu;
        // 0x1bbfe0: 0xae550000  sw          $s5, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfdc) {
            ctx->pc = 0x1BC040u;
            goto label_1bc040;
        }
    }
    ctx->pc = 0x1BBFE4u;
label_1bbfe4:
    // 0x1bbfe4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bbfe8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1bbfec: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1bbfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bbff0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1bbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bbff4: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x1bbff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1bbff8: 0xc07fe2a  jal         func_1FF8A8
    ctx->pc = 0x1BBFF8u;
    SET_GPR_U32(ctx, 31, 0x1BC000u);
    ctx->pc = 0x1BBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFF8u;
    // 0x1bbffc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1BBFF8u, 0x1BC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC000u;
label_1bc000:
    // 0x1bc000: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC000u;
    {
        const bool branch_taken_0x1bc000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc000) {
            ctx->pc = 0x1BC020u;
            goto label_1bc020;
        }
    }
    ctx->pc = 0x1BC008u;
    // 0x1bc008: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc00c: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x1bc00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1bc010: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bc010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc014: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bc014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc018: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1BC018u;
    SET_GPR_U32(ctx, 31, 0x1BC020u);
    ctx->pc = 0x1BC01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC018u;
    // 0x1bc01c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1BC018u, 0x1BC020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC020u;
label_1bc020:
    // 0x1bc020: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc024: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bc024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bc028: 0x90233018  lbu         $v1, 0x3018($at)
    ctx->pc = 0x1bc028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213018u));
    // 0x1bc02c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bc02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc030: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1bc034: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1bc034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bc038: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc03c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1bc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_1bc040:
    // 0x1bc040: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bc040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc044: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bc044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bc048: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bc048u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc04c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bc04cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc050: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bc050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc054: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bc054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc058: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc05c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc068: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC068u;
        // 0x1bc06c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC070u;
}
