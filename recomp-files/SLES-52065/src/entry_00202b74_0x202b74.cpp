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

// Function: entry_00202b74
// Address: 0x202b74 - 0x202bc4
void entry_00202b74_0x202b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202b74_0x202b74");
#endif

    switch (ctx->pc) {
        case 0x202b98u: goto label_202b98;
        case 0x202ba4u: goto label_202ba4;
        case 0x202bb4u: goto label_202bb4;
        default: break;
    }

    ctx->pc = 0x202b74u;

    // 0x202b74: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x202b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x202b78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x202b78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x202b7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x202b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x202b80: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x202B80u;
    {
        const bool branch_taken_0x202b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B80u;
        // 0x202b84: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b80) {
            ctx->pc = 0x2030B4u;
            return;
        }
    }
    ctx->pc = 0x202B88u;
    // 0x202b88: 0x1680ffb7  bnez        $s4, . + 4 + (-0x49 << 2)
    ctx->pc = 0x202B88u;
    {
        const bool branch_taken_0x202b88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x202b88) {
            ctx->pc = 0x202A68u;
            return;
        }
    }
    ctx->pc = 0x202B90u;
    // 0x202b90: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202B90u;
    SET_GPR_U32(ctx, 31, 0x202B98u);
    ctx->pc = 0x202B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B90u;
    // 0x202b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202B90u, 0x202B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B98u;
label_202b98:
    // 0x202b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b9c: 0xc082014  jal         func_208050
    ctx->pc = 0x202B9Cu;
    SET_GPR_U32(ctx, 31, 0x202BA4u);
    ctx->pc = 0x202BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B9Cu;
    // 0x202ba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202B9Cu, 0x202BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BA4u;
label_202ba4:
    // 0x202ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bac: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202BACu;
    SET_GPR_U32(ctx, 31, 0x202BB4u);
    ctx->pc = 0x202BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BACu;
    // 0x202bb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202BACu, 0x202BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BB4u;
label_202bb4:
    // 0x202bb4: 0x1040ffa5  beqz        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x202BB4u;
    {
        const bool branch_taken_0x202bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BB4u;
        // 0x202bb8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bb4) {
            ctx->pc = 0x202A4Cu;
            return;
        }
    }
    ctx->pc = 0x202BBCu;
    // 0x202bbc: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x202BBCu;
    {
        const bool branch_taken_0x202bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202bbc) {
            ctx->pc = 0x2030B4u;
            return;
        }
    }
    ctx->pc = 0x202BC4u;
}
