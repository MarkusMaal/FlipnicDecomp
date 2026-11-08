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

// Function: FUN_001d8488
// Address: 0x1d8488 - 0x1d8538
void FUN_001d8488_0x1d8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8488_0x1d8488");
#endif

    switch (ctx->pc) {
        case 0x1d84f0u: goto label_1d84f0;
        case 0x1d8508u: goto label_1d8508;
        case 0x1d8518u: goto label_1d8518;
        default: break;
    }

    ctx->pc = 0x1d8488u;

    // 0x1d8488: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d8488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d848c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8490: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d8490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d8494: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d8494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d8498: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d8498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d849c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84a0: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d84a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d84a4: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d84a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d84a8: 0x8c43054c  lw          $v1, 0x54C($v0)
    ctx->pc = 0x1d84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d84ac: 0x8ca80550  lw          $t0, 0x550($a1)
    ctx->pc = 0x1d84acu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x370550u));
    // 0x1d84b0: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1d84b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d84b4: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1d84b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d84b8: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x1d84b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1d84bc: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x1d84bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d84c0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d84c4: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x1d84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1d84c8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d84cc: 0xe59021  addu        $s2, $a3, $a1
    ctx->pc = 0x1d84ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d84d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d84d4: 0x1291c3  sra         $s2, $s2, 7
    ctx->pc = 0x1d84d4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 7));
    // 0x1d84d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d84dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d84e0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1d84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1d84e4: 0xac5202d8  sw          $s2, 0x2D8($v0)
    ctx->pc = 0x1d84e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 728), GPR_U32(ctx, 18));
    // 0x1d84e8: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D84E8u;
    SET_GPR_U32(ctx, 31, 0x1D84F0u);
    ctx->pc = 0x1D84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84E8u;
    // 0x1d84ec: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D84E8u, 0x1D84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84F0u;
label_1d84f0:
    // 0x1d84f0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d84f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d84f4: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D84F4u;
    {
        const bool branch_taken_0x1d84f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84F4u;
        // 0x1d84f8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84f4) {
            ctx->pc = 0x1D8520u;
            goto label_1d8520;
        }
    }
    ctx->pc = 0x1D84FCu;
    // 0x1d84fc: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d84fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d8500: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d8500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8504: 0x0  nop
    ctx->pc = 0x1d8504u;
    // NOP
label_1d8508:
    // 0x1d8508: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d8508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d850c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d850cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d8510: 0xc077492  jal         func_1DD248
    ctx->pc = 0x1D8510u;
    SET_GPR_U32(ctx, 31, 0x1D8518u);
    ctx->pc = 0x1D8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8510u;
    // 0x1d8514: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD248u, 0x1D8510u, 0x1D8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8518u;
label_1d8518:
    // 0x1d8518: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8518u;
    {
        const bool branch_taken_0x1d8518 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d8518) {
            ctx->pc = 0x1D851Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8518u;
            // 0x1d851c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8508;
        }
    }
    ctx->pc = 0x1D8520u;
label_1d8520:
    // 0x1d8520: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d8520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d8524: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d8524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d8528: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d8528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d852c: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d8530: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8530u;
        // 0x1d8534: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8538u;
}
