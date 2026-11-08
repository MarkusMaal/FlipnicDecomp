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

// Function: entry_0014e34c
// Address: 0x14e34c - 0x14e39c
void entry_0014e34c_0x14e34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e34c_0x14e34c");
#endif

    switch (ctx->pc) {
        case 0x14e35cu: goto label_14e35c;
        case 0x14e368u: goto label_14e368;
        case 0x14e370u: goto label_14e370;
        case 0x14e388u: goto label_14e388;
        default: break;
    }

    ctx->pc = 0x14e34cu;

    // 0x14e34c: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E34Cu;
    {
        const bool branch_taken_0x14e34c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E34Cu;
        // 0x14e350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e34c) {
            ctx->pc = 0x14E39Cu;
            return;
        }
    }
    ctx->pc = 0x14E354u;
    // 0x14e354: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E354u;
    SET_GPR_U32(ctx, 31, 0x14E35Cu);
    ctx->pc = 0x14E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E354u;
    // 0x14e358: 0xafb600d0  sw          $s6, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E354u, 0x14E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E35Cu;
label_14e35c:
    // 0x14e35c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x14e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14e360: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E360u;
    SET_GPR_U32(ctx, 31, 0x14E368u);
    ctx->pc = 0x14E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E360u;
    // 0x14e364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E360u, 0x14E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E368u;
label_14e368:
    // 0x14e368: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E368u;
    SET_GPR_U32(ctx, 31, 0x14E370u);
    ctx->pc = 0x14E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E368u;
    // 0x14e36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E368u, 0x14E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E370u;
label_14e370:
    // 0x14e370: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14e374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e37c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e380: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E380u;
    SET_GPR_U32(ctx, 31, 0x14E388u);
    ctx->pc = 0x14E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E380u;
    // 0x14e384: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E380u, 0x14E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E388u;
label_14e388:
    // 0x14e388: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e38c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x14e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14e390: 0x83a700cc  lb          $a3, 0xCC($sp)
    ctx->pc = 0x14e390u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x14e394: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E394u;
    SET_GPR_U32(ctx, 31, 0x14E39Cu);
    ctx->pc = 0x14E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E394u;
    // 0x14e398: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E394u, 0x14E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E39Cu;
}
