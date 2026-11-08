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

// Function: entry_0014e654
// Address: 0x14e654 - 0x14e6a4
void entry_0014e654_0x14e654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e654_0x14e654");
#endif

    switch (ctx->pc) {
        case 0x14e664u: goto label_14e664;
        case 0x14e670u: goto label_14e670;
        case 0x14e678u: goto label_14e678;
        case 0x14e690u: goto label_14e690;
        default: break;
    }

    ctx->pc = 0x14e654u;

    // 0x14e654: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E654u;
    {
        const bool branch_taken_0x14e654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E654u;
        // 0x14e658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e654) {
            ctx->pc = 0x14E6A4u;
            return;
        }
    }
    ctx->pc = 0x14E65Cu;
    // 0x14e65c: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E65Cu;
    SET_GPR_U32(ctx, 31, 0x14E664u);
    ctx->pc = 0x14E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E65Cu;
    // 0x14e660: 0xafb000ec  sw          $s0, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E65Cu, 0x14E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E664u;
label_14e664:
    // 0x14e664: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x14e668: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E668u;
    SET_GPR_U32(ctx, 31, 0x14E670u);
    ctx->pc = 0x14E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E668u;
    // 0x14e66c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E668u, 0x14E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E670u;
    SET_GPR_U32(ctx, 31, 0x14E678u);
    ctx->pc = 0x14E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E670u;
    // 0x14e674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E670u, 0x14E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E678u;
label_14e678:
    // 0x14e678: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14e67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e684: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e688: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E688u;
    SET_GPR_U32(ctx, 31, 0x14E690u);
    ctx->pc = 0x14E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E688u;
    // 0x14e68c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E688u, 0x14E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E690u;
label_14e690:
    // 0x14e690: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e694: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x14e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x14e698: 0x83a700e8  lb          $a3, 0xE8($sp)
    ctx->pc = 0x14e698u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x14e69c: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E69Cu;
    SET_GPR_U32(ctx, 31, 0x14E6A4u);
    ctx->pc = 0x14E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E69Cu;
    // 0x14e6a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E69Cu, 0x14E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6A4u;
}
