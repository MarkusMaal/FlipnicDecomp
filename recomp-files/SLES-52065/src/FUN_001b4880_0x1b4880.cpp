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

// Function: FUN_001b4880
// Address: 0x1b4880 - 0x1b4a5c
void FUN_001b4880_0x1b4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4880_0x1b4880");
#endif

    switch (ctx->pc) {
        case 0x1b48c8u: goto label_1b48c8;
        case 0x1b4910u: goto label_1b4910;
        case 0x1b4940u: goto label_1b4940;
        case 0x1b4998u: goto label_1b4998;
        case 0x1b49c4u: goto label_1b49c4;
        default: break;
    }

    ctx->pc = 0x1b4880u;

    // 0x1b4880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b4884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b4888: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b4888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b488c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b488cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b4890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b4890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b489c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b48a0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1b48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1b48a4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x1B48A4u;
    {
        const bool branch_taken_0x1b48a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48A4u;
        // 0x1b48a8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48a4) {
            ctx->pc = 0x1B4A38u;
            goto label_1b4a38;
        }
    }
    ctx->pc = 0x1B48ACu;
    // 0x1b48ac: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1b48acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b48b0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B48B0u;
    {
        const bool branch_taken_0x1b48b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48B0u;
        // 0x1b48b4: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48b0) {
            ctx->pc = 0x1B48F8u;
            goto label_1b48f8;
        }
    }
    ctx->pc = 0x1B48B8u;
    // 0x1b48b8: 0xaea00034  sw          $zero, 0x34($s5)
    ctx->pc = 0x1b48b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 0));
    // 0x1b48bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b48bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B48C0u;
    {
        const bool branch_taken_0x1b48c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48C0u;
        // 0x1b48c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48c0) {
            ctx->pc = 0x1B48DCu;
            goto label_1b48dc;
        }
    }
    ctx->pc = 0x1B48C8u;
label_1b48c8:
    // 0x1b48c8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1b48cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b48d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b48d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b48d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b48d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1b48dc:
    // 0x1b48dc: 0x0  nop
    ctx->pc = 0x1b48dcu;
    // NOP
    // 0x1b48e0: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1b48e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b48e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b48e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B48E8u;
    {
        const bool branch_taken_0x1b48e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b48e8) {
            ctx->pc = 0x1B48C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b48c8;
        }
    }
    ctx->pc = 0x1B48F0u;
    // 0x1b48f0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1B48F0u;
    {
        const bool branch_taken_0x1b48f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48F0u;
        // 0x1b48f4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48f0) {
            ctx->pc = 0x1B4A3Cu;
            goto label_1b4a3c;
        }
    }
    ctx->pc = 0x1B48F8u;
label_1b48f8:
    // 0x1b48f8: 0xffa00078  sd          $zero, 0x78($sp)
    ctx->pc = 0x1b48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 0));
    // 0x1b48fc: 0xffa30070  sd          $v1, 0x70($sp)
    ctx->pc = 0x1b48fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 3));
    // 0x1b4900: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b4900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b4904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4908: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1B4908u;
    {
        const bool branch_taken_0x1b4908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4908u;
        // 0x1b490c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4908) {
            ctx->pc = 0x1B4A08u;
            goto label_1b4a08;
        }
    }
    ctx->pc = 0x1B4910u;
label_1b4910:
    // 0x1b4910: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1b4914: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b4918: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1b4918u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b491c: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B491Cu;
    {
        const bool branch_taken_0x1b491c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b491c) {
            ctx->pc = 0x1B49FCu;
            goto label_1b49fc;
        }
    }
    ctx->pc = 0x1B4924u;
    // 0x1b4924: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b4928: 0x27b40074  addiu       $s4, $sp, 0x74
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1b492c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b4930: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4930u;
    {
        const bool branch_taken_0x1b4930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4930) {
            ctx->pc = 0x1B496Cu;
            goto label_1b496c;
        }
    }
    ctx->pc = 0x1B4938u;
    // 0x1b4938: 0xc06d174  jal         func_1B45D0
    ctx->pc = 0x1B4938u;
    SET_GPR_U32(ctx, 31, 0x1B4940u);
    ctx->pc = 0x1B493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4938u;
    // 0x1b493c: 0x8ea40020  lw          $a0, 0x20($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45D0u, 0x1B4938u, 0x1B4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4940u;
label_1b4940:
    // 0x1b4940: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1b4940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b4944: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b4948: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b4948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b494c: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b494cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b4950: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1b4950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1b4954: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b4958: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b4958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b495c: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1b495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1b4960: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1b4960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1b4964: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b4964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4968: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1b4968u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_1b496c:
    // 0x1b496c: 0x0  nop
    ctx->pc = 0x1b496cu;
    // NOP
    // 0x1b4970: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4970u;
    {
        const bool branch_taken_0x1b4970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4970u;
        // 0x1b4974: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4970) {
            ctx->pc = 0x1B4990u;
            goto label_1b4990;
        }
    }
    ctx->pc = 0x1B4978u;
    // 0x1b4978: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b497c: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b497cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b4980: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b4980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b4984: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1b4984u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1b4988: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b4988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b498c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1b498cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1b4990:
    // 0x1b4990: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B4990u;
    {
        const bool branch_taken_0x1b4990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4990) {
            ctx->pc = 0x1B49F0u;
            goto label_1b49f0;
        }
    }
    ctx->pc = 0x1B4998u;
label_1b4998:
    // 0x1b4998: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x1b4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1b499c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49a0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1b49a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b49a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b49a8: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x1b49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
    // 0x1b49ac: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1b49b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1b49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b49b4: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x1b49b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b49b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b49bc: 0xc06d198  jal         func_1B4660
    ctx->pc = 0x1B49BCu;
    SET_GPR_U32(ctx, 31, 0x1B49C4u);
    ctx->pc = 0x1B49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49BCu;
    // 0x1b49c0: 0x39900  sll         $s3, $v1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4660u, 0x1B49BCu, 0x1B49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49C4u;
label_1b49c4:
    // 0x1b49c4: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B49C4u;
    {
        const bool branch_taken_0x1b49c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49C4u;
        // 0x1b49c8: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49c4) {
            ctx->pc = 0x1B49E4u;
            goto label_1b49e4;
        }
    }
    ctx->pc = 0x1B49CCu;
    // 0x1b49cc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b49d0: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b49d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b49d4: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b49d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b49d8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1b49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1b49dc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b49dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b49e0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1b49e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1b49e4:
    // 0x1b49e4: 0x0  nop
    ctx->pc = 0x1b49e4u;
    // NOP
    // 0x1b49e8: 0x1660ffeb  bnez        $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B49E8u;
    {
        const bool branch_taken_0x1b49e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b49e8) {
            ctx->pc = 0x1B4998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4998;
        }
    }
    ctx->pc = 0x1B49F0u;
label_1b49f0:
    // 0x1b49f0: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x1b49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1b49f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B49F4u;
    {
        const bool branch_taken_0x1b49f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49f4) {
            ctx->pc = 0x1B4A18u;
            goto label_1b4a18;
        }
    }
    ctx->pc = 0x1B49FCu;
label_1b49fc:
    // 0x1b49fc: 0x0  nop
    ctx->pc = 0x1b49fcu;
    // NOP
    // 0x1b4a00: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b4a04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b4a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b4a08:
    // 0x1b4a08: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1b4a0c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1b4a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b4a10: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1B4A10u;
    {
        const bool branch_taken_0x1b4a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a10) {
            ctx->pc = 0x1B4910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4910;
        }
    }
    ctx->pc = 0x1B4A18u;
label_1b4a18:
    // 0x1b4a18: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1b4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b4a1c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b4a20: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1b4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4a24: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b4a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b4a28: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b4a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b4a2c: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x1b4a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x1b4a30: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b4a30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4a34: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1b4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1b4a38:
    // 0x1b4a38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b4a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b4a3c:
    // 0x1b4a3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b4a3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4a40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b4a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b4a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a54: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A54u;
        // 0x1b4a58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4A5Cu;
}
