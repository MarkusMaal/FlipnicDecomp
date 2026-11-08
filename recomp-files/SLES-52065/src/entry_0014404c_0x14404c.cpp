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

// Function: entry_0014404c
// Address: 0x14404c - 0x144080
void entry_0014404c_0x14404c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014404c_0x14404c");
#endif

    switch (ctx->pc) {
        case 0x144058u: goto label_144058;
        case 0x144078u: goto label_144078;
        default: break;
    }

    ctx->pc = 0x14404cu;

    // 0x14404c: 0x0  nop
    ctx->pc = 0x14404cu;
    // NOP
    // 0x144050: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x144050u;
    SET_GPR_U32(ctx, 31, 0x144058u);
    ctx->pc = 0x144054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144050u;
    // 0x144054: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x144050u, 0x144058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144058u;
label_144058:
    // 0x144058: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x144058u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14405c: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x14405Cu;
    {
        const bool branch_taken_0x14405c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x144060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14405Cu;
        // 0x144060: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14405c) {
            ctx->pc = 0x144080u;
            return;
        }
    }
    ctx->pc = 0x144064u;
    // 0x144064: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x144064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x144068: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x144068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14406c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14406cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x144070: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x144070u;
    SET_GPR_U32(ctx, 31, 0x144078u);
    ctx->pc = 0x144074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144070u;
    // 0x144074: 0x24a5f140  addiu       $a1, $a1, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x144070u, 0x144078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144078u;
label_144078:
    // 0x144078: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x144078u;
    SET_GPR_U32(ctx, 31, 0x144080u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x144078u, 0x144080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144080u;
}
