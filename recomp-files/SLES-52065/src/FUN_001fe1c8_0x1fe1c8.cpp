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

// Function: FUN_001fe1c8
// Address: 0x1fe1c8 - 0x1fe224
void FUN_001fe1c8_0x1fe1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe1c8_0x1fe1c8");
#endif

    switch (ctx->pc) {
        case 0x1fe1f0u: goto label_1fe1f0;
        default: break;
    }

    ctx->pc = 0x1fe1c8u;

    // 0x1fe1c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe1d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fe1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fe1d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fe1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1dc: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1fe1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1fe1e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe1e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fe1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1e8: 0xc07af76  jal         func_1EBDD8
    ctx->pc = 0x1FE1E8u;
    SET_GPR_U32(ctx, 31, 0x1FE1F0u);
    ctx->pc = 0x1FE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1E8u;
    // 0x1fe1ec: 0xae202c3c  sw          $zero, 0x2C3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBDD8u, 0x1FE1E8u, 0x1FE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1F0u;
label_1fe1f0:
    // 0x1fe1f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fe1f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe1f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE1F8u;
    {
        const bool branch_taken_0x1fe1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1F8u;
        // 0x1fe1fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1f8) {
            ctx->pc = 0x1FE210u;
            goto label_1fe210;
        }
    }
    ctx->pc = 0x1FE200u;
    // 0x1fe200: 0x8e222c3c  lw          $v0, 0x2C3C($s1)
    ctx->pc = 0x1fe200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11324)));
    // 0x1fe204: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE204u;
    {
        const bool branch_taken_0x1fe204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe204) {
            ctx->pc = 0x1FE208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE204u;
            // 0x1fe208: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE210u;
            goto label_1fe210;
        }
    }
    ctx->pc = 0x1FE20Cu;
    // 0x1fe20c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe210:
    // 0x1fe210: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1fe210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe214: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fe214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe21c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE21Cu;
        // 0x1fe220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE224u;
}
