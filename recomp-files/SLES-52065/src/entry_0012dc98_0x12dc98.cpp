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

// Function: entry_0012dc98
// Address: 0x12dc98 - 0x12dcbc
void entry_0012dc98_0x12dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dc98_0x12dc98");
#endif

    switch (ctx->pc) {
        case 0x12dca8u: goto label_12dca8;
        default: break;
    }

    ctx->pc = 0x12dc98u;

    // 0x12dc98: 0x26a40034  addiu       $a0, $s5, 0x34
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x12dc9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12dc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dca0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x12DCA0u;
    SET_GPR_U32(ctx, 31, 0x12DCA8u);
    ctx->pc = 0x12DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCA0u;
    // 0x12dca4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x12DCA0u, 0x12DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCA8u;
label_12dca8:
    // 0x12dca8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x12dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dcac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12dcacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12dcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcb4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x12DCB4u;
    {
        const bool branch_taken_0x12dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB4u;
        // 0x12dcb8: 0xaea20030  sw          $v0, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcb4) {
            ctx->pc = 0x12DE74u;
            return;
        }
    }
    ctx->pc = 0x12DCBCu;
}
