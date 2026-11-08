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

// Function: entry_0010bc5c
// Address: 0x10bc5c - 0x10bc80
void entry_0010bc5c_0x10bc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bc5c_0x10bc5c");
#endif

    switch (ctx->pc) {
        case 0x10bc6cu: goto label_10bc6c;
        default: break;
    }

    ctx->pc = 0x10bc5cu;

    // 0x10bc5c: 0x8e060250  lw          $a2, 0x250($s0)
    ctx->pc = 0x10bc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x10bc60: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x10bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x10bc64: 0xc042930  jal         func_10A4C0
    ctx->pc = 0x10BC64u;
    SET_GPR_U32(ctx, 31, 0x10BC6Cu);
    ctx->pc = 0x10BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC64u;
    // 0x10bc68: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4C0u, 0x10BC64u, 0x10BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC6Cu;
label_10bc6c:
    // 0x10bc6c: 0x8e0343e0  lw          $v1, 0x43E0($s0)
    ctx->pc = 0x10bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17376)));
    // 0x10bc70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BC70u;
    {
        const bool branch_taken_0x10bc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC70u;
        // 0x10bc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc70) {
            ctx->pc = 0x10BC80u;
            return;
        }
    }
    ctx->pc = 0x10BC78u;
    // 0x10bc78: 0xc042118  jal         func_108460
    ctx->pc = 0x10BC78u;
    SET_GPR_U32(ctx, 31, 0x10BC80u);
    ctx->pc = 0x10BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC78u;
    // 0x10bc7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10BC78u, 0x10BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC80u;
}
