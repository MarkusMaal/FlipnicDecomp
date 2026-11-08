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

// Function: FUN_00122880
// Address: 0x122880 - 0x122960
void FUN_00122880_0x122880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122880_0x122880");
#endif

    switch (ctx->pc) {
        case 0x1228a4u: goto label_1228a4;
        case 0x1228ccu: goto label_1228cc;
        case 0x1228ecu: goto label_1228ec;
        case 0x122924u: goto label_122924;
        case 0x122938u: goto label_122938;
        case 0x122940u: goto label_122940;
        default: break;
    }

    ctx->pc = 0x122880u;

    // 0x122880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x122884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x122888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12288c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122894: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x122894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x122898: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x122898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12289c: 0xc048a58  jal         func_122960
    ctx->pc = 0x12289Cu;
    SET_GPR_U32(ctx, 31, 0x1228A4u);
    ctx->pc = 0x1228A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12289Cu;
    // 0x1228a0: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122960u, 0x12289Cu, 0x1228A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228A4u;
label_1228a4:
    // 0x1228a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1228a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1228a8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1228a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1228ac: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1228ACu;
    {
        const bool branch_taken_0x1228ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1228ac) {
            ctx->pc = 0x122918u;
            goto label_122918;
        }
    }
    ctx->pc = 0x1228B4u;
    // 0x1228b4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1228b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1228b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1228b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1228bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1228BCu;
    {
        const bool branch_taken_0x1228bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228BCu;
        // 0x1228c0: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228bc) {
            ctx->pc = 0x1228F0u;
            goto label_1228f0;
        }
    }
    ctx->pc = 0x1228C4u;
    // 0x1228c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1228C4u;
    {
        const bool branch_taken_0x1228c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1228c4) {
            ctx->pc = 0x1228D0u;
            goto label_1228d0;
        }
    }
    ctx->pc = 0x1228CCu;
label_1228cc:
    // 0x1228cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1228ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1228d0:
    // 0x1228d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1228d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1228d4: 0x0  nop
    ctx->pc = 0x1228d4u;
    // NOP
    // 0x1228d8: 0x0  nop
    ctx->pc = 0x1228d8u;
    // NOP
    // 0x1228dc: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1228DCu;
    {
        const bool branch_taken_0x1228dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1228dc) {
            ctx->pc = 0x1228CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1228cc;
        }
    }
    ctx->pc = 0x1228E4u;
    // 0x1228e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1228E4u;
    {
        const bool branch_taken_0x1228e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228E4u;
        // 0x1228e8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228e4) {
            ctx->pc = 0x122910u;
            goto label_122910;
        }
    }
    ctx->pc = 0x1228ECu;
label_1228ec:
    // 0x1228ec: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1228ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_1228f0:
    // 0x1228f0: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1228f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1228f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1228f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1228f8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1228f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1228fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1228fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x122900: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122904: 0x14a2fff9  bne         $a1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122904u;
    {
        const bool branch_taken_0x122904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x122904) {
            ctx->pc = 0x1228ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1228ec;
        }
    }
    ctx->pc = 0x12290Cu;
    // 0x12290c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x12290cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_122910:
    // 0x122910: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x122914: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x122914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_122918:
    // 0x122918: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x122918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12291c: 0xc048bfc  jal         func_122FF0
    ctx->pc = 0x12291Cu;
    SET_GPR_U32(ctx, 31, 0x122924u);
    ctx->pc = 0x122920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12291Cu;
    // 0x122920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FF0u, 0x12291Cu, 0x122924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122924u;
label_122924:
    // 0x122924: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x122924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x122928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122928u;
    {
        const bool branch_taken_0x122928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122928u;
        // 0x12292c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122928) {
            ctx->pc = 0x122938u;
            goto label_122938;
        }
    }
    ctx->pc = 0x122930u;
    // 0x122930: 0xc04619c  jal         func_118670
    ctx->pc = 0x122930u;
    SET_GPR_U32(ctx, 31, 0x122938u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x122930u, 0x122938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122938u;
label_122938:
    // 0x122938: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122938u;
    SET_GPR_U32(ctx, 31, 0x122940u);
    ctx->pc = 0x12293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122938u;
    // 0x12293c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122938u, 0x122940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122940u;
label_122940:
    // 0x122940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x122940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122944: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122948: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x122948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12294c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122958: 0x3e00008  jr          $ra
    ctx->pc = 0x122958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122958u;
        // 0x12295c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122960u;
}
