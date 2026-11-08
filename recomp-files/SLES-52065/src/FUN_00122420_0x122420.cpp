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

// Function: FUN_00122420
// Address: 0x122420 - 0x122470
void FUN_00122420_0x122420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122420_0x122420");
#endif

    switch (ctx->pc) {
        case 0x122434u: goto label_122434;
        case 0x122454u: goto label_122454;
        case 0x12245cu: goto label_12245c;
        default: break;
    }

    ctx->pc = 0x122420u;

    // 0x122420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122424: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12242c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12242Cu;
    SET_GPR_U32(ctx, 31, 0x122434u);
    ctx->pc = 0x122430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12242Cu;
    // 0x122430: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12242Cu, 0x122434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122434u;
label_122434:
    // 0x122434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122438: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122438u;
    {
        const bool branch_taken_0x122438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122438u;
        // 0x12243c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122438) {
            ctx->pc = 0x12245Cu;
            goto label_12245c;
        }
    }
    ctx->pc = 0x122440u;
    // 0x122440: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122444: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122448: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12244c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12244Cu;
    SET_GPR_U32(ctx, 31, 0x122454u);
    ctx->pc = 0x122450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12244Cu;
    // 0x122450: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12244Cu, 0x122454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122454u;
label_122454:
    // 0x122454: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122454u;
    SET_GPR_U32(ctx, 31, 0x12245Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122454u, 0x12245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12245Cu;
label_12245c:
    // 0x12245c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12245cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x122460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122468: 0x3e00008  jr          $ra
    ctx->pc = 0x122468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122468u;
        // 0x12246c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122470u;
}
