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

// Function: FUN_0019e210
// Address: 0x19e210 - 0x19e270
void FUN_0019e210_0x19e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e210_0x19e210");
#endif

    switch (ctx->pc) {
        case 0x19e240u: goto label_19e240;
        case 0x19e258u: goto label_19e258;
        default: break;
    }

    ctx->pc = 0x19e210u;

    // 0x19e210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e224: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x19E224u;
    {
        const bool branch_taken_0x19e224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E224u;
        // 0x19e228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e224) {
            ctx->pc = 0x19E258u;
            goto label_19e258;
        }
    }
    ctx->pc = 0x19E22Cu;
    // 0x19e22c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19e230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e234: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x19e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x19e238: 0xc064324  jal         func_190C90
    ctx->pc = 0x19E238u;
    SET_GPR_U32(ctx, 31, 0x19E240u);
    ctx->pc = 0x19E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E238u;
    // 0x19e23c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x19E238u, 0x19E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E240u;
label_19e240:
    // 0x19e240: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19e244: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19e244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19e248: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E248u;
    {
        const bool branch_taken_0x19e248 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E248u;
        // 0x19e24c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e248) {
            ctx->pc = 0x19E25Cu;
            goto label_19e25c;
        }
    }
    ctx->pc = 0x19E250u;
    // 0x19e250: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19E250u;
    SET_GPR_U32(ctx, 31, 0x19E258u);
    ctx->pc = 0x19E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E250u;
    // 0x19e254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19E250u, 0x19E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E258u;
label_19e258:
    // 0x19e258: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19e258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e25c:
    // 0x19e25c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e268: 0x3e00008  jr          $ra
    ctx->pc = 0x19E268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E268u;
        // 0x19e26c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E270u;
}
