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

// Function: FUN_001b7150
// Address: 0x1b7150 - 0x1b71c0
void FUN_001b7150_0x1b7150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7150_0x1b7150");
#endif

    switch (ctx->pc) {
        case 0x1b7190u: goto label_1b7190;
        case 0x1b71a8u: goto label_1b71a8;
        default: break;
    }

    ctx->pc = 0x1b7150u;

    // 0x1b7150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b715c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7164: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B7164u;
    {
        const bool branch_taken_0x1b7164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7164u;
        // 0x1b7168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7164) {
            ctx->pc = 0x1B71A8u;
            goto label_1b71a8;
        }
    }
    ctx->pc = 0x1B716Cu;
    // 0x1b716c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1b716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1b7170: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1b7170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1b7174: 0x2442b960  addiu       $v0, $v0, -0x46A0
    ctx->pc = 0x1b7174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949216));
    // 0x1b7178: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7178u;
    {
        const bool branch_taken_0x1b7178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7178u;
        // 0x1b717c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7178) {
            ctx->pc = 0x1B7190u;
            goto label_1b7190;
        }
    }
    ctx->pc = 0x1B7180u;
    // 0x1b7180: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7180u;
    {
        const bool branch_taken_0x1b7180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7180u;
        // 0x1b7184: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7180) {
            ctx->pc = 0x1B7194u;
            goto label_1b7194;
        }
    }
    ctx->pc = 0x1B7188u;
    // 0x1b7188: 0xc048414  jal         func_121050
    ctx->pc = 0x1B7188u;
    SET_GPR_U32(ctx, 31, 0x1B7190u);
    ctx->pc = 0x1B718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7188u;
    // 0x1b718c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x1B7188u, 0x1B7190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7190u;
label_1b7190:
    // 0x1b7190: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1b7194:
    // 0x1b7194: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b7194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b7198: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7198u;
    {
        const bool branch_taken_0x1b7198 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7198u;
        // 0x1b719c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7198) {
            ctx->pc = 0x1B71ACu;
            goto label_1b71ac;
        }
    }
    ctx->pc = 0x1B71A0u;
    // 0x1b71a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B71A0u;
    SET_GPR_U32(ctx, 31, 0x1B71A8u);
    ctx->pc = 0x1B71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71A0u;
    // 0x1b71a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B71A0u, 0x1B71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71A8u;
label_1b71a8:
    // 0x1b71a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b71a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b71ac:
    // 0x1b71ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b71acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b71b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b71b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b71b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b71b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b71b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B71B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71B8u;
        // 0x1b71bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B71B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B71C0u;
}
