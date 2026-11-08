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

// Function: FUN_001e5470
// Address: 0x1e5470 - 0x1e5504
void FUN_001e5470_0x1e5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5470_0x1e5470");
#endif

    switch (ctx->pc) {
        case 0x1e54bcu: goto label_1e54bc;
        case 0x1e54c4u: goto label_1e54c4;
        default: break;
    }

    ctx->pc = 0x1e5470u;

    // 0x1e5470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e547c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5484: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5488: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e548c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E548Cu;
    {
        const bool branch_taken_0x1e548c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E548Cu;
        // 0x1e5490: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e548c) {
            ctx->pc = 0x1E54ECu;
            goto label_1e54ec;
        }
    }
    ctx->pc = 0x1E5494u;
    // 0x1e5494: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e5494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5498: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E5498u;
    {
        const bool branch_taken_0x1e5498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5498) {
            ctx->pc = 0x1E54C4u;
            goto label_1e54c4;
        }
    }
    ctx->pc = 0x1E54A0u;
    // 0x1e54a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e54a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e54a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E54A8u;
    {
        const bool branch_taken_0x1e54a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54A8u;
        // 0x1e54ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54a8) {
            ctx->pc = 0x1E54C4u;
            goto label_1e54c4;
        }
    }
    ctx->pc = 0x1E54B0u;
    // 0x1e54b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e54b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e54b4: 0xc0483d8  jal         func_120F60
    ctx->pc = 0x1E54B4u;
    SET_GPR_U32(ctx, 31, 0x1E54BCu);
    ctx->pc = 0x1E54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54B4u;
    // 0x1e54b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E54B4u, 0x1E54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54BCu;
label_1e54bc:
    // 0x1e54bc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E54BCu;
    SET_GPR_U32(ctx, 31, 0x1E54C4u);
    ctx->pc = 0x1E54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54BCu;
    // 0x1e54c0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E54BCu, 0x1E54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54C4u;
label_1e54c4:
    // 0x1e54c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e54c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e54cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e54d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e54d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e54d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E54D8u;
    {
        const bool branch_taken_0x1e54d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54D8u;
        // 0x1e54dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54d8) {
            ctx->pc = 0x1E54F0u;
            goto label_1e54f0;
        }
    }
    ctx->pc = 0x1E54E0u;
    // 0x1e54e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e54e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e54e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e54ec:
    // 0x1e54ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e54ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e54f0:
    // 0x1e54f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e54f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e54f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e54f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e54f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e54f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e54fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54FCu;
        // 0x1e5500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E54FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5504u;
}
