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

// Function: FUN_0013c460
// Address: 0x13c460 - 0x13c4c0
void FUN_0013c460_0x13c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c460_0x13c460");
#endif

    switch (ctx->pc) {
        case 0x13c490u: goto label_13c490;
        case 0x13c4a8u: goto label_13c4a8;
        default: break;
    }

    ctx->pc = 0x13c460u;

    // 0x13c460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c474: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x13C474u;
    {
        const bool branch_taken_0x13c474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C474u;
        // 0x13c478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c474) {
            ctx->pc = 0x13C4A8u;
            goto label_13c4a8;
        }
    }
    ctx->pc = 0x13C47Cu;
    // 0x13c47c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x13c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13c480: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C480u;
    {
        const bool branch_taken_0x13c480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C480u;
        // 0x13c484: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c480) {
            ctx->pc = 0x13C494u;
            goto label_13c494;
        }
    }
    ctx->pc = 0x13C488u;
    // 0x13c488: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C488u;
    SET_GPR_U32(ctx, 31, 0x13C490u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C488u, 0x13C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C490u;
label_13c490:
    // 0x13c490: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_13c494:
    // 0x13c494: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c498: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C498u;
    {
        const bool branch_taken_0x13c498 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C498u;
        // 0x13c49c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c498) {
            ctx->pc = 0x13C4ACu;
            goto label_13c4ac;
        }
    }
    ctx->pc = 0x13C4A0u;
    // 0x13c4a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C4A0u;
    SET_GPR_U32(ctx, 31, 0x13C4A8u);
    ctx->pc = 0x13C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4A0u;
    // 0x13c4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C4A0u, 0x13C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4A8u;
label_13c4a8:
    // 0x13c4a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13c4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c4ac:
    // 0x13c4ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c4b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c4b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13C4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C4B8u;
        // 0x13c4bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C4C0u;
}
