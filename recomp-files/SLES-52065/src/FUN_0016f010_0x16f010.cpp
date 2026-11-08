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

// Function: FUN_0016f010
// Address: 0x16f010 - 0x16f090
void FUN_0016f010_0x16f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f010_0x16f010");
#endif

    switch (ctx->pc) {
        case 0x16f04cu: goto label_16f04c;
        case 0x16f078u: goto label_16f078;
        default: break;
    }

    ctx->pc = 0x16f010u;

    // 0x16f010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16f018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f024: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16F024u;
    {
        const bool branch_taken_0x16f024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F024u;
        // 0x16f028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f024) {
            ctx->pc = 0x16F078u;
            goto label_16f078;
        }
    }
    ctx->pc = 0x16F02Cu;
    // 0x16f02c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16f030: 0x2442a970  addiu       $v0, $v0, -0x5690
    ctx->pc = 0x16f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945136));
    // 0x16f034: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16f034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x16f038: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16f03c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F03Cu;
    {
        const bool branch_taken_0x16f03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F03Cu;
        // 0x16f040: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f03c) {
            ctx->pc = 0x16F04Cu;
            goto label_16f04c;
        }
    }
    ctx->pc = 0x16F044u;
    // 0x16f044: 0xc04018c  jal         func_100630
    ctx->pc = 0x16F044u;
    SET_GPR_U32(ctx, 31, 0x16F04Cu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x16F044u, 0x16F04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F04Cu;
label_16f04c:
    // 0x16f04c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F04Cu;
    {
        const bool branch_taken_0x16f04c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F04Cu;
        // 0x16f050: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f04c) {
            ctx->pc = 0x16F064u;
            goto label_16f064;
        }
    }
    ctx->pc = 0x16F054u;
    // 0x16f054: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16f058: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x16f05c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x16f060: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_16f064:
    // 0x16f064: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16f064u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16f068: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F068u;
    {
        const bool branch_taken_0x16f068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F068u;
        // 0x16f06c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f068) {
            ctx->pc = 0x16F07Cu;
            goto label_16f07c;
        }
    }
    ctx->pc = 0x16F070u;
    // 0x16f070: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16F070u;
    SET_GPR_U32(ctx, 31, 0x16F078u);
    ctx->pc = 0x16F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F070u;
    // 0x16f074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16F070u, 0x16F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F078u;
label_16f078:
    // 0x16f078: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16f078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f07c:
    // 0x16f07c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16f07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f088: 0x3e00008  jr          $ra
    ctx->pc = 0x16F088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F088u;
        // 0x16f08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F090u;
}
