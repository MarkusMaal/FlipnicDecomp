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

// Function: entry_001fcf80
// Address: 0x1fcf80 - 0x1fcfc8
void entry_001fcf80_0x1fcf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcf80_0x1fcf80");
#endif

    switch (ctx->pc) {
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfc0u: goto label_1fcfc0;
        default: break;
    }

    ctx->pc = 0x1fcf80u;

    // 0x1fcf80: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCF80u;
    {
        const bool branch_taken_0x1fcf80 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1fcf80) {
            ctx->pc = 0x1FCF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF80u;
            // 0x1fcf84: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFECu;
            return;
        }
    }
    ctx->pc = 0x1FCF88u;
    // 0x1fcf88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1fcf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcf8c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1fcf8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fcf90: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FCF90u;
    {
        const bool branch_taken_0x1fcf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf90) {
            ctx->pc = 0x1FCF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF90u;
            // 0x1fcf94: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFECu;
            return;
        }
    }
    ctx->pc = 0x1FCF98u;
    // 0x1fcf98: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FCF98u;
    {
        const bool branch_taken_0x1fcf98 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1FCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF98u;
        // 0x1fcf9c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf98) {
            ctx->pc = 0x1FCFC8u;
            return;
        }
    }
    ctx->pc = 0x1FCFA0u;
    // 0x1fcfa0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcfa4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1fcfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fcfa8: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FCFA8u;
    SET_GPR_U32(ctx, 31, 0x1FCFB0u);
    ctx->pc = 0x1FCFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFA8u;
    // 0x1fcfac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FCFA8u, 0x1FCFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFB0u;
label_1fcfb0:
    // 0x1fcfb0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1fcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1fcfb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcfb8: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FCFB8u;
    SET_GPR_U32(ctx, 31, 0x1FCFC0u);
    ctx->pc = 0x1FCFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFB8u;
    // 0x1fcfbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FCFB8u, 0x1FCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFC0u;
label_1fcfc0:
    // 0x1fcfc0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCFC0u;
    {
        const bool branch_taken_0x1fcfc0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFC0u;
        // 0x1fcfc4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfc0) {
            ctx->pc = 0x1FCFD8u;
            return;
        }
    }
    ctx->pc = 0x1FCFC8u;
}
