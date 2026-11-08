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

// Function: entry_001040f0
// Address: 0x1040f0 - 0x10412c
void entry_001040f0_0x1040f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001040f0_0x1040f0");
#endif

    switch (ctx->pc) {
        case 0x1040f8u: goto label_1040f8;
        case 0x104108u: goto label_104108;
        default: break;
    }

    ctx->pc = 0x1040f0u;

    // 0x1040f0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1040F0u;
    SET_GPR_U32(ctx, 31, 0x1040F8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1040F0u, 0x1040F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040F8u;
label_1040f8:
    // 0x1040f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1040F8u;
    {
        const bool branch_taken_0x1040f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040F8u;
        // 0x1040fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040f8) {
            ctx->pc = 0x10412Cu;
            return;
        }
    }
    ctx->pc = 0x104100u;
    // 0x104100: 0xc0418dc  jal         func_106370
    ctx->pc = 0x104100u;
    SET_GPR_U32(ctx, 31, 0x104108u);
    ctx->pc = 0x104104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104100u;
    // 0x104104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x104100u, 0x104108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104108u;
label_104108:
    // 0x104108: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10410c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104110: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x104110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x104114: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x104114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x104118: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10411c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104120: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104124: 0x24429890  addiu       $v0, $v0, -0x6770
    ctx->pc = 0x104124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940816));
    // 0x104128: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10412cu;
}
