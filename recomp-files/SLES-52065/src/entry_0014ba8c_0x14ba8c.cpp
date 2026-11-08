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

// Function: entry_0014ba8c
// Address: 0x14ba8c - 0x14bac0
void entry_0014ba8c_0x14ba8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ba8c_0x14ba8c");
#endif

    switch (ctx->pc) {
        case 0x14ba98u: goto label_14ba98;
        case 0x14bab8u: goto label_14bab8;
        default: break;
    }

    ctx->pc = 0x14ba8cu;

    // 0x14ba8c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x14ba8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ba90: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14BA90u;
    SET_GPR_U32(ctx, 31, 0x14BA98u);
    ctx->pc = 0x14BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA90u;
    // 0x14ba94: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14BA90u, 0x14BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA98u;
label_14ba98:
    // 0x14ba98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14ba98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba9c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BA9Cu;
    {
        const bool branch_taken_0x14ba9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA9Cu;
        // 0x14baa0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba9c) {
            ctx->pc = 0x14BAC0u;
            return;
        }
    }
    ctx->pc = 0x14BAA4u;
    // 0x14baa4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14baa8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14baac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14baacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14bab0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14BAB0u;
    SET_GPR_U32(ctx, 31, 0x14BAB8u);
    ctx->pc = 0x14BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAB0u;
    // 0x14bab4: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14BAB0u, 0x14BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAB8u;
label_14bab8:
    // 0x14bab8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14BAB8u;
    SET_GPR_U32(ctx, 31, 0x14BAC0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14BAB8u, 0x14BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAC0u;
}
