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

// Function: entry_002027a8
// Address: 0x2027a8 - 0x2027dc
void entry_002027a8_0x2027a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002027a8_0x2027a8");
#endif

    switch (ctx->pc) {
        case 0x2027d4u: goto label_2027d4;
        default: break;
    }

    ctx->pc = 0x2027a8u;

    // 0x2027a8: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x2027a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2027ac: 0x28c2ffea  slti        $v0, $a2, -0x16
    ctx->pc = 0x2027acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x2027b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2027B0u;
    {
        const bool branch_taken_0x2027b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2027B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027B0u;
        // 0x2027b4: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027b0) {
            ctx->pc = 0x2027E0u;
            return;
        }
    }
    ctx->pc = 0x2027B8u;
    // 0x2027b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2027bc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2027c0: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x2027c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x2027c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2027c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2027cc: 0xc0820d8  jal         func_208360
    ctx->pc = 0x2027CCu;
    SET_GPR_U32(ctx, 31, 0x2027D4u);
    ctx->pc = 0x2027D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027CCu;
    // 0x2027d0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x2027CCu, 0x2027D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027D4u;
label_2027d4:
    // 0x2027d4: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x2027D4u;
    {
        const bool branch_taken_0x2027d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027D4u;
        // 0x2027d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027d4) {
            ctx->pc = 0x2030ECu;
            return;
        }
    }
    ctx->pc = 0x2027DCu;
}
