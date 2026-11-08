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

// Function: entry_001a3c58
// Address: 0x1a3c58 - 0x1a3c84
void entry_001a3c58_0x1a3c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c58_0x1a3c58");
#endif

    switch (ctx->pc) {
        case 0x1a3c7cu: goto label_1a3c7c;
        default: break;
    }

    ctx->pc = 0x1a3c58u;

    // 0x1a3c58: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a3c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c64: 0xac4528e0  sw          $a1, 0x28E0($v0)
    ctx->pc = 0x1a3c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10464), GPR_U32(ctx, 5));
    // 0x1a3c68: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1a3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x1a3c6c: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
    // 0x1a3c70: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x1a3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
    // 0x1a3c74: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A3C74u;
    SET_GPR_U32(ctx, 31, 0x1A3C7Cu);
    ctx->pc = 0x1A3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C74u;
    // 0x1a3c78: 0xae200680  sw          $zero, 0x680($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A3C74u, 0x1A3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C7Cu;
label_1a3c7c:
    // 0x1a3c7c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1A3C7Cu;
    {
        const bool branch_taken_0x1a3c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c7c) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3C84u;
}
