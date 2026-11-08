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

// Function: FUN_001fe798
// Address: 0x1fe798 - 0x1fe81c
void FUN_001fe798_0x1fe798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe798_0x1fe798");
#endif

    switch (ctx->pc) {
        case 0x1fe7d0u: goto label_1fe7d0;
        case 0x1fe7e4u: goto label_1fe7e4;
        default: break;
    }

    ctx->pc = 0x1fe798u;

    // 0x1fe798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fe798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fe79c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fe79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fe7a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fe7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fe7a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fe7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fe7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fe7b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fe7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7b8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FE7B8u;
    {
        const bool branch_taken_0x1fe7b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7B8u;
        // 0x1fe7bc: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7b8) {
            ctx->pc = 0x1FE7F8u;
            goto label_1fe7f8;
        }
    }
    ctx->pc = 0x1FE7C0u;
    // 0x1fe7c0: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1fe7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1fe7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7c8: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1FE7C8u;
    SET_GPR_U32(ctx, 31, 0x1FE7D0u);
    ctx->pc = 0x1FE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7C8u;
    // 0x1fe7cc: 0x26654f80  addiu       $a1, $s3, 0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1FE7C8u, 0x1FE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7D0u;
label_1fe7d0:
    // 0x1fe7d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE7D0u;
    {
        const bool branch_taken_0x1fe7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7D0u;
        // 0x1fe7d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7d0) {
            ctx->pc = 0x1FE7ECu;
            goto label_1fe7ec;
        }
    }
    ctx->pc = 0x1FE7D8u;
    // 0x1fe7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7dc: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1FE7DCu;
    SET_GPR_U32(ctx, 31, 0x1FE7E4u);
    ctx->pc = 0x1FE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7DCu;
    // 0x1fe7e0: 0x24a54f70  addiu       $a1, $a1, 0x4F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1FE7DCu, 0x1FE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7E4u;
label_1fe7e4:
    // 0x1fe7e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE7E4u;
    {
        const bool branch_taken_0x1fe7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7E4u;
        // 0x1fe7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7e4) {
            ctx->pc = 0x1FE800u;
            goto label_1fe800;
        }
    }
    ctx->pc = 0x1FE7ECu;
label_1fe7ec:
    // 0x1fe7ec: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1fe7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1fe7f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE7F0u;
    {
        const bool branch_taken_0x1fe7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7F0u;
        // 0x1fe7f4: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7f0) {
            ctx->pc = 0x1FE7FCu;
            goto label_1fe7fc;
        }
    }
    ctx->pc = 0x1FE7F8u;
label_1fe7f8:
    // 0x1fe7f8: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
label_1fe7fc:
    // 0x1fe7fc: 0x26624f80  addiu       $v0, $s3, 0x4F80
    ctx->pc = 0x1fe7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20352));
label_1fe800:
    // 0x1fe800: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fe800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe804: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fe804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe808: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fe808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe80c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fe80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe814: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE814u;
        // 0x1fe818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE81Cu;
}
