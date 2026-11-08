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

// Function: entry_001d4bf0
// Address: 0x1d4bf0 - 0x1d4c2c
void entry_001d4bf0_0x1d4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4bf0_0x1d4bf0");
#endif

    switch (ctx->pc) {
        case 0x1d4c28u: goto label_1d4c28;
        default: break;
    }

    ctx->pc = 0x1d4bf0u;

label_1d4bf0:
    // 0x1d4bf0: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x1d4bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_1d4bf4:
    // 0x1d4bf4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1d4bf8:
    if (ctx->pc == 0x1D4BF8u) {
        ctx->pc = 0x1D4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF4u;
        // 0x1d4bf8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BFCu;
        goto label_1d4bfc;
    }
    ctx->pc = 0x1D4BF4u;
    {
        const bool branch_taken_0x1d4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF4u;
        // 0x1d4bf8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bf4) {
            ctx->pc = 0x1D4BC8u;
            return;
        }
    }
    ctx->pc = 0x1D4BFCu;
label_1d4bfc:
    // 0x1d4bfc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4c00:
    // 0x1d4c00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d4c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1d4c04:
    // 0x1d4c04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d4c08:
    if (ctx->pc == 0x1D4C08u) {
        ctx->pc = 0x1D4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C04u;
        // 0x1d4c08: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C0Cu;
        goto label_1d4c0c;
    }
    ctx->pc = 0x1D4C04u;
    {
        const bool branch_taken_0x1d4c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C04u;
        // 0x1d4c08: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c04) {
            ctx->pc = 0x1D4C2Cu;
            return;
        }
    }
    ctx->pc = 0x1D4C0Cu;
label_1d4c0c:
    // 0x1d4c0c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1d4c10:
    // 0x1d4c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c14:
    // 0x1d4c14: 0x8c620540  lw          $v0, 0x540($v1)
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1344)));
label_1d4c18:
    // 0x1d4c18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d4c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4c1c:
    // 0x1d4c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c20:
    // 0x1d4c20: 0x40f809  jalr        $v0
label_1d4c24:
    if (ctx->pc == 0x1D4C24u) {
        ctx->pc = 0x1D4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C20u;
        // 0x1d4c24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C28u;
        goto label_1d4c28;
    }
    ctx->pc = 0x1D4C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4C28u);
        ctx->pc = 0x1D4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C20u;
        // 0x1d4c24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C20u, 0x1D4C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4C28u;
label_1d4c28:
    // 0x1d4c28: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d4c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d4c2cu;
}
