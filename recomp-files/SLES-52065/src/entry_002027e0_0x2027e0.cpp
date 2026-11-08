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

// Function: entry_002027e0
// Address: 0x2027e0 - 0x202810
void entry_002027e0_0x2027e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002027e0_0x2027e0");
#endif

    switch (ctx->pc) {
        case 0x20280cu: goto label_20280c;
        default: break;
    }

    ctx->pc = 0x2027e0u;

    // 0x2027e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2027e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2027e4: 0x1a000057  blez        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2027E4u;
    {
        const bool branch_taken_0x2027e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027E4u;
        // 0x2027e8: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027e4) {
            ctx->pc = 0x202944u;
            return;
        }
    }
    ctx->pc = 0x2027ECu;
    // 0x2027ec: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2027ECu;
    {
        const bool branch_taken_0x2027ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027ECu;
        // 0x2027f0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027ec) {
            ctx->pc = 0x202810u;
            return;
        }
    }
    ctx->pc = 0x2027F4u;
    // 0x2027f4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2027f8: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x2027fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2027fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202804: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202804u;
    SET_GPR_U32(ctx, 31, 0x20280Cu);
    ctx->pc = 0x202808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202804u;
    // 0x202808: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202804u, 0x20280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20280Cu;
label_20280c:
    // 0x20280c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20280cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202810u;
}
