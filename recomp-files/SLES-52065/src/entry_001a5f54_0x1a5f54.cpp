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

// Function: entry_001a5f54
// Address: 0x1a5f54 - 0x1a5f90
void entry_001a5f54_0x1a5f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f54_0x1a5f54");
#endif

    ctx->pc = 0x1a5f54u;

    // 0x1a5f54: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1a5f54u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5f58: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x1a5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1a5f5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5F5Cu;
    {
        const bool branch_taken_0x1a5f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f5c) {
            ctx->pc = 0x1A5F90u;
            return;
        }
    }
    ctx->pc = 0x1A5F64u;
    // 0x1a5f64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a5f68: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5F68u;
    {
        const bool branch_taken_0x1a5f68 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F68u;
        // 0x1a5f6c: 0xae820104  sw          $v0, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f68) {
            ctx->pc = 0x1A5F90u;
            return;
        }
    }
    ctx->pc = 0x1A5F70u;
    // 0x1a5f70: 0x8e850100  lw          $a1, 0x100($s4)
    ctx->pc = 0x1a5f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x1a5f74: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5F74u;
    {
        const bool branch_taken_0x1a5f74 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a5f74) {
            ctx->pc = 0x1A5F90u;
            return;
        }
    }
    ctx->pc = 0x1A5F7Cu;
    // 0x1a5f7c: 0x8e8400fc  lw          $a0, 0xFC($s4)
    ctx->pc = 0x1a5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x1a5f80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5F80u;
    {
        const bool branch_taken_0x1a5f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f80) {
            ctx->pc = 0x1A5F90u;
            return;
        }
    }
    ctx->pc = 0x1A5F88u;
    // 0x1a5f88: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A5F88u;
    SET_GPR_U32(ctx, 31, 0x1A5F90u);
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A5F88u, 0x1A5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F90u;
}
