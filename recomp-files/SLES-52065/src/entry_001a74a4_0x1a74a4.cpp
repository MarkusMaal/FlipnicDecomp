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

// Function: entry_001a74a4
// Address: 0x1a74a4 - 0x1a74d8
void entry_001a74a4_0x1a74a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a74a4_0x1a74a4");
#endif

    switch (ctx->pc) {
        case 0x1a74b4u: goto label_1a74b4;
        case 0x1a74c4u: goto label_1a74c4;
        default: break;
    }

    ctx->pc = 0x1a74a4u;

    // 0x1a74a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A74A4u;
    {
        const bool branch_taken_0x1a74a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74a4) {
            ctx->pc = 0x1A74D8u;
            return;
        }
    }
    ctx->pc = 0x1A74ACu;
    // 0x1a74ac: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A74ACu;
    SET_GPR_U32(ctx, 31, 0x1A74B4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A74ACu, 0x1A74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74B4u;
label_1a74b4:
    // 0x1a74b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a74b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1a74b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a74bc: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A74BCu;
    SET_GPR_U32(ctx, 31, 0x1A74C4u);
    ctx->pc = 0x1A74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A74BCu;
    // 0x1a74c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A74BCu, 0x1A74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74C4u;
label_1a74c4:
    // 0x1a74c4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1a74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a74c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a74c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a74cc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1a74ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1a74d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a74d4: 0xa242001c  sb          $v0, 0x1C($s2)
    ctx->pc = 0x1a74d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a74d8u;
}
