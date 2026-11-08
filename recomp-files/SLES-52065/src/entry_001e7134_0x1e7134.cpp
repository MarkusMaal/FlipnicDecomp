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

// Function: entry_001e7134
// Address: 0x1e7134 - 0x1e7160
void entry_001e7134_0x1e7134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7134_0x1e7134");
#endif

    switch (ctx->pc) {
        case 0x1e713cu: goto label_1e713c;
        default: break;
    }

    ctx->pc = 0x1e7134u;

label_1e7134:
    // 0x1e7134: 0xc07a1d0  jal         func_1E8740
    ctx->pc = 0x1E7134u;
    SET_GPR_U32(ctx, 31, 0x1E713Cu);
    ctx->pc = 0x1E7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7134u;
    // 0x1e7138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8740u, 0x1E7134u, 0x1E713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E713Cu;
label_1e713c:
    // 0x1e713c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e7140: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1e7140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1e7144: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e7144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e7148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7148u;
    {
        const bool branch_taken_0x1e7148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7148) {
            ctx->pc = 0x1E7160u;
            return;
        }
    }
    ctx->pc = 0x1E7150u;
    // 0x1e7150: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e7150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e7154: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1e7154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7158: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7158u;
    {
        const bool branch_taken_0x1e7158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7158u;
        // 0x1e715c: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7158) {
            ctx->pc = 0x1E7134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7134;
        }
    }
    ctx->pc = 0x1E7160u;
}
