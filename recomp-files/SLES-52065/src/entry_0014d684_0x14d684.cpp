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

// Function: entry_0014d684
// Address: 0x14d684 - 0x14d6c0
void entry_0014d684_0x14d684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d684_0x14d684");
#endif

    switch (ctx->pc) {
        case 0x14d698u: goto label_14d698;
        case 0x14d6b8u: goto label_14d6b8;
        default: break;
    }

    ctx->pc = 0x14d684u;

    // 0x14d684: 0x0  nop
    ctx->pc = 0x14d684u;
    // NOP
    // 0x14d688: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d68c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d690: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14D690u;
    SET_GPR_U32(ctx, 31, 0x14D698u);
    ctx->pc = 0x14D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D690u;
    // 0x14d694: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14D690u, 0x14D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D698u;
label_14d698:
    // 0x14d698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14d698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d69c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D69Cu;
    {
        const bool branch_taken_0x14d69c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D69Cu;
        // 0x14d6a0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d69c) {
            ctx->pc = 0x14D6C0u;
            return;
        }
    }
    ctx->pc = 0x14D6A4u;
    // 0x14d6a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14d6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14d6a8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14d6ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d6b0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14D6B0u;
    SET_GPR_U32(ctx, 31, 0x14D6B8u);
    ctx->pc = 0x14D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6B0u;
    // 0x14d6b4: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14D6B0u, 0x14D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6B8u;
label_14d6b8:
    // 0x14d6b8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14D6B8u;
    SET_GPR_U32(ctx, 31, 0x14D6C0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14D6B8u, 0x14D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6C0u;
}
