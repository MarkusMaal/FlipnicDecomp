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

// Function: FUN_00106730
// Address: 0x106730 - 0x10677c
void FUN_00106730_0x106730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106730_0x106730");
#endif

    switch (ctx->pc) {
        case 0x10675cu: goto label_10675c;
        case 0x106768u: goto label_106768;
        default: break;
    }

    ctx->pc = 0x106730u;

    // 0x106730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10673c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106744: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106748: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x106748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x10674c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10674Cu;
    {
        const bool branch_taken_0x10674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10674Cu;
        // 0x106750: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10674c) {
            ctx->pc = 0x10675Cu;
            goto label_10675c;
        }
    }
    ctx->pc = 0x106754u;
    // 0x106754: 0xc05a200  jal         func_168800
    ctx->pc = 0x106754u;
    SET_GPR_U32(ctx, 31, 0x10675Cu);
    ctx->pc = 0x168800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168800u, 0x106754u, 0x10675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10675Cu;
label_10675c:
    // 0x10675c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10675cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106760: 0xc05a200  jal         func_168800
    ctx->pc = 0x106760u;
    SET_GPR_U32(ctx, 31, 0x106768u);
    ctx->pc = 0x106764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106760u;
    // 0x106764: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168800u, 0x106760u, 0x106768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106768u;
label_106768:
    // 0x106768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10676c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10676cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106774: 0x3e00008  jr          $ra
    ctx->pc = 0x106774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106774u;
        // 0x106778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10677Cu;
}
