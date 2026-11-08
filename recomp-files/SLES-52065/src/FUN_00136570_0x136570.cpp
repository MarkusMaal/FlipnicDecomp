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

// Function: FUN_00136570
// Address: 0x136570 - 0x1365d8
void FUN_00136570_0x136570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136570_0x136570");
#endif

    switch (ctx->pc) {
        case 0x136594u: goto label_136594;
        case 0x1365a8u: goto label_1365a8;
        case 0x1365c0u: goto label_1365c0;
        default: break;
    }

    ctx->pc = 0x136570u;

    // 0x136570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13657c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136584: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x136584u;
    {
        const bool branch_taken_0x136584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x136588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136584u;
        // 0x136588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136584) {
            ctx->pc = 0x1365C0u;
            goto label_1365c0;
        }
    }
    ctx->pc = 0x13658Cu;
    // 0x13658c: 0xc04d978  jal         func_1365E0
    ctx->pc = 0x13658Cu;
    SET_GPR_U32(ctx, 31, 0x136594u);
    ctx->pc = 0x1365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365E0u, 0x13658Cu, 0x136594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136594u;
label_136594:
    // 0x136594: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x136594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x136598: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136598u;
    {
        const bool branch_taken_0x136598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136598u;
        // 0x13659c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136598) {
            ctx->pc = 0x1365ACu;
            goto label_1365ac;
        }
    }
    ctx->pc = 0x1365A0u;
    // 0x1365a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1365A0u;
    SET_GPR_U32(ctx, 31, 0x1365A8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1365A0u, 0x1365A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365A8u;
label_1365a8:
    // 0x1365a8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1365a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1365ac:
    // 0x1365ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1365acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1365b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1365B0u;
    {
        const bool branch_taken_0x1365b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1365B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365B0u;
        // 0x1365b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365b0) {
            ctx->pc = 0x1365C4u;
            goto label_1365c4;
        }
    }
    ctx->pc = 0x1365B8u;
    // 0x1365b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1365B8u;
    SET_GPR_U32(ctx, 31, 0x1365C0u);
    ctx->pc = 0x1365BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365B8u;
    // 0x1365bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1365B8u, 0x1365C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365C0u;
label_1365c0:
    // 0x1365c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1365c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1365c4:
    // 0x1365c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1365c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1365c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1365c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1365cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1365ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1365d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1365D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1365D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365D0u;
        // 0x1365d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1365D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1365D8u;
}
