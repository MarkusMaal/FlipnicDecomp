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

// Function: FUN_0014e8a0
// Address: 0x14e8a0 - 0x14e908
void FUN_0014e8a0_0x14e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014e8a0_0x14e8a0");
#endif

    switch (ctx->pc) {
        case 0x14e8c4u: goto label_14e8c4;
        case 0x14e8d8u: goto label_14e8d8;
        case 0x14e8f0u: goto label_14e8f0;
        default: break;
    }

    ctx->pc = 0x14e8a0u;

    // 0x14e8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14e8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14e8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8b4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x14E8B4u;
    {
        const bool branch_taken_0x14e8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8B4u;
        // 0x14e8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8b4) {
            ctx->pc = 0x14E8F0u;
            goto label_14e8f0;
        }
    }
    ctx->pc = 0x14E8BCu;
    // 0x14e8bc: 0xc053bb4  jal         func_14EED0
    ctx->pc = 0x14E8BCu;
    SET_GPR_U32(ctx, 31, 0x14E8C4u);
    ctx->pc = 0x14EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EED0u, 0x14E8BCu, 0x14E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8C4u;
label_14e8c4:
    // 0x14e8c4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x14e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14e8c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E8C8u;
    {
        const bool branch_taken_0x14e8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8C8u;
        // 0x14e8cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8c8) {
            ctx->pc = 0x14E8DCu;
            goto label_14e8dc;
        }
    }
    ctx->pc = 0x14E8D0u;
    // 0x14e8d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14E8D0u;
    SET_GPR_U32(ctx, 31, 0x14E8D8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14E8D0u, 0x14E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8D8u;
label_14e8d8:
    // 0x14e8d8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x14e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_14e8dc:
    // 0x14e8dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14e8dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14e8e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E8E0u;
    {
        const bool branch_taken_0x14e8e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8E0u;
        // 0x14e8e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8e0) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E8E8u;
    // 0x14e8e8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14E8E8u;
    SET_GPR_U32(ctx, 31, 0x14E8F0u);
    ctx->pc = 0x14E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8E8u;
    // 0x14e8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14E8E8u, 0x14E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8F0u;
label_14e8f0:
    // 0x14e8f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14e8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e8f4:
    // 0x14e8f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e900: 0x3e00008  jr          $ra
    ctx->pc = 0x14E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E900u;
        // 0x14e904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E908u;
}
