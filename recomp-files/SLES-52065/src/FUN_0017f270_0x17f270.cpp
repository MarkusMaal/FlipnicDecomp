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

// Function: FUN_0017f270
// Address: 0x17f270 - 0x17f2ac
void FUN_0017f270_0x17f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f270_0x17f270");
#endif

    ctx->pc = 0x17f270u;

    // 0x17f270: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17f270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f274: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17f274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f278: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17f278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17f27c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17f27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f280: 0x805fca4  j           func_17F290
    ctx->pc = 0x17F280u;
    ctx->pc = 0x17F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F280u;
    // 0x17f284: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F290u;
    goto label_17f290;
    ctx->pc = 0x17F288u;
    // 0x17f288: 0x0  nop
    ctx->pc = 0x17f288u;
    // NOP
    // 0x17f28c: 0x0  nop
    ctx->pc = 0x17f28cu;
    // NOP
label_17f290:
    // 0x17f290: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17f290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f294: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17f294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17f298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17f298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f29c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17f2a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2A4u;
        // 0x17f2a8: 0xac660030  sw          $a2, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F2ACu;
}
