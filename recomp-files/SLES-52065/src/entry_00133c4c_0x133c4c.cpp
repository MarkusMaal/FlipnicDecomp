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

// Function: entry_00133c4c
// Address: 0x133c4c - 0x133c98
void entry_00133c4c_0x133c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133c4c_0x133c4c");
#endif

    switch (ctx->pc) {
        case 0x133c58u: goto label_133c58;
        case 0x133c68u: goto label_133c68;
        case 0x133c90u: goto label_133c90;
        default: break;
    }

    ctx->pc = 0x133c4cu;

    // 0x133c4c: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x133c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x133c50: 0xc080702  jal         func_201C08
    ctx->pc = 0x133C50u;
    SET_GPR_U32(ctx, 31, 0x133C58u);
    ctx->pc = 0x133C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C50u;
    // 0x133c54: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133C50u, 0x133C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C58u;
label_133c58:
    // 0x133c58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x133c5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x133c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x133c60: 0xc080874  jal         func_2021D0
    ctx->pc = 0x133C60u;
    SET_GPR_U32(ctx, 31, 0x133C68u);
    ctx->pc = 0x133C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C60u;
    // 0x133c64: 0x24a5ee38  addiu       $a1, $a1, -0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x133C60u, 0x133C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C68u;
label_133c68:
    // 0x133c68: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x133C68u;
    {
        const bool branch_taken_0x133c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c68) {
            ctx->pc = 0x133D78u;
            return;
        }
    }
    ctx->pc = 0x133C70u;
    // 0x133c70: 0x8f838538  lw          $v1, -0x7AC8($gp)
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x133c74: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x133c74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x133c78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x133c7c: 0x24c6ee40  addiu       $a2, $a2, -0x11C0
    ctx->pc = 0x133c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962752));
    // 0x133c80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x133C80u;
    {
        const bool branch_taken_0x133c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C80u;
        // 0x133c84: 0x24a5ee48  addiu       $a1, $a1, -0x11B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c80) {
            ctx->pc = 0x133C98u;
            return;
        }
    }
    ctx->pc = 0x133C88u;
    // 0x133c88: 0xc080702  jal         func_201C08
    ctx->pc = 0x133C88u;
    SET_GPR_U32(ctx, 31, 0x133C90u);
    ctx->pc = 0x133C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C88u;
    // 0x133c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133C88u, 0x133C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C90u;
label_133c90:
    // 0x133c90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x133C90u;
    {
        const bool branch_taken_0x133c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C90u;
        // 0x133c94: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c90) {
            ctx->pc = 0x133CA8u;
            return;
        }
    }
    ctx->pc = 0x133C98u;
}
