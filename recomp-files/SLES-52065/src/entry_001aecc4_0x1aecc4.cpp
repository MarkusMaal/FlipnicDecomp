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

// Function: entry_001aecc4
// Address: 0x1aecc4 - 0x1aed0c
void entry_001aecc4_0x1aecc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aecc4_0x1aecc4");
#endif

    switch (ctx->pc) {
        case 0x1aecccu: goto label_1aeccc;
        case 0x1aece4u: goto label_1aece4;
        default: break;
    }

    ctx->pc = 0x1aecc4u;

    // 0x1aecc4: 0xc062114  jal         func_188450
    ctx->pc = 0x1AECC4u;
    SET_GPR_U32(ctx, 31, 0x1AECCCu);
    ctx->pc = 0x1AECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECC4u;
    // 0x1aecc8: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AECC4u, 0x1AECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECCCu;
label_1aeccc:
    // 0x1aeccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aecd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aecd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aecd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1aecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1aecdc: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1AECDCu;
    SET_GPR_U32(ctx, 31, 0x1AECE4u);
    ctx->pc = 0x1AECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECDCu;
    // 0x1aece0: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AECDCu, 0x1AECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECE4u;
label_1aece4:
    // 0x1aece4: 0x8e8506c8  lw          $a1, 0x6C8($s4)
    ctx->pc = 0x1aece4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
    // 0x1aece8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AECE8u;
    {
        const bool branch_taken_0x1aece8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECE8u;
        // 0x1aecec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aece8) {
            ctx->pc = 0x1AED0Cu;
            return;
        }
    }
    ctx->pc = 0x1AECF0u;
    // 0x1aecf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aecf4: 0x50180a  movz        $v1, $v0, $s0
    ctx->pc = 0x1aecf4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1aecf8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aecfc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1aecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1aed00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1aed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aed04: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1AED04u;
    SET_GPR_U32(ctx, 31, 0x1AED0Cu);
    ctx->pc = 0x1AED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED04u;
    // 0x1aed08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AED04u, 0x1AED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED0Cu;
}
