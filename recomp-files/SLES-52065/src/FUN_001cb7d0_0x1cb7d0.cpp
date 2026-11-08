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

// Function: FUN_001cb7d0
// Address: 0x1cb7d0 - 0x1cb830
void FUN_001cb7d0_0x1cb7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb7d0_0x1cb7d0");
#endif

    switch (ctx->pc) {
        case 0x1cb800u: goto label_1cb800;
        case 0x1cb818u: goto label_1cb818;
        default: break;
    }

    ctx->pc = 0x1cb7d0u;

    // 0x1cb7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb7d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb7d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb7dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb7e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB7E4u;
    {
        const bool branch_taken_0x1cb7e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7E4u;
        // 0x1cb7e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7e4) {
            ctx->pc = 0x1CB818u;
            goto label_1cb818;
        }
    }
    ctx->pc = 0x1CB7ECu;
    // 0x1cb7ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1cb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1cb7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7f4: 0x2442bd70  addiu       $v0, $v0, -0x4290
    ctx->pc = 0x1cb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950256));
    // 0x1cb7f8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1CB7F8u;
    SET_GPR_U32(ctx, 31, 0x1CB800u);
    ctx->pc = 0x1CB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7F8u;
    // 0x1cb7fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CB7F8u, 0x1CB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB800u;
label_1cb800:
    // 0x1cb800: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1cb800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1cb804: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cb804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cb808: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB808u;
    {
        const bool branch_taken_0x1cb808 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB808u;
        // 0x1cb80c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb808) {
            ctx->pc = 0x1CB81Cu;
            goto label_1cb81c;
        }
    }
    ctx->pc = 0x1CB810u;
    // 0x1cb810: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1CB810u;
    SET_GPR_U32(ctx, 31, 0x1CB818u);
    ctx->pc = 0x1CB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB810u;
    // 0x1cb814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CB810u, 0x1CB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB818u;
label_1cb818:
    // 0x1cb818: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cb818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb81c:
    // 0x1cb81c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb828: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB828u;
        // 0x1cb82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB830u;
}
