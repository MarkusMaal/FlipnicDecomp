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

// Function: entry_001aebd8
// Address: 0x1aebd8 - 0x1aec10
void entry_001aebd8_0x1aebd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aebd8_0x1aebd8");
#endif

    switch (ctx->pc) {
        case 0x1aebe0u: goto label_1aebe0;
        case 0x1aec08u: goto label_1aec08;
        default: break;
    }

    ctx->pc = 0x1aebd8u;

    // 0x1aebd8: 0xc055c40  jal         func_157100
    ctx->pc = 0x1AEBD8u;
    SET_GPR_U32(ctx, 31, 0x1AEBE0u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AEBD8u, 0x1AEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBE0u;
label_1aebe0:
    // 0x1aebe0: 0x8e8306c0  lw          $v1, 0x6C0($s4)
    ctx->pc = 0x1aebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1728)));
    // 0x1aebe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aebe8: 0x1c600073  bgtz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1AEBE8u;
    {
        const bool branch_taken_0x1aebe8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE8u;
        // 0x1aebec: 0xae8306c0  sw          $v1, 0x6C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebe8) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AEBF0u;
    // 0x1aebf0: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x1aebf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebf8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aebfc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1aec00: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AEC00u;
    SET_GPR_U32(ctx, 31, 0x1AEC08u);
    ctx->pc = 0x1AEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC00u;
    // 0x1aec04: 0xae8206ac  sw          $v0, 0x6AC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEC00u, 0x1AEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC08u;
label_1aec08:
    // 0x1aec08: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1AEC08u;
    {
        const bool branch_taken_0x1aec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec08) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AEC10u;
}
