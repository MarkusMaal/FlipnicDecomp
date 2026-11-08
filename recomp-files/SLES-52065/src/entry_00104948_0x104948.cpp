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

// Function: entry_00104948
// Address: 0x104948 - 0x104984
void entry_00104948_0x104948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104948_0x104948");
#endif

    switch (ctx->pc) {
        case 0x104950u: goto label_104950;
        case 0x104960u: goto label_104960;
        default: break;
    }

    ctx->pc = 0x104948u;

    // 0x104948: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104948u;
    SET_GPR_U32(ctx, 31, 0x104950u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104948u, 0x104950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104950u;
label_104950:
    // 0x104950: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104950u;
    {
        const bool branch_taken_0x104950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104950u;
        // 0x104954: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104950) {
            ctx->pc = 0x104984u;
            return;
        }
    }
    ctx->pc = 0x104958u;
    // 0x104958: 0xc0418dc  jal         func_106370
    ctx->pc = 0x104958u;
    SET_GPR_U32(ctx, 31, 0x104960u);
    ctx->pc = 0x10495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104958u;
    // 0x10495c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x104958u, 0x104960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104960u;
label_104960:
    // 0x104960: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104964: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104968: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x104968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10496c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x10496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x104970: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104974: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104978: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10497c: 0x244294d0  addiu       $v0, $v0, -0x6B30
    ctx->pc = 0x10497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x104980: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104984u;
}
