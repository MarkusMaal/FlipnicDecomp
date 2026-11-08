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

// Function: FUN_0017d250
// Address: 0x17d250 - 0x17d2ac
void FUN_0017d250_0x17d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d250_0x17d250");
#endif

    switch (ctx->pc) {
        case 0x17d27cu: goto label_17d27c;
        case 0x17d294u: goto label_17d294;
        default: break;
    }

    ctx->pc = 0x17d250u;

    // 0x17d250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d264: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x17D264u;
    {
        const bool branch_taken_0x17d264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D264u;
        // 0x17d268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d264) {
            ctx->pc = 0x17D294u;
            goto label_17d294;
        }
    }
    ctx->pc = 0x17D26Cu;
    // 0x17d26c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x17d26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x17d270: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d274: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x17D274u;
    SET_GPR_U32(ctx, 31, 0x17D27Cu);
    ctx->pc = 0x17D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D274u;
    // 0x17d278: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x17D274u, 0x17D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D27Cu;
label_17d27c:
    // 0x17d27c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17d280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17d280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17d284: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D284u;
    {
        const bool branch_taken_0x17d284 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D284u;
        // 0x17d288: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d284) {
            ctx->pc = 0x17D298u;
            goto label_17d298;
        }
    }
    ctx->pc = 0x17D28Cu;
    // 0x17d28c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17D28Cu;
    SET_GPR_U32(ctx, 31, 0x17D294u);
    ctx->pc = 0x17D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D28Cu;
    // 0x17d290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17D28Cu, 0x17D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D294u;
label_17d294:
    // 0x17d294: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17d294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d298:
    // 0x17d298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2A4u;
        // 0x17d2a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D2ACu;
}
