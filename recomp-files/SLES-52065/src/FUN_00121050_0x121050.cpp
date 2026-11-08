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

// Function: FUN_00121050
// Address: 0x121050 - 0x1210b0
void FUN_00121050_0x121050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121050_0x121050");
#endif

    switch (ctx->pc) {
        case 0x121080u: goto label_121080;
        case 0x121098u: goto label_121098;
        default: break;
    }

    ctx->pc = 0x121050u;

    // 0x121050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12105c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12105cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x121060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121064: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x121064u;
    {
        const bool branch_taken_0x121064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121064u;
        // 0x121068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121064) {
            ctx->pc = 0x121098u;
            goto label_121098;
        }
    }
    ctx->pc = 0x12106Cu;
    // 0x12106c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x121070: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121070u;
    {
        const bool branch_taken_0x121070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121070u;
        // 0x121074: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121070) {
            ctx->pc = 0x121084u;
            goto label_121084;
        }
    }
    ctx->pc = 0x121078u;
    // 0x121078: 0xc0401a4  jal         func_100690
    ctx->pc = 0x121078u;
    SET_GPR_U32(ctx, 31, 0x121080u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121078u, 0x121080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121080u;
label_121080:
    // 0x121080: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x121080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_121084:
    // 0x121084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x121088: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121088u;
    {
        const bool branch_taken_0x121088 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121088u;
        // 0x12108c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121088) {
            ctx->pc = 0x12109Cu;
            goto label_12109c;
        }
    }
    ctx->pc = 0x121090u;
    // 0x121090: 0xc0401a4  jal         func_100690
    ctx->pc = 0x121090u;
    SET_GPR_U32(ctx, 31, 0x121098u);
    ctx->pc = 0x121094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121090u;
    // 0x121094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121090u, 0x121098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121098u;
label_121098:
    // 0x121098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x121098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12109c:
    // 0x12109c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1210a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1210a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1210a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1210a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1210a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1210A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1210ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210A8u;
        // 0x1210ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1210A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1210B0u;
}
