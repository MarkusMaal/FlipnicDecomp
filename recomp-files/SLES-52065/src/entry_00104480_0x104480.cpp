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

// Function: entry_00104480
// Address: 0x104480 - 0x1044bc
void entry_00104480_0x104480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104480_0x104480");
#endif

    switch (ctx->pc) {
        case 0x104488u: goto label_104488;
        case 0x104498u: goto label_104498;
        default: break;
    }

    ctx->pc = 0x104480u;

    // 0x104480: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104480u;
    SET_GPR_U32(ctx, 31, 0x104488u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104480u, 0x104488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104488u;
label_104488:
    // 0x104488: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104488u;
    {
        const bool branch_taken_0x104488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104488u;
        // 0x10448c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104488) {
            ctx->pc = 0x1044BCu;
            return;
        }
    }
    ctx->pc = 0x104490u;
    // 0x104490: 0xc056360  jal         func_158D80
    ctx->pc = 0x104490u;
    SET_GPR_U32(ctx, 31, 0x104498u);
    ctx->pc = 0x104494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104490u;
    // 0x104494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104490u, 0x104498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104498u;
label_104498:
    // 0x104498: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10449c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10449cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1044a0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1044a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1044a4: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x1044a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x1044a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1044a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1044ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1044acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1044b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1044b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1044b4: 0x2442a7f0  addiu       $v0, $v0, -0x5810
    ctx->pc = 0x1044b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944752));
    // 0x1044b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1044b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1044bcu;
}
