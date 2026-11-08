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

// Function: FUN_001d46c0
// Address: 0x1d46c0 - 0x1d47f8
void FUN_001d46c0_0x1d46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d46c0_0x1d46c0");
#endif

    switch (ctx->pc) {
        case 0x1d4720u: goto label_1d4720;
        case 0x1d4744u: goto label_1d4744;
        case 0x1d47e8u: goto label_1d47e8;
        default: break;
    }

    ctx->pc = 0x1d46c0u;

    // 0x1d46c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d46c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d46c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d46ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d46d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d46d4: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1d46d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1d46d8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1d46d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d46dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d46e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d46e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d46e4: 0x10680040  beq         $v1, $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D46E4u;
    {
        const bool branch_taken_0x1d46e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1D46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46E4u;
        // 0x1d46e8: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46e4) {
            ctx->pc = 0x1D47E8u;
            goto label_1d47e8;
        }
    }
    ctx->pc = 0x1D46ECu;
    // 0x1d46ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D46ECu;
    {
        const bool branch_taken_0x1d46ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46ECu;
        // 0x1d46f0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46ec) {
            ctx->pc = 0x1D4708u;
            goto label_1d4708;
        }
    }
    ctx->pc = 0x1D46F4u;
    // 0x1d46f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d46f8: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D46F8u;
    {
        const bool branch_taken_0x1d46f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d46f8) {
            ctx->pc = 0x1D46FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D46F8u;
            // 0x1d46fc: 0x8e030228  lw          $v1, 0x228($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4768u;
            goto label_1d4768;
        }
    }
    ctx->pc = 0x1D4700u;
    // 0x1d4700: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1D4700u;
    {
        const bool branch_taken_0x1d4700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4700u;
        // 0x1d4704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4700) {
            ctx->pc = 0x1D47ECu;
            goto label_1d47ec;
        }
    }
    ctx->pc = 0x1D4708u;
label_1d4708:
    // 0x1d4708: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D4708u;
    {
        const bool branch_taken_0x1d4708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4708u;
        // 0x1d470c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4708) {
            ctx->pc = 0x1D4758u;
            goto label_1d4758;
        }
    }
    ctx->pc = 0x1D4710u;
    // 0x1d4710: 0x54620036  bnel        $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D4710u;
    {
        const bool branch_taken_0x1d4710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4710) {
            ctx->pc = 0x1D4714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4710u;
            // 0x1d4714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47ECu;
            goto label_1d47ec;
        }
    }
    ctx->pc = 0x1D4718u;
    // 0x1d4718: 0xc07512c  jal         func_1D44B0
    ctx->pc = 0x1D4718u;
    SET_GPR_U32(ctx, 31, 0x1D4720u);
    ctx->pc = 0x1D44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B0u, 0x1D4718u, 0x1D4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4720u;
label_1d4720:
    // 0x1d4720: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d4720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4724: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d4724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d4728: 0x54600030  bnel        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D4728u;
    {
        const bool branch_taken_0x1d4728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4728) {
            ctx->pc = 0x1D472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4728u;
            // 0x1d472c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47ECu;
            goto label_1d47ec;
        }
    }
    ctx->pc = 0x1D4730u;
    // 0x1d4730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4734: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d473c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D473Cu;
    SET_GPR_U32(ctx, 31, 0x1D4744u);
    ctx->pc = 0x1D4740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D473Cu;
    // 0x1d4740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D473Cu, 0x1D4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4744u;
label_1d4744:
    // 0x1d4744: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4748: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d4748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d474c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1D474Cu;
    {
        const bool branch_taken_0x1d474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D474Cu;
        // 0x1d4750: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d474c) {
            ctx->pc = 0x1D47E8u;
            goto label_1d47e8;
        }
    }
    ctx->pc = 0x1D4754u;
    // 0x1d4754: 0x0  nop
    ctx->pc = 0x1d4754u;
    // NOP
label_1d4758:
    // 0x1d4758: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1d475c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x1d475cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x1d4760: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D4760u;
    {
        const bool branch_taken_0x1d4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4760u;
        // 0x1d4764: 0xae020248  sw          $v0, 0x248($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4760) {
            ctx->pc = 0x1D47E8u;
            goto label_1d47e8;
        }
    }
    ctx->pc = 0x1D4768u;
label_1d4768:
    // 0x1d4768: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1d4768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1d476c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d476cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d4770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4774: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d477c: 0x30c40010  andi        $a0, $a2, 0x10
    ctx->pc = 0x1d477cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x1d4780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4784: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4788: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4788u;
    {
        const bool branch_taken_0x1d4788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4788u;
        // 0x1d478c: 0x8c4300a0  lw          $v1, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4788) {
            ctx->pc = 0x1D47A0u;
            goto label_1d47a0;
        }
    }
    ctx->pc = 0x1D4790u;
    // 0x1d4790: 0x5068000d  beql        $v1, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4790u;
    {
        const bool branch_taken_0x1d4790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1d4790) {
            ctx->pc = 0x1D4794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4790u;
            // 0x1d4794: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47C8u;
            goto label_1d47c8;
        }
    }
    ctx->pc = 0x1D4798u;
    // 0x1d4798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D4798u;
    {
        const bool branch_taken_0x1d4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4798) {
            ctx->pc = 0x1D47C8u;
            goto label_1d47c8;
        }
    }
    ctx->pc = 0x1D47A0u;
label_1d47a0:
    // 0x1d47a0: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x1d47a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1d47a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D47A4u;
    {
        const bool branch_taken_0x1d47a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A4u;
        // 0x1d47a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a4) {
            ctx->pc = 0x1D47C0u;
            goto label_1d47c0;
        }
    }
    ctx->pc = 0x1D47ACu;
    // 0x1d47ac: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D47ACu;
    {
        const bool branch_taken_0x1d47ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d47ac) {
            ctx->pc = 0x1D47B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D47ACu;
            // 0x1d47b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47C8u;
            goto label_1d47c8;
        }
    }
    ctx->pc = 0x1D47B4u;
    // 0x1d47b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47B4u;
    {
        const bool branch_taken_0x1d47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47b4) {
            ctx->pc = 0x1D47C8u;
            goto label_1d47c8;
        }
    }
    ctx->pc = 0x1D47BCu;
    // 0x1d47bc: 0x0  nop
    ctx->pc = 0x1d47bcu;
    // NOP
label_1d47c0:
    // 0x1d47c0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1d47c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d47c4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x1d47c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d47c8:
    // 0x1d47c8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D47C8u;
    {
        const bool branch_taken_0x1d47c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C8u;
        // 0x1d47cc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47c8) {
            ctx->pc = 0x1D47E8u;
            goto label_1d47e8;
        }
    }
    ctx->pc = 0x1D47D0u;
    // 0x1d47d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d47d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d47d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d47d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D47D8u;
    {
        const bool branch_taken_0x1d47d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D8u;
        // 0x1d47dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d8) {
            ctx->pc = 0x1D47E8u;
            goto label_1d47e8;
        }
    }
    ctx->pc = 0x1D47E0u;
    // 0x1d47e0: 0xc0750f2  jal         func_1D43C8
    ctx->pc = 0x1D47E0u;
    SET_GPR_U32(ctx, 31, 0x1D47E8u);
    ctx->pc = 0x1D47E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E0u;
    // 0x1d47e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43C8u, 0x1D47E0u, 0x1D47E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47E8u;
label_1d47e8:
    // 0x1d47e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d47ec:
    // 0x1d47ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d47ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47F0u;
        // 0x1d47f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47F8u;
}
