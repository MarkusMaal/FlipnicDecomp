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

// Function: FUN_00184460
// Address: 0x184460 - 0x1844a4
void FUN_00184460_0x184460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00184460_0x184460");
#endif

    switch (ctx->pc) {
        case 0x184490u: goto label_184490;
        default: break;
    }

    ctx->pc = 0x184460u;

    // 0x184460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18446c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18446cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184470: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184470u;
    {
        const bool branch_taken_0x184470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x184474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184470u;
        // 0x184474: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184470) {
            ctx->pc = 0x184494u;
            goto label_184494;
        }
    }
    ctx->pc = 0x184478u;
    // 0x184478: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x184478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x18447c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18447cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x184480: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184480u;
    {
        const bool branch_taken_0x184480 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x184480) {
            ctx->pc = 0x184490u;
            goto label_184490;
        }
    }
    ctx->pc = 0x184488u;
    // 0x184488: 0xc0401a4  jal         func_100690
    ctx->pc = 0x184488u;
    SET_GPR_U32(ctx, 31, 0x184490u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x184488u, 0x184490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184490u;
label_184490:
    // 0x184490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184494:
    // 0x184494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18449c: 0x3e00008  jr          $ra
    ctx->pc = 0x18449Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1844A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18449Cu;
        // 0x1844a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18449Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1844A4u;
}
