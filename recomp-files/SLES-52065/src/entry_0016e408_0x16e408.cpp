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

// Function: entry_0016e408
// Address: 0x16e408 - 0x16e458
void entry_0016e408_0x16e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e408_0x16e408");
#endif

    ctx->pc = 0x16e408u;

label_16e408:
    // 0x16e408: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e40c:
    // 0x16e40c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e410:
    // 0x16e410: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e414:
    // 0x16e414: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e418:
    // 0x16e418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16e41c:
    // 0x16e41c: 0x84630080  lh          $v1, 0x80($v1)
    ctx->pc = 0x16e41cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16e420:
    // 0x16e420: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_16e424:
    if (ctx->pc == 0x16E424u) {
        ctx->pc = 0x16E428u;
        goto label_16e428;
    }
    ctx->pc = 0x16E420u;
    {
        const bool branch_taken_0x16e420 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e420) {
            ctx->pc = 0x16E458u;
            return;
        }
    }
    ctx->pc = 0x16E428u;
label_16e428:
    // 0x16e428: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e42c:
    // 0x16e42c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16e430:
    // 0x16e430: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e434:
    // 0x16e434: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e438:
    // 0x16e438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e43c:
    // 0x16e43c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e440:
    // 0x16e440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e444:
    // 0x16e444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e448:
    // 0x16e448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e44c:
    // 0x16e44c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e450:
    // 0x16e450: 0x320f809  jalr        $t9
label_16e454:
    if (ctx->pc == 0x16E454u) {
        ctx->pc = 0x16E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E450u;
        // 0x16e454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E458u;
        goto label_fallthrough_0x16e450;
    }
    ctx->pc = 0x16E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E458u);
        ctx->pc = 0x16E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E450u;
        // 0x16e454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E450u, 0x16E458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16e450:
    ctx->pc = 0x16E458u;
}
