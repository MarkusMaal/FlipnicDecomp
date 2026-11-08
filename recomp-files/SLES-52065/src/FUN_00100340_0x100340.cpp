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

// Function: FUN_00100340
// Address: 0x100340 - 0x1003a0
void FUN_00100340_0x100340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100340_0x100340");
#endif

    switch (ctx->pc) {
        case 0x100370u: goto label_100370;
        case 0x100388u: goto label_100388;
        default: break;
    }

    ctx->pc = 0x100340u;

    // 0x100340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10034c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100354: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x100354u;
    {
        const bool branch_taken_0x100354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100354u;
        // 0x100358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100354) {
            ctx->pc = 0x100388u;
            goto label_100388;
        }
    }
    ctx->pc = 0x10035Cu;
    // 0x10035c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x100360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100364: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x100364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x100368: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x100368u;
    SET_GPR_U32(ctx, 31, 0x100370u);
    ctx->pc = 0x10036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100368u;
    // 0x10036c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x100368u, 0x100370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100370u;
label_100370:
    // 0x100370: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x100370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x100374: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x100378: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100378u;
    {
        const bool branch_taken_0x100378 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100378u;
        // 0x10037c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100378) {
            ctx->pc = 0x10038Cu;
            goto label_10038c;
        }
    }
    ctx->pc = 0x100380u;
    // 0x100380: 0xc0401a4  jal         func_100690
    ctx->pc = 0x100380u;
    SET_GPR_U32(ctx, 31, 0x100388u);
    ctx->pc = 0x100384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100380u;
    // 0x100384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x100380u, 0x100388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100388u;
label_100388:
    // 0x100388: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x100388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10038c:
    // 0x10038c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100398: 0x3e00008  jr          $ra
    ctx->pc = 0x100398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100398u;
        // 0x10039c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1003A0u;
}
