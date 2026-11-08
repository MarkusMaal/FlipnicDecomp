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

// Function: entry_001b5ae4
// Address: 0x1b5ae4 - 0x1b5b14
void entry_001b5ae4_0x1b5ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ae4_0x1b5ae4");
#endif

    switch (ctx->pc) {
        case 0x1b5aecu: goto label_1b5aec;
        case 0x1b5b0cu: goto label_1b5b0c;
        default: break;
    }

    ctx->pc = 0x1b5ae4u;

label_1b5ae4:
    // 0x1b5ae4: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5AE4u;
    SET_GPR_U32(ctx, 31, 0x1B5AECu);
    ctx->pc = 0x1B5AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AE4u;
    // 0x1b5ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5AE4u, 0x1B5AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AECu;
label_1b5aec:
    // 0x1b5aec: 0x0  nop
    ctx->pc = 0x1b5aecu;
    // NOP
    // 0x1b5af0: 0x0  nop
    ctx->pc = 0x1b5af0u;
    // NOP
    // 0x1b5af4: 0x0  nop
    ctx->pc = 0x1b5af4u;
    // NOP
    // 0x1b5af8: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5AF8u;
    {
        const bool branch_taken_0x1b5af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5af8) {
            ctx->pc = 0x1B5AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5ae4;
        }
    }
    ctx->pc = 0x1B5B00u;
    // 0x1b5b00: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b5b04: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B5B04u;
    SET_GPR_U32(ctx, 31, 0x1B5B0Cu);
    ctx->pc = 0x1B5B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B04u;
    // 0x1b5b08: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B5B04u, 0x1B5B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B0Cu;
label_1b5b0c:
    // 0x1b5b0c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1B5B0Cu;
    {
        const bool branch_taken_0x1b5b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b0c) {
            ctx->pc = 0x1B5D40u;
            return;
        }
    }
    ctx->pc = 0x1B5B14u;
}
