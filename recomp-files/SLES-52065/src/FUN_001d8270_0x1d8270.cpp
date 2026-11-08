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

// Function: FUN_001d8270
// Address: 0x1d8270 - 0x1d8314
void FUN_001d8270_0x1d8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8270_0x1d8270");
#endif

    switch (ctx->pc) {
        case 0x1d82a8u: goto label_1d82a8;
        case 0x1d82c0u: goto label_1d82c0;
        case 0x1d82ccu: goto label_1d82cc;
        case 0x1d82f4u: goto label_1d82f4;
        default: break;
    }

    ctx->pc = 0x1d8270u;

    // 0x1d8270: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d8270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d8274: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8278: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d8278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d827c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d827cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d8280: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d8280u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d8284: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d8284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8288: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d8288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d828c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d8290: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d8294: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8298: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1d8298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d829c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d82a0: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D82A0u;
    SET_GPR_U32(ctx, 31, 0x1D82A8u);
    ctx->pc = 0x1D82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82A0u;
    // 0x1d82a4: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D82A0u, 0x1D82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82A8u;
label_1d82a8:
    // 0x1d82a8: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1d82a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d82ac: 0x6200013  bltz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D82ACu;
    {
        const bool branch_taken_0x1d82ac = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1D82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82ACu;
        // 0x1d82b0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82ac) {
            ctx->pc = 0x1D82FCu;
            goto label_1d82fc;
        }
    }
    ctx->pc = 0x1D82B4u;
    // 0x1d82b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d82b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d82b8: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x1d82b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d82bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d82c0:
    // 0x1d82c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d82c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82c4: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1D82C4u;
    SET_GPR_U32(ctx, 31, 0x1D82CCu);
    ctx->pc = 0x1D82C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82C4u;
    // 0x1d82c8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1D82C4u, 0x1D82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82CCu;
label_1d82cc:
    // 0x1d82cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d82d0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1d82d4: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1d82d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d82d8: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1d82dc: 0x522804  sllv        $a1, $s2, $v0
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d82e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D82E0u;
    {
        const bool branch_taken_0x1d82e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E0u;
        // 0x1d82e4: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82e0) {
            ctx->pc = 0x1D82ECu;
            goto label_1d82ec;
        }
    }
    ctx->pc = 0x1D82E8u;
    // 0x1d82e8: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x1d82e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
label_1d82ec:
    // 0x1d82ec: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D82ECu;
    SET_GPR_U32(ctx, 31, 0x1D82F4u);
    ctx->pc = 0x1D82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82ECu;
    // 0x1d82f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D82ECu, 0x1D82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82F4u;
label_1d82f4:
    // 0x1d82f4: 0x623fff2  bgezl       $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D82F4u;
    {
        const bool branch_taken_0x1d82f4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d82f4) {
            ctx->pc = 0x1D82F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D82F4u;
            // 0x1d82f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D82C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d82c0;
        }
    }
    ctx->pc = 0x1D82FCu;
label_1d82fc:
    // 0x1d82fc: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d82fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d8300: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d8300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d8304: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d8304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d8308: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d8308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d830c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D830Cu;
        // 0x1d8310: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8314u;
}
