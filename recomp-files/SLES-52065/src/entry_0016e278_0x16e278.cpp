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

// Function: entry_0016e278
// Address: 0x16e278 - 0x16e2bc
void entry_0016e278_0x16e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e278_0x16e278");
#endif

    ctx->pc = 0x16e278u;

label_16e278:
    // 0x16e278: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_16e27c:
    // 0x16e27c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_16e280:
    // 0x16e280: 0x84630080  lh          $v1, 0x80($v1)
    ctx->pc = 0x16e280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16e284:
    // 0x16e284: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_16e288:
    if (ctx->pc == 0x16E288u) {
        ctx->pc = 0x16E28Cu;
        goto label_16e28c;
    }
    ctx->pc = 0x16E284u;
    {
        const bool branch_taken_0x16e284 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e284) {
            ctx->pc = 0x16E2BCu;
            return;
        }
    }
    ctx->pc = 0x16E28Cu;
label_16e28c:
    // 0x16e28c: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e290:
    // 0x16e290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16e294:
    // 0x16e294: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e298:
    // 0x16e298: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e29c:
    // 0x16e29c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e2a0:
    // 0x16e2a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e2a4:
    // 0x16e2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e2a8:
    // 0x16e2a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e2ac:
    // 0x16e2ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e2b0:
    // 0x16e2b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e2b4:
    // 0x16e2b4: 0x320f809  jalr        $t9
label_16e2b8:
    if (ctx->pc == 0x16E2B8u) {
        ctx->pc = 0x16E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B4u;
        // 0x16e2b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2BCu;
        goto label_fallthrough_0x16e2b4;
    }
    ctx->pc = 0x16E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E2BCu);
        ctx->pc = 0x16E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B4u;
        // 0x16e2b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E2B4u, 0x16E2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16e2b4:
    ctx->pc = 0x16E2BCu;
}
