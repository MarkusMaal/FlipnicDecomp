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

// Function: entry_0020086c
// Address: 0x20086c - 0x2008b4
void entry_0020086c_0x20086c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020086c_0x20086c");
#endif

    switch (ctx->pc) {
        case 0x200884u: goto label_200884;
        default: break;
    }

    ctx->pc = 0x20086cu;

    // 0x20086c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x20086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x200870: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x200870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x200874: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x200874u;
    {
        const bool branch_taken_0x200874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200874u;
        // 0x200878: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200874) {
            ctx->pc = 0x2008DCu;
            return;
        }
    }
    ctx->pc = 0x20087Cu;
    // 0x20087c: 0xc07ff90  jal         func_1FFE40
    ctx->pc = 0x20087Cu;
    SET_GPR_U32(ctx, 31, 0x200884u);
    ctx->pc = 0x200880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20087Cu;
    // 0x200880: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE40u, 0x20087Cu, 0x200884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200884u;
label_200884:
    // 0x200884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200888: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x200888u;
    {
        const bool branch_taken_0x200888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200888u;
        // 0x20088c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200888) {
            ctx->pc = 0x2008B4u;
            return;
        }
    }
    ctx->pc = 0x200890u;
    // 0x200890: 0x52023  negu        $a0, $a1
    ctx->pc = 0x200890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x200894: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x200894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200898: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x200898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20089c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20089cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2008a0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2008a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2008a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2008a8: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2008a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2008ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2008ACu;
    {
        const bool branch_taken_0x2008ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008ACu;
        // 0x2008b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008ac) {
            ctx->pc = 0x2008BCu;
            return;
        }
    }
    ctx->pc = 0x2008B4u;
}
