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

// Function: entry_0019be70
// Address: 0x19be70 - 0x19be98
void entry_0019be70_0x19be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019be70_0x19be70");
#endif

    ctx->pc = 0x19be70u;

    // 0x19be70: 0x8e220760  lw          $v0, 0x760($s1)
    ctx->pc = 0x19be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
    // 0x19be74: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19be74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19be78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19BE78u;
    {
        const bool branch_taken_0x19be78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE78u;
        // 0x19be7c: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be78) {
            ctx->pc = 0x19BE58u;
            return;
        }
    }
    ctx->pc = 0x19BE80u;
    // 0x19be80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19be84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be88: 0xa2220938  sb          $v0, 0x938($s1)
    ctx->pc = 0x19be88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2360), (uint8_t)GPR_U32(ctx, 2));
    // 0x19be8c: 0xae200910  sw          $zero, 0x910($s1)
    ctx->pc = 0x19be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
    // 0x19be90: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19BE90u;
    SET_GPR_U32(ctx, 31, 0x19BE98u);
    ctx->pc = 0x19BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE90u;
    // 0x19be94: 0xae200914  sw          $zero, 0x914($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19BE90u, 0x19BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE98u;
}
