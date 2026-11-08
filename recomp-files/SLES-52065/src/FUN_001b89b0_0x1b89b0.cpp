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

// Function: FUN_001b89b0
// Address: 0x1b89b0 - 0x1b89fc
void FUN_001b89b0_0x1b89b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b89b0_0x1b89b0");
#endif

    switch (ctx->pc) {
        case 0x1b89e8u: goto label_1b89e8;
        default: break;
    }

    ctx->pc = 0x1b89b0u;

    // 0x1b89b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b89b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b89b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b89b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b89b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b89bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b89bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89c0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B89C0u;
    {
        const bool branch_taken_0x1b89c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89C0u;
        // 0x1b89c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89c0) {
            ctx->pc = 0x1B89ECu;
            goto label_1b89ec;
        }
    }
    ctx->pc = 0x1B89C8u;
    // 0x1b89c8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1b89c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1b89cc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1b89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1b89d0: 0x2463b988  addiu       $v1, $v1, -0x4678
    ctx->pc = 0x1b89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949256));
    // 0x1b89d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b89d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b89d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B89D8u;
    {
        const bool branch_taken_0x1b89d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D8u;
        // 0x1b89dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89d8) {
            ctx->pc = 0x1B89E8u;
            goto label_1b89e8;
        }
    }
    ctx->pc = 0x1B89E0u;
    // 0x1b89e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B89E0u;
    SET_GPR_U32(ctx, 31, 0x1B89E8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B89E0u, 0x1B89E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89E8u;
label_1b89e8:
    // 0x1b89e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b89e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b89ec:
    // 0x1b89ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b89ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b89f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b89f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b89f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B89F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89F4u;
        // 0x1b89f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B89F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B89FCu;
}
