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

// Function: FUN_001cc490
// Address: 0x1cc490 - 0x1cc4d0
void FUN_001cc490_0x1cc490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc490_0x1cc490");
#endif

    switch (ctx->pc) {
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4b0u: goto label_1cc4b0;
        default: break;
    }

    ctx->pc = 0x1cc490u;

    // 0x1cc490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc49c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4a0:
    // 0x1cc4a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4a8: 0xc0714e8  jal         func_1C53A0
    ctx->pc = 0x1CC4A8u;
    SET_GPR_U32(ctx, 31, 0x1CC4B0u);
    ctx->pc = 0x1CC4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4A8u;
    // 0x1cc4ac: 0x24a529f8  addiu       $a1, $a1, 0x29F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53A0u, 0x1CC4A8u, 0x1CC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4B0u;
label_1cc4b0:
    // 0x1cc4b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cc4b4: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x1cc4b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cc4b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CC4B8u;
    {
        const bool branch_taken_0x1cc4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4b8) {
            ctx->pc = 0x1CC4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4a0;
        }
    }
    ctx->pc = 0x1CC4C0u;
    // 0x1cc4c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc4c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C8u;
        // 0x1cc4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4D0u;
}
