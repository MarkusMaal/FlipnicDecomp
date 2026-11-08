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

// Function: FUN_00105fc0
// Address: 0x105fc0 - 0x10601c
void FUN_00105fc0_0x105fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105fc0_0x105fc0");
#endif

    switch (ctx->pc) {
        case 0x105fecu: goto label_105fec;
        case 0x106004u: goto label_106004;
        default: break;
    }

    ctx->pc = 0x105fc0u;

    // 0x105fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x105fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105fd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x105FD4u;
    {
        const bool branch_taken_0x105fd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FD4u;
        // 0x105fd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fd4) {
            ctx->pc = 0x106004u;
            goto label_106004;
        }
    }
    ctx->pc = 0x105FDCu;
    // 0x105fdc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105FDCu;
    {
        const bool branch_taken_0x105fdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FDCu;
        // 0x105fe0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fdc) {
            ctx->pc = 0x105FF0u;
            goto label_105ff0;
        }
    }
    ctx->pc = 0x105FE4u;
    // 0x105fe4: 0xc04018c  jal         func_100630
    ctx->pc = 0x105FE4u;
    SET_GPR_U32(ctx, 31, 0x105FECu);
    ctx->pc = 0x105FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FE4u;
    // 0x105fe8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x105FE4u, 0x105FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FECu;
label_105fec:
    // 0x105fec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x105fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_105ff0:
    // 0x105ff0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105ff4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105FF4u;
    {
        const bool branch_taken_0x105ff4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FF4u;
        // 0x105ff8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ff4) {
            ctx->pc = 0x106008u;
            goto label_106008;
        }
    }
    ctx->pc = 0x105FFCu;
    // 0x105ffc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105FFCu;
    SET_GPR_U32(ctx, 31, 0x106004u);
    ctx->pc = 0x106000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FFCu;
    // 0x106000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105FFCu, 0x106004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106004u;
label_106004:
    // 0x106004: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106008:
    // 0x106008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10600c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10600cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106014: 0x3e00008  jr          $ra
    ctx->pc = 0x106014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106014u;
        // 0x106018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10601Cu;
}
