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

// Function: entry_0014e5e0
// Address: 0x14e5e0 - 0x14e630
void entry_0014e5e0_0x14e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e5e0_0x14e5e0");
#endif

    switch (ctx->pc) {
        case 0x14e5f0u: goto label_14e5f0;
        case 0x14e5fcu: goto label_14e5fc;
        case 0x14e604u: goto label_14e604;
        case 0x14e61cu: goto label_14e61c;
        default: break;
    }

    ctx->pc = 0x14e5e0u;

    // 0x14e5e0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E5E0u;
    {
        const bool branch_taken_0x14e5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5E0u;
        // 0x14e5e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5e0) {
            ctx->pc = 0x14E630u;
            return;
        }
    }
    ctx->pc = 0x14E5E8u;
    // 0x14e5e8: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E5E8u;
    SET_GPR_U32(ctx, 31, 0x14E5F0u);
    ctx->pc = 0x14E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5E8u;
    // 0x14e5ec: 0xafb000e4  sw          $s0, 0xE4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E5E8u, 0x14E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5F0u;
label_14e5f0:
    // 0x14e5f0: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x14e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x14e5f4: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E5F4u;
    SET_GPR_U32(ctx, 31, 0x14E5FCu);
    ctx->pc = 0x14E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5F4u;
    // 0x14e5f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E5F4u, 0x14E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5FCu;
label_14e5fc:
    // 0x14e5fc: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E5FCu;
    SET_GPR_U32(ctx, 31, 0x14E604u);
    ctx->pc = 0x14E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5FCu;
    // 0x14e600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E5FCu, 0x14E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E604u;
label_14e604:
    // 0x14e604: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e60c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e610: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e614: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E614u;
    SET_GPR_U32(ctx, 31, 0x14E61Cu);
    ctx->pc = 0x14E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E614u;
    // 0x14e618: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E614u, 0x14E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E61Cu;
label_14e61c:
    // 0x14e61c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e620: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x14e624: 0x83a700e0  lb          $a3, 0xE0($sp)
    ctx->pc = 0x14e624u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14e628: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E628u;
    SET_GPR_U32(ctx, 31, 0x14E630u);
    ctx->pc = 0x14E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E628u;
    // 0x14e62c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E628u, 0x14E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E630u;
}
