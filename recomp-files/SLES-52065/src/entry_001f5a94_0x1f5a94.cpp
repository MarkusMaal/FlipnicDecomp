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

// Function: entry_001f5a94
// Address: 0x1f5a94 - 0x1f5b00
void entry_001f5a94_0x1f5a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5a94_0x1f5a94");
#endif

    switch (ctx->pc) {
        case 0x1f5aa8u: goto label_1f5aa8;
        case 0x1f5abcu: goto label_1f5abc;
        case 0x1f5ae4u: goto label_1f5ae4;
        default: break;
    }

    ctx->pc = 0x1f5a94u;

    // 0x1f5a94: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f5a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f5a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a9c: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1f5a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1f5aa0: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F5AA0u;
    SET_GPR_U32(ctx, 31, 0x1F5AA8u);
    ctx->pc = 0x1F5AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AA0u;
    // 0x1f5aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F5AA0u, 0x1F5AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AA8u;
label_1f5aa8:
    // 0x1f5aa8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1f5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f5aac: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1F5AACu;
    {
        const bool branch_taken_0x1f5aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AACu;
        // 0x1f5ab0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5aac) {
            ctx->pc = 0x1F5A70u;
            return;
        }
    }
    ctx->pc = 0x1F5AB4u;
    // 0x1f5ab4: 0xc07dae6  jal         func_1F6B98
    ctx->pc = 0x1F5AB4u;
    SET_GPR_U32(ctx, 31, 0x1F5ABCu);
    ctx->pc = 0x1F6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B98u, 0x1F5AB4u, 0x1F5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5ABCu;
label_1f5abc:
    // 0x1f5abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ac0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5ac4: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x1f5ac4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x1f5ac8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F5AC8u;
    {
        const bool branch_taken_0x1f5ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC8u;
        // 0x1f5acc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ac8) {
            ctx->pc = 0x1F5B08u;
            return;
        }
    }
    ctx->pc = 0x1F5AD0u;
    // 0x1f5ad0: 0x8c43bab4  lw          $v1, -0x454C($v0)
    ctx->pc = 0x1f5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949556)));
    // 0x1f5ad4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5AD4u;
    {
        const bool branch_taken_0x1f5ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AD4u;
        // 0x1f5ad8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ad4) {
            ctx->pc = 0x1F5B00u;
            return;
        }
    }
    ctx->pc = 0x1F5ADCu;
    // 0x1f5adc: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F5ADCu;
    SET_GPR_U32(ctx, 31, 0x1F5AE4u);
    ctx->pc = 0x1F5AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ADCu;
    // 0x1f5ae0: 0x24844550  addiu       $a0, $a0, 0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F5ADCu, 0x1F5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AE4u;
label_1f5ae4:
    // 0x1f5ae4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f5ae8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f5ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5aec: 0x24844578  addiu       $a0, $a0, 0x4578
    ctx->pc = 0x1f5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17784));
    // 0x1f5af0: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x1f5af0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f5af4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5af8: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F5AF8u;
    SET_GPR_U32(ctx, 31, 0x1F5B00u);
    ctx->pc = 0x1F5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AF8u;
    // 0x1f5afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F5AF8u, 0x1F5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B00u;
}
