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

// Function: FUN_0011f360
// Address: 0x11f360 - 0x11f3b4
void FUN_0011f360_0x11f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f360_0x11f360");
#endif

    switch (ctx->pc) {
        case 0x11f384u: goto label_11f384;
        case 0x11f39cu: goto label_11f39c;
        default: break;
    }

    ctx->pc = 0x11f360u;

    // 0x11f360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11f368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11f368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11f36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11f370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f374: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F374u;
    {
        const bool branch_taken_0x11f374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F374u;
        // 0x11f378: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f374) {
            ctx->pc = 0x11F39Cu;
            goto label_11f39c;
        }
    }
    ctx->pc = 0x11F37Cu;
    // 0x11f37c: 0xc047cf0  jal         func_11F3C0
    ctx->pc = 0x11F37Cu;
    SET_GPR_U32(ctx, 31, 0x11F384u);
    ctx->pc = 0x11F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3C0u, 0x11F37Cu, 0x11F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F384u;
label_11f384:
    // 0x11f384: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x11f384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x11f388: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11f388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11f38c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F38Cu;
    {
        const bool branch_taken_0x11f38c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F38Cu;
        // 0x11f390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f38c) {
            ctx->pc = 0x11F3A0u;
            goto label_11f3a0;
        }
    }
    ctx->pc = 0x11F394u;
    // 0x11f394: 0xc0401a4  jal         func_100690
    ctx->pc = 0x11F394u;
    SET_GPR_U32(ctx, 31, 0x11F39Cu);
    ctx->pc = 0x11F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F394u;
    // 0x11f398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x11F394u, 0x11F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F39Cu;
label_11f39c:
    // 0x11f39c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11f39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f3a0:
    // 0x11f3a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11f3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f3a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f3a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11f3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3ACu;
        // 0x11f3b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F3B4u;
}
