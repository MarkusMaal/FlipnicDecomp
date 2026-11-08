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

// Function: FUN_001ce570
// Address: 0x1ce570 - 0x1ce5ac
void FUN_001ce570_0x1ce570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ce570_0x1ce570");
#endif

    switch (ctx->pc) {
        case 0x1ce588u: goto label_1ce588;
        case 0x1ce59cu: goto label_1ce59c;
        default: break;
    }

    ctx->pc = 0x1ce570u;

    // 0x1ce570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce574: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ce574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ce578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce57c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce580: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CE580u;
    SET_GPR_U32(ctx, 31, 0x1CE588u);
    ctx->pc = 0x1CE584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE580u;
    // 0x1ce584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CE580u, 0x1CE588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE588u;
label_1ce588:
    // 0x1ce588: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce590: 0x24a58f50  addiu       $a1, $a1, -0x70B0
    ctx->pc = 0x1ce590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938448));
    // 0x1ce594: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CE594u;
    SET_GPR_U32(ctx, 31, 0x1CE59Cu);
    ctx->pc = 0x1CE598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE594u;
    // 0x1ce598: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CE594u, 0x1CE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE59Cu;
label_1ce59c:
    // 0x1ce59c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5A4u;
        // 0x1ce5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE5ACu;
}
