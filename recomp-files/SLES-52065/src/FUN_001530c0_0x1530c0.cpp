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

// Function: FUN_001530c0
// Address: 0x1530c0 - 0x153108
void FUN_001530c0_0x1530c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001530c0_0x1530c0");
#endif

    switch (ctx->pc) {
        case 0x1530fcu: goto label_1530fc;
        default: break;
    }

    ctx->pc = 0x1530c0u;

    // 0x1530c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1530c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1530c4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1530c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1530c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1530c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1530cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1530d0: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1530d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1530d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1530d8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1530d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530dc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1530dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530e0: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x1530e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1530e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1530e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530e8: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x1530e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1530ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1530ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530f0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1530f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530f4: 0xc055288  jal         func_154A20
    ctx->pc = 0x1530F4u;
    SET_GPR_U32(ctx, 31, 0x1530FCu);
    ctx->pc = 0x1530F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530F4u;
    // 0x1530f8: 0x25270020  addiu       $a3, $t1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A20u, 0x1530F4u, 0x1530FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530FCu;
label_1530fc:
    // 0x1530fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1530fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153100: 0x3e00008  jr          $ra
    ctx->pc = 0x153100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153100u;
        // 0x153104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153108u;
}
