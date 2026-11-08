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

// Function: FUN_001fe888
// Address: 0x1fe888 - 0x1fe8e8
void FUN_001fe888_0x1fe888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe888_0x1fe888");
#endif

    switch (ctx->pc) {
        case 0x1fe8b4u: goto label_1fe8b4;
        default: break;
    }

    ctx->pc = 0x1fe888u;

    // 0x1fe888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe894: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fe894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fe898: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fe898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe89c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1fe89cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1fe8a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fe8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe8a8: 0xae202c3c  sw          $zero, 0x2C3C($s1)
    ctx->pc = 0x1fe8a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x392C3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x392C3Cu, _value); } while (0);
    // 0x1fe8ac: 0xc07af46  jal         func_1EBD18
    ctx->pc = 0x1FE8ACu;
    SET_GPR_U32(ctx, 31, 0x1FE8B4u);
    ctx->pc = 0x1FE8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8ACu;
    // 0x1fe8b0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBD18u, 0x1FE8ACu, 0x1FE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8B4u;
label_1fe8b4:
    // 0x1fe8b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fe8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe8bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE8BCu;
    {
        const bool branch_taken_0x1fe8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8BCu;
        // 0x1fe8c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8bc) {
            ctx->pc = 0x1FE8D4u;
            goto label_1fe8d4;
        }
    }
    ctx->pc = 0x1FE8C4u;
    // 0x1fe8c4: 0x8e222c3c  lw          $v0, 0x2C3C($s1)
    ctx->pc = 0x1fe8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11324)));
    // 0x1fe8c8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE8C8u;
    {
        const bool branch_taken_0x1fe8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe8c8) {
            ctx->pc = 0x1FE8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE8C8u;
            // 0x1fe8cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE8D4u;
            goto label_1fe8d4;
        }
    }
    ctx->pc = 0x1FE8D0u;
    // 0x1fe8d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe8d4:
    // 0x1fe8d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1fe8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fe8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E0u;
        // 0x1fe8e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE8E8u;
}
