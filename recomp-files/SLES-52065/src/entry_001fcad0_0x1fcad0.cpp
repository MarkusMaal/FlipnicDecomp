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

// Function: entry_001fcad0
// Address: 0x1fcad0 - 0x1fcb40
void entry_001fcad0_0x1fcad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcad0_0x1fcad0");
#endif

    switch (ctx->pc) {
        case 0x1fcb24u: goto label_1fcb24;
        case 0x1fcb30u: goto label_1fcb30;
        default: break;
    }

    ctx->pc = 0x1fcad0u;

    // 0x1fcad0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcad4: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1FCAD4u;
    {
        const bool branch_taken_0x1fcad4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcad4) {
            ctx->pc = 0x1FCC50u;
            return;
        }
    }
    ctx->pc = 0x1FCADCu;
    // 0x1fcadc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1FCADCu;
    {
        const bool branch_taken_0x1fcadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCADCu;
        // 0x1fcae0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcadc) {
            ctx->pc = 0x1FCC50u;
            return;
        }
    }
    ctx->pc = 0x1FCAE4u;
    // 0x1fcae4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1fcae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1fcae8: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x1fcaec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fcaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcaf0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1fcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fcaf4: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FCAF4u;
    {
        const bool branch_taken_0x1fcaf4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF4u;
        // 0x1fcaf8: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaf4) {
            ctx->pc = 0x1FCB40u;
            return;
        }
    }
    ctx->pc = 0x1FCAFCu;
    // 0x1fcafc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcb00: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCB00u;
    {
        const bool branch_taken_0x1fcb00 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1FCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB00u;
        // 0x1fcb04: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb00) {
            ctx->pc = 0x1FCB48u;
            return;
        }
    }
    ctx->pc = 0x1FCB08u;
    // 0x1fcb08: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1fcb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1fcb0c: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x1FCB0Cu;
    {
        const bool branch_taken_0x1fcb0c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb0c) {
            ctx->pc = 0x1FCFC8u;
            return;
        }
    }
    ctx->pc = 0x1FCB14u;
    // 0x1fcb14: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1fcb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1fcb18: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fcb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fcb1c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCB1Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB24u);
    ctx->pc = 0x1FCB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB1Cu;
    // 0x1fcb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCB1Cu, 0x1FCB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB24u;
label_1fcb24:
    // 0x1fcb24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fcb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb28: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCB28u;
    SET_GPR_U32(ctx, 31, 0x1FCB30u);
    ctx->pc = 0x1FCB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB28u;
    // 0x1fcb2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCB28u, 0x1FCB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB30u;
label_1fcb30:
    // 0x1fcb30: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x1FCB30u;
    {
        const bool branch_taken_0x1fcb30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB30u;
        // 0x1fcb34: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb30) {
            ctx->pc = 0x1FCFC8u;
            return;
        }
    }
    ctx->pc = 0x1FCB38u;
    // 0x1fcb38: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x1FCB38u;
    {
        const bool branch_taken_0x1fcb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB38u;
        // 0x1fcb3c: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb38) {
            ctx->pc = 0x1FCFDCu;
            return;
        }
    }
    ctx->pc = 0x1FCB40u;
}
