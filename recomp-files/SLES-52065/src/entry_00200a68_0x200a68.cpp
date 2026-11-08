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

// Function: entry_00200a68
// Address: 0x200a68 - 0x200a84
void entry_00200a68_0x200a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200a68_0x200a68");
#endif

    switch (ctx->pc) {
        case 0x200a78u: goto label_200a78;
        default: break;
    }

    ctx->pc = 0x200a68u;

label_200a68:
    // 0x200a68: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x200a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x200a6c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x200a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x200a70: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x200A70u;
    SET_GPR_U32(ctx, 31, 0x200A78u);
    ctx->pc = 0x200A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A70u;
    // 0x200a74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x200A70u, 0x200A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A78u;
label_200a78:
    // 0x200a78: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200A78u;
    {
        const bool branch_taken_0x200a78 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x200A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A78u;
        // 0x200a7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a78) {
            ctx->pc = 0x200A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200a68;
        }
    }
    ctx->pc = 0x200A80u;
    // 0x200a80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x200a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200a84u;
}
