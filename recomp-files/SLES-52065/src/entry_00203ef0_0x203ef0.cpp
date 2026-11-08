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

// Function: entry_00203ef0
// Address: 0x203ef0 - 0x203f1c
void entry_00203ef0_0x203ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ef0_0x203ef0");
#endif

    switch (ctx->pc) {
        case 0x203ef8u: goto label_203ef8;
        case 0x203f08u: goto label_203f08;
        default: break;
    }

    ctx->pc = 0x203ef0u;

    // 0x203ef0: 0xc07ece4  jal         func_1FB390
    ctx->pc = 0x203EF0u;
    SET_GPR_U32(ctx, 31, 0x203EF8u);
    ctx->pc = 0x203EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203EF0u;
    // 0x203ef4: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB390u, 0x203EF0u, 0x203EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203EF8u;
label_203ef8:
    // 0x203ef8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x203EF8u;
    {
        const bool branch_taken_0x203ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EF8u;
        // 0x203efc: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ef8) {
            ctx->pc = 0x203F28u;
            return;
        }
    }
    ctx->pc = 0x203F00u;
    // 0x203f00: 0xc082178  jal         func_2085E0
    ctx->pc = 0x203F00u;
    SET_GPR_U32(ctx, 31, 0x203F08u);
    ctx->pc = 0x203F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F00u;
    // 0x203f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x203F00u, 0x203F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F08u;
label_203f08:
    // 0x203f08: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F08u;
    {
        const bool branch_taken_0x203f08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x203F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F08u;
        // 0x203f0c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f08) {
            ctx->pc = 0x203F1Cu;
            return;
        }
    }
    ctx->pc = 0x203F10u;
    // 0x203f10: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203f14: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x203f14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x203f18: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x203f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x203f1cu;
}
