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

// Function: FUN_001d9950
// Address: 0x1d9950 - 0x1d99ec
void FUN_001d9950_0x1d9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9950_0x1d9950");
#endif

    switch (ctx->pc) {
        case 0x1d9974u: goto label_1d9974;
        case 0x1d9990u: goto label_1d9990;
        case 0x1d99a0u: goto label_1d99a0;
        case 0x1d99c0u: goto label_1d99c0;
        default: break;
    }

    ctx->pc = 0x1d9950u;

    // 0x1d9950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d9958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d995c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d996c: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1D996Cu;
    SET_GPR_U32(ctx, 31, 0x1D9974u);
    ctx->pc = 0x1D9970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D996Cu;
    // 0x1d9970: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1D996Cu, 0x1D9974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9974u;
label_1d9974:
    // 0x1d9974: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9974u;
    {
        const bool branch_taken_0x1d9974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9974u;
        // 0x1d9978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9974) {
            ctx->pc = 0x1D9988u;
            goto label_1d9988;
        }
    }
    ctx->pc = 0x1D997Cu;
    // 0x1d997c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D997Cu;
    {
        const bool branch_taken_0x1d997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D997Cu;
        // 0x1d9980: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d997c) {
            ctx->pc = 0x1D99D0u;
            goto label_1d99d0;
        }
    }
    ctx->pc = 0x1D9984u;
    // 0x1d9984: 0x0  nop
    ctx->pc = 0x1d9984u;
    // NOP
label_1d9988:
    // 0x1d9988: 0xc078448  jal         func_1E1120
    ctx->pc = 0x1D9988u;
    SET_GPR_U32(ctx, 31, 0x1D9990u);
    ctx->pc = 0x1D998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9988u;
    // 0x1d998c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1120u, 0x1D9988u, 0x1D9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9990u;
label_1d9990:
    // 0x1d9990: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d9994: 0x247066c0  addiu       $s0, $v1, 0x66C0
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26304));
    // 0x1d9998: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d999c: 0x0  nop
    ctx->pc = 0x1d999cu;
    // NOP
label_1d99a0:
    // 0x1d99a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d99a4: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D99A4u;
    {
        const bool branch_taken_0x1d99a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1d99a4) {
            ctx->pc = 0x1D99A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D99A4u;
            // 0x1d99a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D99C4u;
            goto label_1d99c4;
        }
    }
    ctx->pc = 0x1D99ACu;
    // 0x1d99ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d99acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d99b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d99b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d99b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99b8: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D99B8u;
    SET_GPR_U32(ctx, 31, 0x1D99C0u);
    ctx->pc = 0x1D99BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D99B8u;
    // 0x1d99bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D99B8u, 0x1D99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99C0u;
label_1d99c0:
    // 0x1d99c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d99c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1d99c4:
    // 0x1d99c4: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D99C4u;
    {
        const bool branch_taken_0x1d99c4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99C4u;
        // 0x1d99c8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99c4) {
            ctx->pc = 0x1D99A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d99a0;
        }
    }
    ctx->pc = 0x1D99CCu;
    // 0x1d99cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d99ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d99d0:
    // 0x1d99d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d99d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d99d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d99d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d99d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d99d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d99dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d99dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d99e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d99e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d99e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D99E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99E4u;
        // 0x1d99e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D99E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D99ECu;
}
