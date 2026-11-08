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

// Function: FUN_00143570
// Address: 0x143570 - 0x1435c4
void FUN_00143570_0x143570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143570_0x143570");
#endif

    switch (ctx->pc) {
        case 0x143594u: goto label_143594;
        case 0x1435acu: goto label_1435ac;
        default: break;
    }

    ctx->pc = 0x143570u;

    // 0x143570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14357c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14357cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x143580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143584: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143584u;
    {
        const bool branch_taken_0x143584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x143588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143584u;
        // 0x143588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143584) {
            ctx->pc = 0x1435ACu;
            goto label_1435ac;
        }
    }
    ctx->pc = 0x14358Cu;
    // 0x14358c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14358Cu;
    SET_GPR_U32(ctx, 31, 0x143594u);
    ctx->pc = 0x143590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14358Cu;
    // 0x143590: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14358Cu, 0x143594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143594u;
label_143594:
    // 0x143594: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x143594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x143598: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14359c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14359Cu;
    {
        const bool branch_taken_0x14359c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1435A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14359Cu;
        // 0x1435a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14359c) {
            ctx->pc = 0x1435B0u;
            goto label_1435b0;
        }
    }
    ctx->pc = 0x1435A4u;
    // 0x1435a4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1435A4u;
    SET_GPR_U32(ctx, 31, 0x1435ACu);
    ctx->pc = 0x1435A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435A4u;
    // 0x1435a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1435A4u, 0x1435ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435ACu;
label_1435ac:
    // 0x1435ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1435acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1435b0:
    // 0x1435b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1435b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1435b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1435b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1435b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1435b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1435bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1435BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1435C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435BCu;
        // 0x1435c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1435BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1435C4u;
}
