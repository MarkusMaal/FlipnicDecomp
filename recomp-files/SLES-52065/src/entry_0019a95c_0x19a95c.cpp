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

// Function: entry_0019a95c
// Address: 0x19a95c - 0x19a988
void entry_0019a95c_0x19a95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a95c_0x19a95c");
#endif

    switch (ctx->pc) {
        case 0x19a96cu: goto label_19a96c;
        case 0x19a980u: goto label_19a980;
        default: break;
    }

    ctx->pc = 0x19a95cu;

    // 0x19a95c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19a960: 0x8c452844  lw          $a1, 0x2844($v0)
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10308)));
    // 0x19a964: 0xc0667e0  jal         func_199F80
    ctx->pc = 0x19A964u;
    SET_GPR_U32(ctx, 31, 0x19A96Cu);
    ctx->pc = 0x19A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A964u;
    // 0x19a968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A964u, 0x19A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A96Cu;
label_19a96c:
    // 0x19a96c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A96Cu;
    {
        const bool branch_taken_0x19a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a96c) {
            ctx->pc = 0x19A99Cu;
            return;
        }
    }
    ctx->pc = 0x19A974u;
    // 0x19a974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a978: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19A978u;
    SET_GPR_U32(ctx, 31, 0x19A980u);
    ctx->pc = 0x19A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A978u;
    // 0x19a97c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A978u, 0x19A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A980u;
label_19a980:
    // 0x19a980: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A980u;
    {
        const bool branch_taken_0x19a980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a980) {
            ctx->pc = 0x19A99Cu;
            return;
        }
    }
    ctx->pc = 0x19A988u;
}
