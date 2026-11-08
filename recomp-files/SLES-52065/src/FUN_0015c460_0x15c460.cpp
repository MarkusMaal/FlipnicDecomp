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

// Function: FUN_0015c460
// Address: 0x15c460 - 0x15c554
void FUN_0015c460_0x15c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c460_0x15c460");
#endif

    switch (ctx->pc) {
        case 0x15c49cu: goto label_15c49c;
        case 0x15c4e0u: goto label_15c4e0;
        case 0x15c4f0u: goto label_15c4f0;
        default: break;
    }

    ctx->pc = 0x15c460u;

    // 0x15c460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15c464: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15c468: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15c46c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c470: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15c470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c474: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15c474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c47c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15c47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c484: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15c484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c48c: 0x26a42c00  addiu       $a0, $s5, 0x2C00
    ctx->pc = 0x15c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
    // 0x15c490: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x15c490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c494: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x15C494u;
    SET_GPR_U32(ctx, 31, 0x15C49Cu);
    ctx->pc = 0x15C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C494u;
    // 0x15c498: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x15C494u, 0x15C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C49Cu;
label_15c49c:
    // 0x15c49c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C49Cu;
    {
        const bool branch_taken_0x15c49c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c49c) {
            ctx->pc = 0x15C4ACu;
            goto label_15c4ac;
        }
    }
    ctx->pc = 0x15C4A4u;
    // 0x15c4a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15C4A4u;
    {
        const bool branch_taken_0x15c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4A4u;
        // 0x15c4a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4a4) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C4ACu;
label_15c4ac:
    // 0x15c4ac: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15c4b0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c4b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15c4b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4bc: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x15c4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c4c0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15c4c4: 0x8444000a  lh          $a0, 0xA($v0)
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x15c4c8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x15c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15c4cc: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x15c4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15c4d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c4d4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c4d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15C4D8u;
    {
        const bool branch_taken_0x15c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4D8u;
        // 0x15c4dc: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4d8) {
            ctx->pc = 0x15C50Cu;
            goto label_15c50c;
        }
    }
    ctx->pc = 0x15C4E0u;
label_15c4e0:
    // 0x15c4e0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15c4e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c4e8: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x15C4E8u;
    SET_GPR_U32(ctx, 31, 0x15C4F0u);
    ctx->pc = 0x15C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C4E8u;
    // 0x15c4ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x15C4E8u, 0x15C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C4F0u;
label_15c4f0:
    // 0x15c4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4F0u;
    {
        const bool branch_taken_0x15c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c4f0) {
            ctx->pc = 0x15C500u;
            goto label_15c500;
        }
    }
    ctx->pc = 0x15C4F8u;
    // 0x15c4f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15C4F8u;
    {
        const bool branch_taken_0x15c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F8u;
        // 0x15c4fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4f8) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C500u;
label_15c500:
    // 0x15c500: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x15c504: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15c508: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c50c:
    // 0x15c50c: 0x0  nop
    ctx->pc = 0x15c50cu;
    // NOP
    // 0x15c510: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15c514: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15c518: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x15c518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c51c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15c51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c520: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15C520u;
    {
        const bool branch_taken_0x15c520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C520u;
        // 0x15c524: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c520) {
            ctx->pc = 0x15C4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C528u;
    // 0x15c528: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c52c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15c52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c530:
    // 0x15c530: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15c530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c53c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c54c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C54Cu;
        // 0x15c550: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C554u;
}
