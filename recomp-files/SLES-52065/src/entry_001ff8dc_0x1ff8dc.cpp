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

// Function: entry_001ff8dc
// Address: 0x1ff8dc - 0x1ff900
void entry_001ff8dc_0x1ff8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff8dc_0x1ff8dc");
#endif

    ctx->pc = 0x1ff8dcu;

label_1ff8dc:
    // 0x1ff8dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ff8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ff8e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff8e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ff8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff8e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff8ec: 0x0  nop
    ctx->pc = 0x1ff8ecu;
    // NOP
    // 0x1ff8f0: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF8F0u;
    {
        const bool branch_taken_0x1ff8f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8F0u;
        // 0x1ff8f4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8f0) {
            ctx->pc = 0x1FF8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff8dc;
        }
    }
    ctx->pc = 0x1FF8F8u;
    // 0x1ff8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8F8u;
        // 0x1ff8fc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF900u;
}
