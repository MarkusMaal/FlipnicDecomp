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

// Function: entry_00107738
// Address: 0x107738 - 0x107770
void entry_00107738_0x107738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107738_0x107738");
#endif

    ctx->pc = 0x107738u;

label_107738:
    // 0x107738: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10773c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x107740: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x107740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x107744: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x107744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107748: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x107748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10774c: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x10774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x107750: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x107750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x107754: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x107754u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x107758: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x107758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x10775c: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x10775cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x107760: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x107760u;
    {
        const bool branch_taken_0x107760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107760u;
        // 0x107764: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107760) {
            ctx->pc = 0x107738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107738;
        }
    }
    ctx->pc = 0x107768u;
    // 0x107768: 0x3e00008  jr          $ra
    ctx->pc = 0x107768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107770u;
}
