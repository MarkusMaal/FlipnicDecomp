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

// Function: FUN_0012a1d0
// Address: 0x12a1d0 - 0x12a230
void FUN_0012a1d0_0x12a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a1d0_0x12a1d0");
#endif

    switch (ctx->pc) {
        case 0x12a200u: goto label_12a200;
        case 0x12a218u: goto label_12a218;
        default: break;
    }

    ctx->pc = 0x12a1d0u;

    // 0x12a1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a1d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12a1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a1e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x12A1E4u;
    {
        const bool branch_taken_0x12a1e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1E4u;
        // 0x12a1e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1e4) {
            ctx->pc = 0x12A218u;
            goto label_12a218;
        }
    }
    ctx->pc = 0x12A1ECu;
    // 0x12a1ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x12a1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1f4: 0x24428b00  addiu       $v0, $v0, -0x7500
    ctx->pc = 0x12a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937344));
    // 0x12a1f8: 0xc04a81c  jal         func_12A070
    ctx->pc = 0x12A1F8u;
    SET_GPR_U32(ctx, 31, 0x12A200u);
    ctx->pc = 0x12A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1F8u;
    // 0x12a1fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A070u, 0x12A1F8u, 0x12A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A200u;
label_12a200:
    // 0x12a200: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12a204: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12a204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12a208: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A208u;
    {
        const bool branch_taken_0x12a208 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A208u;
        // 0x12a20c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a208) {
            ctx->pc = 0x12A21Cu;
            goto label_12a21c;
        }
    }
    ctx->pc = 0x12A210u;
    // 0x12a210: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12A210u;
    SET_GPR_U32(ctx, 31, 0x12A218u);
    ctx->pc = 0x12A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A210u;
    // 0x12a214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12A210u, 0x12A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A218u;
label_12a218:
    // 0x12a218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12a218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a21c:
    // 0x12a21c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12a220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a228: 0x3e00008  jr          $ra
    ctx->pc = 0x12A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A228u;
        // 0x12a22c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A230u;
}
