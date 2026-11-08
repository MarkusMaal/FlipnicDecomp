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

// Function: entry_001a1bd0
// Address: 0x1a1bd0 - 0x1a1c04
void entry_001a1bd0_0x1a1bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1bd0_0x1a1bd0");
#endif

    switch (ctx->pc) {
        case 0x1a1be0u: goto label_1a1be0;
        case 0x1a1bfcu: goto label_1a1bfc;
        default: break;
    }

    ctx->pc = 0x1a1bd0u;

label_1a1bd0:
    // 0x1a1bd0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a1bd4:
    // 0x1a1bd4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a1bd8:
    // 0x1a1bd8: 0xc06bd9c  jal         func_1AF670
label_1a1bdc:
    if (ctx->pc == 0x1A1BDCu) {
        ctx->pc = 0x1A1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BD8u;
        // 0x1a1bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BE0u;
        goto label_1a1be0;
    }
    ctx->pc = 0x1A1BD8u;
    SET_GPR_U32(ctx, 31, 0x1A1BE0u);
    ctx->pc = 0x1A1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BD8u;
    // 0x1a1bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A1BD8u, 0x1A1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BE0u;
label_1a1be0:
    // 0x1a1be0: 0x1280017a  beqz        $s4, . + 4 + (0x17A << 2)
label_1a1be4:
    if (ctx->pc == 0x1A1BE4u) {
        ctx->pc = 0x1A1BE8u;
        goto label_1a1be8;
    }
    ctx->pc = 0x1A1BE0u;
    {
        const bool branch_taken_0x1a1be0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1be0) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
    ctx->pc = 0x1A1BE8u;
label_1a1be8:
    // 0x1a1be8: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x1a1be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_1a1bec:
    // 0x1a1bec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a1bf0:
    // 0x1a1bf0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a1bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a1bf4:
    // 0x1a1bf4: 0x320f809  jalr        $t9
label_1a1bf8:
    if (ctx->pc == 0x1A1BF8u) {
        ctx->pc = 0x1A1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BF4u;
        // 0x1a1bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BFCu;
        goto label_1a1bfc;
    }
    ctx->pc = 0x1A1BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1BFCu);
        ctx->pc = 0x1A1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BF4u;
        // 0x1a1bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1BF4u, 0x1A1BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1BFCu;
label_1a1bfc:
    // 0x1a1bfc: 0x10000174  b           . + 4 + (0x174 << 2)
label_1a1c00:
    if (ctx->pc == 0x1A1C00u) {
        ctx->pc = 0x1A1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BFCu;
        // 0x1a1c00: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C04u;
        goto label_fallthrough_0x1a1bfc;
    }
    ctx->pc = 0x1A1BFCu;
    {
        const bool branch_taken_0x1a1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BFCu;
        // 0x1a1c00: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bfc) {
            ctx->pc = 0x1A21D0u;
            return;
        }
    }
label_fallthrough_0x1a1bfc:
    ctx->pc = 0x1A1C04u;
}
