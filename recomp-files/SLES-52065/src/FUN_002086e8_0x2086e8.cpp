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

// Function: FUN_002086e8
// Address: 0x2086e8 - 0x20877c
void FUN_002086e8_0x2086e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002086e8_0x2086e8");
#endif

    switch (ctx->pc) {
        case 0x208700u: goto label_208700;
        case 0x208718u: goto label_208718;
        default: break;
    }

    ctx->pc = 0x2086e8u;

    // 0x2086e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2086e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2086ec: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2086ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2086f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2086f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2086f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2086f8: 0xc081f46  jal         func_207D18
    ctx->pc = 0x2086F8u;
    SET_GPR_U32(ctx, 31, 0x208700u);
    ctx->pc = 0x2086FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086F8u;
    // 0x2086fc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x2086F8u, 0x208700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208700u;
label_208700:
    // 0x208700: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x208700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208704: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x208704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x208708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208708u;
    {
        const bool branch_taken_0x208708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208708u;
        // 0x20870c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208708) {
            ctx->pc = 0x208718u;
            goto label_208718;
        }
    }
    ctx->pc = 0x208710u;
    // 0x208710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208710u;
    {
        const bool branch_taken_0x208710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208710u;
        // 0x208714: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208710) {
            ctx->pc = 0x208720u;
            goto label_208720;
        }
    }
    ctx->pc = 0x208718u;
label_208718:
    // 0x208718: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x208718u;
    {
        const bool branch_taken_0x208718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208718u;
        // 0x20871c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208718) {
            ctx->pc = 0x208770u;
            goto label_208770;
        }
    }
    ctx->pc = 0x208720u;
label_208720:
    // 0x208720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208720u;
    {
        const bool branch_taken_0x208720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208720u;
        // 0x208724: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208720) {
            ctx->pc = 0x208738u;
            goto label_208738;
        }
    }
    ctx->pc = 0x208728u;
    // 0x208728: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x208728u;
    {
        const bool branch_taken_0x208728 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208728u;
        // 0x20872c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208728) {
            ctx->pc = 0x208718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208718;
        }
    }
    ctx->pc = 0x208730u;
    // 0x208730: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208730u;
    {
        const bool branch_taken_0x208730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208730u;
        // 0x208734: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208730) {
            ctx->pc = 0x208750u;
            goto label_208750;
        }
    }
    ctx->pc = 0x208738u;
label_208738:
    // 0x208738: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x208738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20873c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x20873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x208740: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x208740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x208744: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x208744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x208748: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x208748u;
    {
        const bool branch_taken_0x208748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208748u;
        // 0x20874c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208748) {
            ctx->pc = 0x208770u;
            goto label_208770;
        }
    }
    ctx->pc = 0x208750u;
label_208750:
    // 0x208750: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x208750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208754: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x208754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208758: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x208758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x20875c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x208760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x208764: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x208764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x208768: 0x21823  negu        $v1, $v0
    ctx->pc = 0x208768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x20876c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20876cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_208770:
    // 0x208770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x208770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208774: 0x3e00008  jr          $ra
    ctx->pc = 0x208774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208774u;
        // 0x208778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20877Cu;
}
