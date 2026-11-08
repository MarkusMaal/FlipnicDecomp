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

// Function: entry_00202694
// Address: 0x202694 - 0x2026d8
void entry_00202694_0x202694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202694_0x202694");
#endif

    switch (ctx->pc) {
        case 0x2026c0u: goto label_2026c0;
        case 0x2026d0u: goto label_2026d0;
        default: break;
    }

    ctx->pc = 0x202694u;

    // 0x202694: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x202694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x202698: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202698u;
    {
        const bool branch_taken_0x202698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202698u;
        // 0x20269c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202698) {
            ctx->pc = 0x202704u;
            return;
        }
    }
    ctx->pc = 0x2026A0u;
    // 0x2026a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x2026a4: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x2026a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x2026a8: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x2026a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x2026ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2026acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2026b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2026b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2026b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2026b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026b8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2026B8u;
    SET_GPR_U32(ctx, 31, 0x2026C0u);
    ctx->pc = 0x2026BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026B8u;
    // 0x2026bc: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2026B8u, 0x2026C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026C0u;
label_2026c0:
    // 0x2026c0: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2026C0u;
    {
        const bool branch_taken_0x2026c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2026C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026C0u;
        // 0x2026c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026c0) {
            ctx->pc = 0x2026D8u;
            return;
        }
    }
    ctx->pc = 0x2026C8u;
    // 0x2026c8: 0xc081a60  jal         func_206980
    ctx->pc = 0x2026C8u;
    SET_GPR_U32(ctx, 31, 0x2026D0u);
    ctx->pc = 0x2026CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026C8u;
    // 0x2026cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x2026C8u, 0x2026D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026D0u;
label_2026d0:
    // 0x2026d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2026D0u;
    {
        const bool branch_taken_0x2026d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026D0u;
        // 0x2026d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026d0) {
            ctx->pc = 0x2026F8u;
            return;
        }
    }
    ctx->pc = 0x2026D8u;
}
