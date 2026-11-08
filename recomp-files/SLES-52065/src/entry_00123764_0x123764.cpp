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

// Function: entry_00123764
// Address: 0x123764 - 0x123780
void entry_00123764_0x123764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123764_0x123764");
#endif

    switch (ctx->pc) {
        case 0x12377cu: goto label_12377c;
        default: break;
    }

    ctx->pc = 0x123764u;

    // 0x123764: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x123764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x123768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x123768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12376c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x12376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x123770: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x123774: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x123774u;
    SET_GPR_U32(ctx, 31, 0x12377Cu);
    ctx->pc = 0x123778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123774u;
    // 0x123778: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x123774u, 0x12377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12377Cu;
label_12377c:
    // 0x12377c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12377cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123780u;
}
