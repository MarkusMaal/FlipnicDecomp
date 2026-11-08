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

// Function: FUN_00201288
// Address: 0x201288 - 0x2012e4
void FUN_00201288_0x201288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201288_0x201288");
#endif

    switch (ctx->pc) {
        case 0x2012acu: goto label_2012ac;
        default: break;
    }

    ctx->pc = 0x201288u;

    // 0x201288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20128c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201294: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x201294u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x201298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20129c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2012a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012a4: 0xc07af48  jal         func_1EBD20
    ctx->pc = 0x2012A4u;
    SET_GPR_U32(ctx, 31, 0x2012ACu);
    ctx->pc = 0x2012A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2012A4u;
    // 0x2012a8: 0xae202c3c  sw          $zero, 0x2C3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBD20u, 0x2012A4u, 0x2012ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012ACu;
label_2012ac:
    // 0x2012ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2012acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2012b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2012b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2012b8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2012B8u;
    {
        const bool branch_taken_0x2012b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2012BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012B8u;
        // 0x2012bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012b8) {
            ctx->pc = 0x2012D0u;
            goto label_2012d0;
        }
    }
    ctx->pc = 0x2012C0u;
    // 0x2012c0: 0x8e222c3c  lw          $v0, 0x2C3C($s1)
    ctx->pc = 0x2012c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11324)));
    // 0x2012c4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2012C4u;
    {
        const bool branch_taken_0x2012c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2012c4) {
            ctx->pc = 0x2012C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2012C4u;
            // 0x2012c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2012D0u;
            goto label_2012d0;
        }
    }
    ctx->pc = 0x2012CCu;
    // 0x2012cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2012ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2012d0:
    // 0x2012d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2012d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2012d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2012d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2012d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2012dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2012DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2012E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012DCu;
        // 0x2012e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2012DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2012E4u;
}
