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

// Function: FUN_001f8028
// Address: 0x1f8028 - 0x1f8120
void FUN_001f8028_0x1f8028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8028_0x1f8028");
#endif

    switch (ctx->pc) {
        case 0x1f804cu: goto label_1f804c;
        case 0x1f8070u: goto label_1f8070;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80b8u: goto label_1f80b8;
        case 0x1f80ecu: goto label_1f80ec;
        case 0x1f8100u: goto label_1f8100;
        default: break;
    }

    ctx->pc = 0x1f8028u;

    // 0x1f8028: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f8028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f802c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f8030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f8030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f8034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f8038: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f8038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f803c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1f803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f8040: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f8040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8044: 0xc07de48  jal         func_1F7920
    ctx->pc = 0x1F8044u;
    SET_GPR_U32(ctx, 31, 0x1F804Cu);
    ctx->pc = 0x1F8048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8044u;
    // 0x1f8048: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7920u, 0x1F8044u, 0x1F804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F804Cu;
label_1f804c:
    // 0x1f804c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F804Cu;
    {
        const bool branch_taken_0x1f804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F804Cu;
        // 0x1f8050: 0x3c130022  lui         $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f804c) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F8054u;
    // 0x1f8054: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F8054u;
    {
        const bool branch_taken_0x1f8054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8054u;
        // 0x1f8058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8054) {
            ctx->pc = 0x1F8104u;
            goto label_1f8104;
        }
    }
    ctx->pc = 0x1F805Cu;
label_1f805c:
    // 0x1f805c: 0x8e62bb10  lw          $v0, -0x44F0($s3)
    ctx->pc = 0x1f805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949648)));
    // 0x1f8060: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8060u;
    {
        const bool branch_taken_0x1f8060 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8060u;
        // 0x1f8064: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8060) {
            ctx->pc = 0x1F8070u;
            goto label_1f8070;
        }
    }
    ctx->pc = 0x1F8068u;
    // 0x1f8068: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F8068u;
    SET_GPR_U32(ctx, 31, 0x1F8070u);
    ctx->pc = 0x1F806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8068u;
    // 0x1f806c: 0x24844818  addiu       $a0, $a0, 0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F8068u, 0x1F8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8070u;
label_1f8070:
    // 0x1f8070: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f8074: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f8074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f8078: 0x2450cd00  addiu       $s0, $v0, -0x3300
    ctx->pc = 0x1f8078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x1f807c: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x1f807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x1f8080: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f808c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f808cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8094: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f8094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8098: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f8098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f809c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F809Cu;
    SET_GPR_U32(ctx, 31, 0x1F80A4u);
    ctx->pc = 0x1F80A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F809Cu;
    // 0x1f80a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F809Cu, 0x1F80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80A4u;
label_1f80a4:
    // 0x1f80a4: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F80A4u;
    {
        const bool branch_taken_0x1f80a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f80a4) {
            ctx->pc = 0x1F80A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80A4u;
            // 0x1f80a8: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F80C0u;
            goto label_1f80c0;
        }
    }
    ctx->pc = 0x1F80ACu;
    // 0x1f80ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f80acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f80b0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F80B0u;
    SET_GPR_U32(ctx, 31, 0x1F80B8u);
    ctx->pc = 0x1F80B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80B0u;
    // 0x1f80b4: 0x8c44bb2c  lw          $a0, -0x44D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F80B0u, 0x1F80B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80B8u;
label_1f80b8:
    // 0x1f80b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F80B8u;
    {
        const bool branch_taken_0x1f80b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80B8u;
        // 0x1f80bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80b8) {
            ctx->pc = 0x1F8104u;
            goto label_1f8104;
        }
    }
    ctx->pc = 0x1F80C0u;
label_1f80c0:
    // 0x1f80c0: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x1f80c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1f80c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1f80c8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1f80c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f80cc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1f80ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f80d0: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1f80d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f80d4: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1f80d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f80d8: 0x8e63bb10  lw          $v1, -0x44F0($s3)
    ctx->pc = 0x1f80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949648)));
    // 0x1f80dc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F80DCu;
    {
        const bool branch_taken_0x1f80dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80DCu;
        // 0x1f80e0: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80dc) {
            ctx->pc = 0x1F80ECu;
            goto label_1f80ec;
        }
    }
    ctx->pc = 0x1F80E4u;
    // 0x1f80e4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F80E4u;
    SET_GPR_U32(ctx, 31, 0x1F80ECu);
    ctx->pc = 0x1F80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80E4u;
    // 0x1f80e8: 0x24844838  addiu       $a0, $a0, 0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F80E4u, 0x1F80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80ECu;
label_1f80ec:
    // 0x1f80ec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f80f0: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x1f80f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1f80f4: 0x8c44bb2c  lw          $a0, -0x44D4($v0)
    ctx->pc = 0x1f80f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21BB2Cu));
    // 0x1f80f8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F80F8u;
    SET_GPR_U32(ctx, 31, 0x1F8100u);
    ctx->pc = 0x1F80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80F8u;
    // 0x1f80fc: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F80F8u, 0x1F8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8100u;
label_1f8100:
    // 0x1f8100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8104:
    // 0x1f8104: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f8104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8108: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f8108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f810c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f810cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8110: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f8110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8114: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8118: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8118u;
        // 0x1f811c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8120u;
}
