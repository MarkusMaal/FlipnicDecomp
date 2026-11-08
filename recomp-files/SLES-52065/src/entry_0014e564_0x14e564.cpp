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

// Function: entry_0014e564
// Address: 0x14e564 - 0x14e5b4
void entry_0014e564_0x14e564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e564_0x14e564");
#endif

    switch (ctx->pc) {
        case 0x14e574u: goto label_14e574;
        case 0x14e580u: goto label_14e580;
        case 0x14e588u: goto label_14e588;
        case 0x14e5a0u: goto label_14e5a0;
        default: break;
    }

    ctx->pc = 0x14e564u;

    // 0x14e564: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E564u;
    {
        const bool branch_taken_0x14e564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E564u;
        // 0x14e568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e564) {
            ctx->pc = 0x14E5B4u;
            return;
        }
    }
    ctx->pc = 0x14E56Cu;
    // 0x14e56c: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E56Cu;
    SET_GPR_U32(ctx, 31, 0x14E574u);
    ctx->pc = 0x14E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E56Cu;
    // 0x14e570: 0xafb000dc  sw          $s0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E56Cu, 0x14E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E574u;
label_14e574:
    // 0x14e574: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x14e574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x14e578: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E578u;
    SET_GPR_U32(ctx, 31, 0x14E580u);
    ctx->pc = 0x14E57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E578u;
    // 0x14e57c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E578u, 0x14E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E580u;
label_14e580:
    // 0x14e580: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E580u;
    SET_GPR_U32(ctx, 31, 0x14E588u);
    ctx->pc = 0x14E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E580u;
    // 0x14e584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E580u, 0x14E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E588u;
label_14e588:
    // 0x14e588: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14e58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e590: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e594: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e598: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E598u;
    SET_GPR_U32(ctx, 31, 0x14E5A0u);
    ctx->pc = 0x14E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E598u;
    // 0x14e59c: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E598u, 0x14E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5A0u;
label_14e5a0:
    // 0x14e5a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e5a4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x14e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x14e5a8: 0x83a700d8  lb          $a3, 0xD8($sp)
    ctx->pc = 0x14e5a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x14e5ac: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E5ACu;
    SET_GPR_U32(ctx, 31, 0x14E5B4u);
    ctx->pc = 0x14E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5ACu;
    // 0x14e5b0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E5ACu, 0x14E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5B4u;
}
