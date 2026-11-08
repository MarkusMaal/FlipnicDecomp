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

// Function: entry_001c1f34
// Address: 0x1c1f34 - 0x1c1f5c
void entry_001c1f34_0x1c1f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f34_0x1c1f34");
#endif

    switch (ctx->pc) {
        case 0x1c1f3cu: goto label_1c1f3c;
        case 0x1c1f54u: goto label_1c1f54;
        default: break;
    }

    ctx->pc = 0x1c1f34u;

    // 0x1c1f34: 0xc06e944  jal         func_1BA510
    ctx->pc = 0x1C1F34u;
    SET_GPR_U32(ctx, 31, 0x1C1F3Cu);
    ctx->pc = 0x1C1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F34u;
    // 0x1c1f38: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA510u, 0x1C1F34u, 0x1C1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F3Cu;
label_1c1f3c:
    // 0x1c1f3c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1f40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f44: 0x24a54a30  addiu       $a1, $a1, 0x4A30
    ctx->pc = 0x1c1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18992));
    // 0x1c1f48: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c1f4c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F54u);
    ctx->pc = 0x1C1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F4Cu;
    // 0x1c1f50: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C1F4Cu, 0x1C1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F54u;
label_1c1f54:
    // 0x1c1f54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1F54u;
    {
        const bool branch_taken_0x1c1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f54) {
            ctx->pc = 0x1C1F6Cu;
            return;
        }
    }
    ctx->pc = 0x1C1F5Cu;
}
