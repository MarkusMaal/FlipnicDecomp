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

// Function: FUN_001e5830
// Address: 0x1e5830 - 0x1e59bc
void FUN_001e5830_0x1e5830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5830_0x1e5830");
#endif

    switch (ctx->pc) {
        case 0x1e5830u: goto label_1e5830;
        case 0x1e5834u: goto label_1e5834;
        case 0x1e5838u: goto label_1e5838;
        case 0x1e583cu: goto label_1e583c;
        case 0x1e5840u: goto label_1e5840;
        case 0x1e5844u: goto label_1e5844;
        case 0x1e5848u: goto label_1e5848;
        case 0x1e584cu: goto label_1e584c;
        case 0x1e5850u: goto label_1e5850;
        case 0x1e5854u: goto label_1e5854;
        case 0x1e5858u: goto label_1e5858;
        case 0x1e585cu: goto label_1e585c;
        case 0x1e5860u: goto label_1e5860;
        case 0x1e5864u: goto label_1e5864;
        case 0x1e5868u: goto label_1e5868;
        case 0x1e586cu: goto label_1e586c;
        case 0x1e5870u: goto label_1e5870;
        case 0x1e5874u: goto label_1e5874;
        case 0x1e5878u: goto label_1e5878;
        case 0x1e587cu: goto label_1e587c;
        case 0x1e5880u: goto label_1e5880;
        case 0x1e5884u: goto label_1e5884;
        case 0x1e5888u: goto label_1e5888;
        case 0x1e588cu: goto label_1e588c;
        case 0x1e5890u: goto label_1e5890;
        case 0x1e5894u: goto label_1e5894;
        case 0x1e5898u: goto label_1e5898;
        case 0x1e589cu: goto label_1e589c;
        case 0x1e58a0u: goto label_1e58a0;
        case 0x1e58a4u: goto label_1e58a4;
        case 0x1e58a8u: goto label_1e58a8;
        case 0x1e58acu: goto label_1e58ac;
        case 0x1e58b0u: goto label_1e58b0;
        case 0x1e58b4u: goto label_1e58b4;
        case 0x1e58b8u: goto label_1e58b8;
        case 0x1e58bcu: goto label_1e58bc;
        case 0x1e58c0u: goto label_1e58c0;
        case 0x1e58c4u: goto label_1e58c4;
        case 0x1e58c8u: goto label_1e58c8;
        case 0x1e58ccu: goto label_1e58cc;
        case 0x1e58d0u: goto label_1e58d0;
        case 0x1e58d4u: goto label_1e58d4;
        case 0x1e58d8u: goto label_1e58d8;
        case 0x1e58dcu: goto label_1e58dc;
        case 0x1e58e0u: goto label_1e58e0;
        case 0x1e58e4u: goto label_1e58e4;
        case 0x1e58e8u: goto label_1e58e8;
        case 0x1e58ecu: goto label_1e58ec;
        case 0x1e58f0u: goto label_1e58f0;
        case 0x1e58f4u: goto label_1e58f4;
        case 0x1e58f8u: goto label_1e58f8;
        case 0x1e58fcu: goto label_1e58fc;
        case 0x1e5900u: goto label_1e5900;
        case 0x1e5904u: goto label_1e5904;
        case 0x1e5908u: goto label_1e5908;
        case 0x1e590cu: goto label_1e590c;
        case 0x1e5910u: goto label_1e5910;
        case 0x1e5914u: goto label_1e5914;
        case 0x1e5918u: goto label_1e5918;
        case 0x1e591cu: goto label_1e591c;
        case 0x1e5920u: goto label_1e5920;
        case 0x1e5924u: goto label_1e5924;
        case 0x1e5928u: goto label_1e5928;
        case 0x1e592cu: goto label_1e592c;
        case 0x1e5930u: goto label_1e5930;
        case 0x1e5934u: goto label_1e5934;
        case 0x1e5938u: goto label_1e5938;
        case 0x1e593cu: goto label_1e593c;
        case 0x1e5940u: goto label_1e5940;
        case 0x1e5944u: goto label_1e5944;
        case 0x1e5948u: goto label_1e5948;
        case 0x1e594cu: goto label_1e594c;
        case 0x1e5950u: goto label_1e5950;
        case 0x1e5954u: goto label_1e5954;
        case 0x1e5958u: goto label_1e5958;
        case 0x1e595cu: goto label_1e595c;
        case 0x1e5960u: goto label_1e5960;
        case 0x1e5964u: goto label_1e5964;
        case 0x1e5968u: goto label_1e5968;
        case 0x1e596cu: goto label_1e596c;
        case 0x1e5970u: goto label_1e5970;
        case 0x1e5974u: goto label_1e5974;
        case 0x1e5978u: goto label_1e5978;
        case 0x1e597cu: goto label_1e597c;
        case 0x1e5980u: goto label_1e5980;
        case 0x1e5984u: goto label_1e5984;
        case 0x1e5988u: goto label_1e5988;
        case 0x1e598cu: goto label_1e598c;
        case 0x1e5990u: goto label_1e5990;
        case 0x1e5994u: goto label_1e5994;
        case 0x1e5998u: goto label_1e5998;
        case 0x1e599cu: goto label_1e599c;
        case 0x1e59a0u: goto label_1e59a0;
        case 0x1e59a4u: goto label_1e59a4;
        case 0x1e59a8u: goto label_1e59a8;
        case 0x1e59acu: goto label_1e59ac;
        case 0x1e59b0u: goto label_1e59b0;
        case 0x1e59b4u: goto label_1e59b4;
        case 0x1e59b8u: goto label_1e59b8;
        default: break;
    }

    ctx->pc = 0x1e5830u;

label_1e5830:
    // 0x1e5830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e5830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e5834:
    // 0x1e5834: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e5834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e5838:
    // 0x1e5838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e583c:
    // 0x1e583c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e583cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5840:
    // 0x1e5840: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e5840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5844:
    // 0x1e5844: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e5844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5848:
    // 0x1e5848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e584c:
    // 0x1e584c: 0x2e41000d  sltiu       $at, $s2, 0xD
    ctx->pc = 0x1e584cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1e5850:
    // 0x1e5850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5854:
    // 0x1e5854: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e5858:
    if (ctx->pc == 0x1E5858u) {
        ctx->pc = 0x1E5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5854u;
        // 0x1e5858: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E585Cu;
        goto label_1e585c;
    }
    ctx->pc = 0x1E5854u;
    {
        const bool branch_taken_0x1e5854 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5854u;
        // 0x1e5858: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5854) {
            ctx->pc = 0x1E5864u;
            goto label_1e5864;
        }
    }
    ctx->pc = 0x1E585Cu;
label_1e585c:
    // 0x1e585c: 0x10000050  b           . + 4 + (0x50 << 2)
label_1e5860:
    if (ctx->pc == 0x1E5860u) {
        ctx->pc = 0x1E5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E585Cu;
        // 0x1e5860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5864u;
        goto label_1e5864;
    }
    ctx->pc = 0x1E585Cu;
    {
        const bool branch_taken_0x1e585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E585Cu;
        // 0x1e5860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e585c) {
            ctx->pc = 0x1E59A0u;
            goto label_1e59a0;
        }
    }
    ctx->pc = 0x1E5864u;
label_1e5864:
    // 0x1e5864: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1e5864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e5868:
    // 0x1e5868: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_1e586c:
    if (ctx->pc == 0x1E586Cu) {
        ctx->pc = 0x1E586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5868u;
        // 0x1e586c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5870u;
        goto label_1e5870;
    }
    ctx->pc = 0x1E5868u;
    {
        const bool branch_taken_0x1e5868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5868u;
        // 0x1e586c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5868) {
            ctx->pc = 0x1E58DCu;
            goto label_1e58dc;
        }
    }
    ctx->pc = 0x1E5870u;
label_1e5870:
    // 0x1e5870: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e5870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e5874:
    // 0x1e5874: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e5878:
    // 0x1e5878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e587c:
    // 0x1e587c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1e5880:
    if (ctx->pc == 0x1E5880u) {
        ctx->pc = 0x1E5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E587Cu;
        // 0x1e5880: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5884u;
        goto label_1e5884;
    }
    ctx->pc = 0x1E587Cu;
    {
        const bool branch_taken_0x1e587c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E587Cu;
        // 0x1e5880: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e587c) {
            ctx->pc = 0x1E5894u;
            goto label_1e5894;
        }
    }
    ctx->pc = 0x1E5884u;
label_1e5884:
    // 0x1e5884: 0xc080490  jal         func_201240
label_1e5888:
    if (ctx->pc == 0x1E5888u) {
        ctx->pc = 0x1E5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5884u;
        // 0x1e5888: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E588Cu;
        goto label_1e588c;
    }
    ctx->pc = 0x1E5884u;
    SET_GPR_U32(ctx, 31, 0x1E588Cu);
    ctx->pc = 0x1E5888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5884u;
    // 0x1e5888: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E5884u, 0x1E588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E588Cu;
label_1e588c:
    // 0x1e588c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e5890:
    if (ctx->pc == 0x1E5890u) {
        ctx->pc = 0x1E5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E588Cu;
        // 0x1e5890: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5894u;
        goto label_1e5894;
    }
    ctx->pc = 0x1E588Cu;
    {
        const bool branch_taken_0x1e588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E588Cu;
        // 0x1e5890: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e588c) {
            ctx->pc = 0x1E58B0u;
            goto label_1e58b0;
        }
    }
    ctx->pc = 0x1E5894u;
label_1e5894:
    // 0x1e5894: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e5894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e5898:
    // 0x1e5898: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e589c:
    // 0x1e589c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e58a0:
    // 0x1e58a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e58a4:
    // 0x1e58a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e58a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e58a8:
    // 0x1e58a8: 0x0  nop
    ctx->pc = 0x1e58a8u;
    // NOP
label_1e58ac:
    // 0x1e58ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e58acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e58b0:
    // 0x1e58b0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e58b4:
    if (ctx->pc == 0x1E58B4u) {
        ctx->pc = 0x1E58B8u;
        goto label_1e58b8;
    }
    ctx->pc = 0x1E58B0u;
    {
        const bool branch_taken_0x1e58b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e58b0) {
            ctx->pc = 0x1E58C0u;
            goto label_1e58c0;
        }
    }
    ctx->pc = 0x1E58B8u;
label_1e58b8:
    // 0x1e58b8: 0x10000039  b           . + 4 + (0x39 << 2)
label_1e58bc:
    if (ctx->pc == 0x1E58BCu) {
        ctx->pc = 0x1E58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58B8u;
        // 0x1e58bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E58C0u;
        goto label_1e58c0;
    }
    ctx->pc = 0x1E58B8u;
    {
        const bool branch_taken_0x1e58b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58B8u;
        // 0x1e58bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58b8) {
            ctx->pc = 0x1E59A0u;
            goto label_1e59a0;
        }
    }
    ctx->pc = 0x1E58C0u;
label_1e58c0:
    // 0x1e58c0: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x1e58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e58c4:
    // 0x1e58c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e58c8:
    // 0x1e58c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e58c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e58cc:
    // 0x1e58cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e58ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e58d0:
    // 0x1e58d0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1e58d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e58d4:
    // 0x1e58d4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1e58d8:
    if (ctx->pc == 0x1E58D8u) {
        ctx->pc = 0x1E58DCu;
        goto label_1e58dc;
    }
    ctx->pc = 0x1E58D4u;
    {
        const bool branch_taken_0x1e58d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e58d4) {
            ctx->pc = 0x1E5870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5870;
        }
    }
    ctx->pc = 0x1E58DCu;
label_1e58dc:
    // 0x1e58dc: 0x0  nop
    ctx->pc = 0x1e58dcu;
    // NOP
label_1e58e0:
    // 0x1e58e0: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e58e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e58e4:
    // 0x1e58e4: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1e58e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e58e8:
    // 0x1e58e8: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x1e58e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_1e58ec:
    // 0x1e58ec: 0xd23821  addu        $a3, $a2, $s2
    ctx->pc = 0x1e58ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e58f0:
    // 0x1e58f0: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x1e58f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e58f4:
    // 0x1e58f4: 0x27a9006f  addiu       $t1, $sp, 0x6F
    ctx->pc = 0x1e58f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
label_1e58f8:
    // 0x1e58f8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x1e58f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e58fc:
    // 0x1e58fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e58fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5900:
    // 0x1e5900: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5904:
    // 0x1e5904: 0x320f809  jalr        $t9
label_1e5908:
    if (ctx->pc == 0x1E5908u) {
        ctx->pc = 0x1E5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5904u;
        // 0x1e5908: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E590Cu;
        goto label_1e590c;
    }
    ctx->pc = 0x1E5904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E590Cu);
        ctx->pc = 0x1E5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5904u;
        // 0x1e5908: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5904u, 0x1E590Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E590Cu;
label_1e590c:
    // 0x1e590c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e5910:
    // 0x1e5910: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1e5914:
    if (ctx->pc == 0x1E5914u) {
        ctx->pc = 0x1E5918u;
        goto label_1e5918;
    }
    ctx->pc = 0x1E5910u;
    {
        const bool branch_taken_0x1e5910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5910) {
            ctx->pc = 0x1E5954u;
            goto label_1e5954;
        }
    }
    ctx->pc = 0x1E5918u;
label_1e5918:
    // 0x1e5918: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e591c:
    // 0x1e591c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1e5920:
    if (ctx->pc == 0x1E5920u) {
        ctx->pc = 0x1E5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E591Cu;
        // 0x1e5920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5924u;
        goto label_1e5924;
    }
    ctx->pc = 0x1E591Cu;
    {
        const bool branch_taken_0x1e591c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E591Cu;
        // 0x1e5920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e591c) {
            ctx->pc = 0x1E594Cu;
            goto label_1e594c;
        }
    }
    ctx->pc = 0x1E5924u;
label_1e5924:
    // 0x1e5924: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e5928:
    if (ctx->pc == 0x1E5928u) {
        ctx->pc = 0x1E592Cu;
        goto label_1e592c;
    }
    ctx->pc = 0x1E5924u;
    {
        const bool branch_taken_0x1e5924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5924) {
            ctx->pc = 0x1E5940u;
            goto label_1e5940;
        }
    }
    ctx->pc = 0x1E592Cu;
label_1e592c:
    // 0x1e592c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5930:
    // 0x1e5930: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e5934:
    if (ctx->pc == 0x1E5934u) {
        ctx->pc = 0x1E5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5930u;
        // 0x1e5934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5938u;
        goto label_1e5938;
    }
    ctx->pc = 0x1E5930u;
    {
        const bool branch_taken_0x1e5930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5930u;
        // 0x1e5934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5930) {
            ctx->pc = 0x1E5944u;
            goto label_1e5944;
        }
    }
    ctx->pc = 0x1E5938u;
label_1e5938:
    // 0x1e5938: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e593c:
    if (ctx->pc == 0x1E593Cu) {
        ctx->pc = 0x1E5940u;
        goto label_1e5940;
    }
    ctx->pc = 0x1E5938u;
    {
        const bool branch_taken_0x1e5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5938) {
            ctx->pc = 0x1E5954u;
            goto label_1e5954;
        }
    }
    ctx->pc = 0x1E5940u;
label_1e5940:
    // 0x1e5940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e5940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5944:
    // 0x1e5944: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e5948:
    if (ctx->pc == 0x1E5948u) {
        ctx->pc = 0x1E5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5944u;
        // 0x1e5948: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E594Cu;
        goto label_1e594c;
    }
    ctx->pc = 0x1E5944u;
    {
        const bool branch_taken_0x1e5944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5944u;
        // 0x1e5948: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5944) {
            ctx->pc = 0x1E59A4u;
            goto label_1e59a4;
        }
    }
    ctx->pc = 0x1E594Cu;
label_1e594c:
    // 0x1e594c: 0x83a20058  lb          $v0, 0x58($sp)
    ctx->pc = 0x1e594cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
label_1e5950:
    // 0x1e5950: 0xa3a2006f  sb          $v0, 0x6F($sp)
    ctx->pc = 0x1e5950u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 2));
label_1e5954:
    // 0x1e5954: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1e5958:
    if (ctx->pc == 0x1E5958u) {
        ctx->pc = 0x1E595Cu;
        goto label_1e595c;
    }
    ctx->pc = 0x1E5954u;
    {
        const bool branch_taken_0x1e5954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5954) {
            ctx->pc = 0x1E5998u;
            goto label_1e5998;
        }
    }
    ctx->pc = 0x1E595Cu;
label_1e595c:
    // 0x1e595c: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
label_1e5960:
    if (ctx->pc == 0x1E5960u) {
        ctx->pc = 0x1E5964u;
        goto label_1e5964;
    }
    ctx->pc = 0x1E595Cu;
    {
        const bool branch_taken_0x1e595c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e595c) {
            ctx->pc = 0x1E5998u;
            goto label_1e5998;
        }
    }
    ctx->pc = 0x1E5964u;
label_1e5964:
    // 0x1e5964: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e5964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e5968:
    // 0x1e5968: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x1e5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e596c:
    // 0x1e596c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e5970:
    // 0x1e5970: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e5970u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5974:
    // 0x1e5974: 0xc080dea  jal         func_2037A8
label_1e5978:
    if (ctx->pc == 0x1E5978u) {
        ctx->pc = 0x1E5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5974u;
        // 0x1e5978: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E597Cu;
        goto label_1e597c;
    }
    ctx->pc = 0x1E5974u;
    SET_GPR_U32(ctx, 31, 0x1E597Cu);
    ctx->pc = 0x1E5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5974u;
    // 0x1e5978: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E5974u, 0x1E597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E597Cu;
label_1e597c:
    // 0x1e597c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5980:
    // 0x1e5980: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e5984:
    if (ctx->pc == 0x1E5984u) {
        ctx->pc = 0x1E5988u;
        goto label_1e5988;
    }
    ctx->pc = 0x1E5980u;
    {
        const bool branch_taken_0x1e5980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5980) {
            ctx->pc = 0x1E5990u;
            goto label_1e5990;
        }
    }
    ctx->pc = 0x1E5988u;
label_1e5988:
    // 0x1e5988: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e598c:
    if (ctx->pc == 0x1E598Cu) {
        ctx->pc = 0x1E598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5988u;
        // 0x1e598c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5990u;
        goto label_1e5990;
    }
    ctx->pc = 0x1E5988u;
    {
        const bool branch_taken_0x1e5988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5988u;
        // 0x1e598c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5988) {
            ctx->pc = 0x1E59A0u;
            goto label_1e59a0;
        }
    }
    ctx->pc = 0x1E5990u;
label_1e5990:
    // 0x1e5990: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_1e5994:
    if (ctx->pc == 0x1E5994u) {
        ctx->pc = 0x1E5998u;
        goto label_1e5998;
    }
    ctx->pc = 0x1E5990u;
    {
        const bool branch_taken_0x1e5990 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1e5990) {
            ctx->pc = 0x1E5964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5964;
        }
    }
    ctx->pc = 0x1E5998u;
label_1e5998:
    // 0x1e5998: 0x93a2006f  lbu         $v0, 0x6F($sp)
    ctx->pc = 0x1e5998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
label_1e599c:
    // 0x1e599c: 0x0  nop
    ctx->pc = 0x1e599cu;
    // NOP
label_1e59a0:
    // 0x1e59a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e59a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e59a4:
    // 0x1e59a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e59a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e59a8:
    // 0x1e59a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e59a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e59ac:
    // 0x1e59ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e59acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e59b0:
    // 0x1e59b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e59b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e59b4:
    // 0x1e59b4: 0x3e00008  jr          $ra
label_1e59b8:
    if (ctx->pc == 0x1E59B8u) {
        ctx->pc = 0x1E59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B4u;
        // 0x1e59b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E59BCu;
        goto label_fallthrough_0x1e59b4;
    }
    ctx->pc = 0x1E59B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B4u;
        // 0x1e59b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E59B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e59b4:
    ctx->pc = 0x1E59BCu;
}
