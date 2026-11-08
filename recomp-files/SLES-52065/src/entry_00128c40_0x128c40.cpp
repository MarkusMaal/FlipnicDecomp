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

// Function: entry_00128c40
// Address: 0x128c40 - 0x128ca0
void entry_00128c40_0x128c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128c40_0x128c40");
#endif

    switch (ctx->pc) {
        case 0x128c5cu: goto label_128c5c;
        case 0x128c7cu: goto label_128c7c;
        default: break;
    }

    ctx->pc = 0x128c40u;

label_128c40:
    // 0x128c40: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x128c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x128c44: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128c48: 0x24632df0  addiu       $v1, $v1, 0x2DF0
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11760));
    // 0x128c4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x128c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x128c50: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x128c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x128c54: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C54u;
    SET_GPR_U32(ctx, 31, 0x128C5Cu);
    ctx->pc = 0x128C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C54u;
    // 0x128c58: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C54u, 0x128C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C5Cu;
label_128c5c:
    // 0x128c5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128c60: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x128c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x128c64: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x128C64u;
    {
        const bool branch_taken_0x128c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C64u;
        // 0x128c68: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c64) {
            ctx->pc = 0x128C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c40;
        }
    }
    ctx->pc = 0x128C6Cu;
    // 0x128c6c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x128c70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c74: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C74u;
    SET_GPR_U32(ctx, 31, 0x128C7Cu);
    ctx->pc = 0x128C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C74u;
    // 0x128c78: 0x24842e80  addiu       $a0, $a0, 0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C74u, 0x128C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C7Cu;
label_128c7c:
    // 0x128c7c: 0x27b1009c  addiu       $s1, $sp, 0x9C
    ctx->pc = 0x128c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x128c80: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x128c80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x128c84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x128c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x128c88: 0x27b70094  addiu       $s7, $sp, 0x94
    ctx->pc = 0x128c88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x128c8c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x128c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x128c90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c94: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x128c94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x128c98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x128c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c9c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x128c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    ctx->pc = 0x128ca0u;
}
