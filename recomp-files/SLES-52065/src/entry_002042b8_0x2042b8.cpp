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

// Function: entry_002042b8
// Address: 0x2042b8 - 0x2042f8
void entry_002042b8_0x2042b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002042b8_0x2042b8");
#endif

    switch (ctx->pc) {
        case 0x2042c4u: goto label_2042c4;
        case 0x2042e0u: goto label_2042e0;
        default: break;
    }

    ctx->pc = 0x2042b8u;

label_2042b8:
    // 0x2042b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2042b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042bc: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x2042BCu;
    SET_GPR_U32(ctx, 31, 0x2042C4u);
    ctx->pc = 0x2042C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042BCu;
    // 0x2042c0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x2042BCu, 0x2042C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042C4u;
label_2042c4:
    // 0x2042c4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2042c8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2042c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2042cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2042ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2042d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2042d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2042d8: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x2042D8u;
    SET_GPR_U32(ctx, 31, 0x2042E0u);
    ctx->pc = 0x2042DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042D8u;
    // 0x2042dc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x2042D8u, 0x2042E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042E0u;
label_2042e0:
    // 0x2042e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2042e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042e4: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2042e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2042e8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2042E8u;
    {
        const bool branch_taken_0x2042e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042E8u;
        // 0x2042ec: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042e8) {
            ctx->pc = 0x2042B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2042b8;
        }
    }
    ctx->pc = 0x2042F0u;
    // 0x2042f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2042F0u;
    {
        const bool branch_taken_0x2042f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042F0u;
        // 0x2042f4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042f0) {
            ctx->pc = 0x204308u;
            return;
        }
    }
    ctx->pc = 0x2042F8u;
}
