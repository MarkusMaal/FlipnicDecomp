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

// Function: FUN_0019a230
// Address: 0x19a230 - 0x19a290
void FUN_0019a230_0x19a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a230_0x19a230");
#endif

    switch (ctx->pc) {
        case 0x19a260u: goto label_19a260;
        case 0x19a278u: goto label_19a278;
        default: break;
    }

    ctx->pc = 0x19a230u;

    // 0x19a230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a244: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x19A244u;
    {
        const bool branch_taken_0x19a244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A244u;
        // 0x19a248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a244) {
            ctx->pc = 0x19A278u;
            goto label_19a278;
        }
    }
    ctx->pc = 0x19A24Cu;
    // 0x19a24c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19a250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a254: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x19a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x19a258: 0xc064324  jal         func_190C90
    ctx->pc = 0x19A258u;
    SET_GPR_U32(ctx, 31, 0x19A260u);
    ctx->pc = 0x19A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A258u;
    // 0x19a25c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x19A258u, 0x19A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A260u;
label_19a260:
    // 0x19a260: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19a264: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a268: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A268u;
    {
        const bool branch_taken_0x19a268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A268u;
        // 0x19a26c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a268) {
            ctx->pc = 0x19A27Cu;
            goto label_19a27c;
        }
    }
    ctx->pc = 0x19A270u;
    // 0x19a270: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19A270u;
    SET_GPR_U32(ctx, 31, 0x19A278u);
    ctx->pc = 0x19A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A270u;
    // 0x19a274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19A270u, 0x19A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A278u;
label_19a278:
    // 0x19a278: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a27c:
    // 0x19a27c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a288: 0x3e00008  jr          $ra
    ctx->pc = 0x19A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A288u;
        // 0x19a28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A290u;
}
