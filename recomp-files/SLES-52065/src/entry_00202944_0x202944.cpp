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

// Function: entry_00202944
// Address: 0x202944 - 0x202978
void entry_00202944_0x202944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202944_0x202944");
#endif

    switch (ctx->pc) {
        case 0x202974u: goto label_202974;
        default: break;
    }

    ctx->pc = 0x202944u;

    // 0x202944: 0x6010050  bgez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x202944u;
    {
        const bool branch_taken_0x202944 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x202948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202944u;
        // 0x202948: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202944) {
            ctx->pc = 0x202A88u;
            return;
        }
    }
    ctx->pc = 0x20294Cu;
    // 0x20294c: 0x108023  negu        $s0, $s0
    ctx->pc = 0x20294cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x202950: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x202950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x202954: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x202954u;
    {
        const bool branch_taken_0x202954 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x202958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202954u;
        // 0x202958: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202954) {
            ctx->pc = 0x202978u;
            return;
        }
    }
    ctx->pc = 0x20295Cu;
    // 0x20295c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x202960: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x202960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x202964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20296c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x20296Cu;
    SET_GPR_U32(ctx, 31, 0x202974u);
    ctx->pc = 0x202970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20296Cu;
    // 0x202970: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x20296Cu, 0x202974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202974u;
label_202974:
    // 0x202974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202978u;
}
