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

// Function: entry_00145e3c
// Address: 0x145e3c - 0x145e70
void entry_00145e3c_0x145e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e3c_0x145e3c");
#endif

    switch (ctx->pc) {
        case 0x145e48u: goto label_145e48;
        case 0x145e68u: goto label_145e68;
        default: break;
    }

    ctx->pc = 0x145e3cu;

    // 0x145e3c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x145e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x145e40: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x145E40u;
    SET_GPR_U32(ctx, 31, 0x145E48u);
    ctx->pc = 0x145E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E40u;
    // 0x145e44: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x145E40u, 0x145E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E48u;
label_145e48:
    // 0x145e48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e4c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x145E4Cu;
    {
        const bool branch_taken_0x145e4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x145E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E4Cu;
        // 0x145e50: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e4c) {
            ctx->pc = 0x145E70u;
            return;
        }
    }
    ctx->pc = 0x145E54u;
    // 0x145e54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x145e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x145e58: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x145e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x145e5c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x145e60: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x145E60u;
    SET_GPR_U32(ctx, 31, 0x145E68u);
    ctx->pc = 0x145E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E60u;
    // 0x145e64: 0x24a5f170  addiu       $a1, $a1, -0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x145E60u, 0x145E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E68u;
label_145e68:
    // 0x145e68: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x145E68u;
    SET_GPR_U32(ctx, 31, 0x145E70u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x145E68u, 0x145E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E70u;
}
