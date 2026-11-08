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

// Function: entry_0019b18c
// Address: 0x19b18c - 0x19b1b8
void entry_0019b18c_0x19b18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b18c_0x19b18c");
#endif

    switch (ctx->pc) {
        case 0x19b1a4u: goto label_19b1a4;
        case 0x19b1acu: goto label_19b1ac;
        default: break;
    }

    ctx->pc = 0x19b18cu;

label_19b18c:
    // 0x19b18c: 0xae220328  sw          $v0, 0x328($s1)
    ctx->pc = 0x19b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
label_19b190:
    // 0x19b190: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b194:
    // 0x19b194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b198:
    // 0x19b198: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x19b198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_19b19c:
    // 0x19b19c: 0x320f809  jalr        $t9
label_19b1a0:
    if (ctx->pc == 0x19B1A0u) {
        ctx->pc = 0x19B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B19Cu;
        // 0x19b1a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1A4u;
        goto label_19b1a4;
    }
    ctx->pc = 0x19B19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B1A4u);
        ctx->pc = 0x19B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B19Cu;
        // 0x19b1a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B19Cu, 0x19B1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B1A4u;
label_19b1a4:
    // 0x19b1a4: 0xc063e14  jal         func_18F850
label_19b1a8:
    if (ctx->pc == 0x19B1A8u) {
        ctx->pc = 0x19B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1A4u;
        // 0x19b1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1ACu;
        goto label_19b1ac;
    }
    ctx->pc = 0x19B1A4u;
    SET_GPR_U32(ctx, 31, 0x19B1ACu);
    ctx->pc = 0x19B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1A4u;
    // 0x19b1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19B1A4u, 0x19B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1ACu;
label_19b1ac:
    // 0x19b1ac: 0x10000150  b           . + 4 + (0x150 << 2)
label_19b1b0:
    if (ctx->pc == 0x19B1B0u) {
        ctx->pc = 0x19B1B4u;
        goto label_19b1b4;
    }
    ctx->pc = 0x19B1ACu;
    {
        const bool branch_taken_0x19b1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1ac) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
    ctx->pc = 0x19B1B4u;
label_19b1b4:
    // 0x19b1b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19b1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19b1b8u;
}
