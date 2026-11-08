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

// Function: entry_001fc774
// Address: 0x1fc774 - 0x1fc7b0
void entry_001fc774_0x1fc774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc774_0x1fc774");
#endif

    switch (ctx->pc) {
        case 0x1fc7a0u: goto label_1fc7a0;
        default: break;
    }

    ctx->pc = 0x1fc774u;

    // 0x1fc774: 0x138823  negu        $s1, $s3
    ctx->pc = 0x1fc774u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1fc778: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC778u;
    {
        const bool branch_taken_0x1fc778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC778u;
        // 0x1fc77c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc778) {
            ctx->pc = 0x1FC7D8u;
            return;
        }
    }
    ctx->pc = 0x1FC780u;
    // 0x1fc780: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x1fc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1fc784: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x1fc788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc790: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fc790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc794: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1fc794u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc798: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC798u;
    SET_GPR_U32(ctx, 31, 0x1FC7A0u);
    ctx->pc = 0x1FC79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC798u;
    // 0x1fc79c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC798u, 0x1FC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7A0u;
label_1fc7a0:
    // 0x1fc7a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC7A0u;
    {
        const bool branch_taken_0x1fc7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7A0u;
        // 0x1fc7a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7a0) {
            ctx->pc = 0x1FC7D8u;
            return;
        }
    }
    ctx->pc = 0x1FC7A8u;
    // 0x1fc7a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc7ac: 0x24515060  addiu       $s1, $v0, 0x5060
    ctx->pc = 0x1fc7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    ctx->pc = 0x1fc7b0u;
}
