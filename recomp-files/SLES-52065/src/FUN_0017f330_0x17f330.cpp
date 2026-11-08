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

// Function: FUN_0017f330
// Address: 0x17f330 - 0x17f398
void FUN_0017f330_0x17f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f330_0x17f330");
#endif

    switch (ctx->pc) {
        case 0x17f354u: goto label_17f354;
        case 0x17f368u: goto label_17f368;
        case 0x17f380u: goto label_17f380;
        default: break;
    }

    ctx->pc = 0x17f330u;

    // 0x17f330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f344: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x17F344u;
    {
        const bool branch_taken_0x17f344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F344u;
        // 0x17f348: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f344) {
            ctx->pc = 0x17F380u;
            goto label_17f380;
        }
    }
    ctx->pc = 0x17F34Cu;
    // 0x17f34c: 0xc05fdcc  jal         func_17F730
    ctx->pc = 0x17F34Cu;
    SET_GPR_U32(ctx, 31, 0x17F354u);
    ctx->pc = 0x17F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F730u, 0x17F34Cu, 0x17F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F354u;
label_17f354:
    // 0x17f354: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17f354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17f358: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F358u;
    {
        const bool branch_taken_0x17f358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F358u;
        // 0x17f35c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f358) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F360u;
    // 0x17f360: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F360u;
    SET_GPR_U32(ctx, 31, 0x17F368u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F360u, 0x17F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F368u;
label_17f368:
    // 0x17f368: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_17f36c:
    // 0x17f36c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f36cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f370: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F370u;
    {
        const bool branch_taken_0x17f370 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F370u;
        // 0x17f374: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f370) {
            ctx->pc = 0x17F384u;
            goto label_17f384;
        }
    }
    ctx->pc = 0x17F378u;
    // 0x17f378: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F378u;
    SET_GPR_U32(ctx, 31, 0x17F380u);
    ctx->pc = 0x17F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F378u;
    // 0x17f37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F378u, 0x17F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F380u;
label_17f380:
    // 0x17f380: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17f380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f384:
    // 0x17f384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f390: 0x3e00008  jr          $ra
    ctx->pc = 0x17F390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F390u;
        // 0x17f394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F398u;
}
