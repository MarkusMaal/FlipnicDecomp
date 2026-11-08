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

// Function: entry_001bb794
// Address: 0x1bb794 - 0x1bb7e0
void entry_001bb794_0x1bb794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb794_0x1bb794");
#endif

    switch (ctx->pc) {
        case 0x1bb79cu: goto label_1bb79c;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7b4u: goto label_1bb7b4;
        case 0x1bb7ccu: goto label_1bb7cc;
        default: break;
    }

    ctx->pc = 0x1bb794u;

    // 0x1bb794: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB794u;
    SET_GPR_U32(ctx, 31, 0x1BB79Cu);
    ctx->pc = 0x1BB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB794u;
    // 0x1bb798: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB794u, 0x1BB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB79Cu;
label_1bb79c:
    // 0x1bb79c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7a0: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BB7A0u;
    SET_GPR_U32(ctx, 31, 0x1BB7A8u);
    ctx->pc = 0x1BB7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7A0u;
    // 0x1bb7a4: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BB7A0u, 0x1BB7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7A8u;
label_1bb7a8:
    // 0x1bb7a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bb7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7ac: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB7ACu;
    SET_GPR_U32(ctx, 31, 0x1BB7B4u);
    ctx->pc = 0x1BB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7ACu;
    // 0x1bb7b0: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB7ACu, 0x1BB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7B4u;
label_1bb7b4:
    // 0x1bb7b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bb7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bb7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7c4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BB7C4u;
    SET_GPR_U32(ctx, 31, 0x1BB7CCu);
    ctx->pc = 0x1BB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7C4u;
    // 0x1bb7c8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BB7C4u, 0x1BB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7CCu;
label_1bb7cc:
    // 0x1bb7cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB7CCu;
    {
        const bool branch_taken_0x1bb7cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb7cc) {
            ctx->pc = 0x1BB7E0u;
            return;
        }
    }
    ctx->pc = 0x1BB7D4u;
    // 0x1bb7d4: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1bb7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb7d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB7D8u;
    {
        const bool branch_taken_0x1bb7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7D8u;
        // 0x1bb7dc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7d8) {
            ctx->pc = 0x1BB7F0u;
            return;
        }
    }
    ctx->pc = 0x1BB7E0u;
}
