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

// Function: FUN_001d8318
// Address: 0x1d8318 - 0x1d83ac
void FUN_001d8318_0x1d8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8318_0x1d8318");
#endif

    switch (ctx->pc) {
        case 0x1d8350u: goto label_1d8350;
        case 0x1d8368u: goto label_1d8368;
        case 0x1d838cu: goto label_1d838c;
        default: break;
    }

    ctx->pc = 0x1d8318u;

    // 0x1d8318: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d831c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8320: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d8320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d8324: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d8324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d8328: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d832c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8330: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d8330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d8334: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d8338: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d8338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d833c: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x1d833cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8340: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1d8340u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8344: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d8344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8348: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D8348u;
    SET_GPR_U32(ctx, 31, 0x1D8350u);
    ctx->pc = 0x1D834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8348u;
    // 0x1d834c: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D8348u, 0x1D8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8350u;
label_1d8350:
    // 0x1d8350: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d8350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8354: 0x600000f  bltz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D8354u;
    {
        const bool branch_taken_0x1d8354 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8354u;
        // 0x1d8358: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8354) {
            ctx->pc = 0x1D8394u;
            goto label_1d8394;
        }
    }
    ctx->pc = 0x1D835Cu;
    // 0x1d835c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d835cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8360: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d8360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d8364: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d8364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d8368:
    // 0x1d8368: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d836c: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1d836cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d8370: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x1d8370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1d8374: 0x522804  sllv        $a1, $s2, $v0
    ctx->pc = 0x1d8374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d8378: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8378u;
    {
        const bool branch_taken_0x1d8378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8378u;
        // 0x1d837c: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8378) {
            ctx->pc = 0x1D8384u;
            goto label_1d8384;
        }
    }
    ctx->pc = 0x1D8380u;
    // 0x1d8380: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x1d8380u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
label_1d8384:
    // 0x1d8384: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D8384u;
    SET_GPR_U32(ctx, 31, 0x1D838Cu);
    ctx->pc = 0x1D8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8384u;
    // 0x1d8388: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D8384u, 0x1D838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D838Cu;
label_1d838c:
    // 0x1d838c: 0x603fff6  bgezl       $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D838Cu;
    {
        const bool branch_taken_0x1d838c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d838c) {
            ctx->pc = 0x1D8390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D838Cu;
            // 0x1d8390: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8368;
        }
    }
    ctx->pc = 0x1D8394u;
label_1d8394:
    // 0x1d8394: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d8394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d8398: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d8398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d839c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d839cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d83a0: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d83a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d83a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D83A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83A4u;
        // 0x1d83a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D83ACu;
}
