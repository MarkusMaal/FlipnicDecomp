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

// Function: FUN_0014c040
// Address: 0x14c040 - 0x14c074
void FUN_0014c040_0x14c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c040_0x14c040");
#endif

    switch (ctx->pc) {
        case 0x14c054u: goto label_14c054;
        default: break;
    }

    ctx->pc = 0x14c040u;

    // 0x14c040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14c04c: 0xc053020  jal         func_14C080
    ctx->pc = 0x14C04Cu;
    SET_GPR_U32(ctx, 31, 0x14C054u);
    ctx->pc = 0x14C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C04Cu;
    // 0x14c050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C080u, 0x14C04Cu, 0x14C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C054u;
label_14c054:
    // 0x14c054: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14c054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14c058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14c058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c05c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14c060: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14c060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14c064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c06c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C06Cu;
        // 0x14c070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C074u;
}
