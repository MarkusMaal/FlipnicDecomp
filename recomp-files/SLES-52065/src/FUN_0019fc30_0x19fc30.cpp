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

// Function: FUN_0019fc30
// Address: 0x19fc30 - 0x19fd9c
void FUN_0019fc30_0x19fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019fc30_0x19fc30");
#endif

    switch (ctx->pc) {
        case 0x19fce4u: goto label_19fce4;
        case 0x19fd40u: goto label_19fd40;
        default: break;
    }

    ctx->pc = 0x19fc30u;

    // 0x19fc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fc34: 0x2ca10012  sltiu       $at, $a1, 0x12
    ctx->pc = 0x19fc34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x19fc38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19fc3c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x19FC3Cu;
    {
        const bool branch_taken_0x19fc3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC3Cu;
        // 0x19fc40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc3c) {
            ctx->pc = 0x19FD80u;
            goto label_19fd80;
        }
    }
    ctx->pc = 0x19FC44u;
    // 0x19fc44: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19fc48: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x19fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19fc4c: 0x246302f0  addiu       $v1, $v1, 0x2F0
    ctx->pc = 0x19fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x19fc50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fc54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fc58: 0x400008  jr          $v0
    ctx->pc = 0x19FC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC60u: goto label_19fc60;
            case 0x19FC68u: goto label_19fc68;
            case 0x19FC70u: goto label_19fc70;
            case 0x19FC78u: goto label_19fc78;
            case 0x19FC80u: goto label_19fc80;
            case 0x19FC8Cu: goto label_19fc8c;
            case 0x19FC98u: goto label_19fc98;
            case 0x19FCA8u: goto label_19fca8;
            case 0x19FCB4u: goto label_19fcb4;
            case 0x19FCC0u: goto label_19fcc0;
            case 0x19FCCCu: goto label_19fccc;
            case 0x19FD64u: goto label_19fd64;
            case 0x19FD70u: goto label_19fd70;
            case 0x19FD78u: goto label_19fd78;
            case 0x19FD80u: goto label_19fd80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19FC60u;
label_19fc60:
    // 0x19fc60: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x19FC60u;
    {
        const bool branch_taken_0x19fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0x8c900688  lw          $s0, 0x688($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc60) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC68u;
label_19fc68:
    // 0x19fc68: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x19FC68u;
    {
        const bool branch_taken_0x19fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC68u;
        // 0x19fc6c: 0x8c90068c  lw          $s0, 0x68C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc68) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC70u;
label_19fc70:
    // 0x19fc70: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x19FC70u;
    {
        const bool branch_taken_0x19fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC70u;
        // 0x19fc74: 0x8c900690  lw          $s0, 0x690($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc70) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC78u;
label_19fc78:
    // 0x19fc78: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x19FC78u;
    {
        const bool branch_taken_0x19fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC78u;
        // 0x19fc7c: 0x8c900694  lw          $s0, 0x694($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc78) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC80u;
label_19fc80:
    // 0x19fc80: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fc84: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x19FC84u;
    {
        const bool branch_taken_0x19fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC84u;
        // 0x19fc88: 0x8c5028e4  lw          $s0, 0x28E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc84) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC8Cu;
label_19fc8c:
    // 0x19fc8c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fc90: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x19FC90u;
    {
        const bool branch_taken_0x19fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC90u;
        // 0x19fc94: 0x8c5028f0  lw          $s0, 0x28F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc90) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC98u;
label_19fc98:
    // 0x19fc98: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19fc9c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x19fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19fca0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19FCA0u;
    {
        const bool branch_taken_0x19fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCA0u;
        // 0x19fca4: 0x8c5002dc  lw          $s0, 0x2DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fca0) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FCA8u;
label_19fca8:
    // 0x19fca8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x19FCACu;
    {
        const bool branch_taken_0x19fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCACu;
        // 0x19fcb0: 0x8c5028e8  lw          $s0, 0x28E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcac) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FCB4u;
label_19fcb4:
    // 0x19fcb4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcb8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19FCB8u;
    {
        const bool branch_taken_0x19fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB8u;
        // 0x19fcbc: 0x8c5028dc  lw          $s0, 0x28DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcb8) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FCC0u;
label_19fcc0:
    // 0x19fcc0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19FCC4u;
    {
        const bool branch_taken_0x19fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC4u;
        // 0x19fcc8: 0x9050282b  lbu         $s0, 0x282B($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10283)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcc4) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FCCCu;
label_19fccc:
    // 0x19fccc: 0x8f878714  lw          $a3, -0x78EC($gp)
    ctx->pc = 0x19fcccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcd4: 0x24e510c8  addiu       $a1, $a3, 0x10C8
    ctx->pc = 0x19fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4296));
    // 0x19fcd8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x19fcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fcdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FCDCu;
    {
        const bool branch_taken_0x19fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCDCu;
        // 0x19fce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcdc) {
            ctx->pc = 0x19FCFCu;
            goto label_19fcfc;
        }
    }
    ctx->pc = 0x19FCE4u;
label_19fce4:
    // 0x19fce4: 0x84e32828  lh          $v1, 0x2828($a3)
    ctx->pc = 0x19fce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10280)));
    // 0x19fce8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19fcec: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FCECu;
    {
        const bool branch_taken_0x19fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fcec) {
            ctx->pc = 0x19FD0Cu;
            goto label_19fd0c;
        }
    }
    ctx->pc = 0x19FCF4u;
    // 0x19fcf4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x19fcf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19fcfc:
    // 0x19fcfc: 0x0  nop
    ctx->pc = 0x19fcfcu;
    // NOP
    // 0x19fd00: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x19fd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19fd04: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19FD04u;
    {
        const bool branch_taken_0x19fd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD04u;
        // 0x19fd08: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd04) {
            ctx->pc = 0x19FCE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fce4;
        }
    }
    ctx->pc = 0x19FD0Cu;
label_19fd0c:
    // 0x19fd0c: 0x0  nop
    ctx->pc = 0x19fd0cu;
    // NOP
    // 0x19fd10: 0x1088001d  beq         $a0, $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19FD10u;
    {
        const bool branch_taken_0x19fd10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x19FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD10u;
        // 0x19fd14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd10) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD18u;
    // 0x19fd18: 0x90e2282b  lbu         $v0, 0x282B($a3)
    ctx->pc = 0x19fd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10283)));
    // 0x19fd1c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19FD1Cu;
    {
        const bool branch_taken_0x19fd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD1Cu;
        // 0x19fd20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd1c) {
            ctx->pc = 0x19FD8Cu;
            goto label_19fd8c;
        }
    }
    ctx->pc = 0x19FD24u;
    // 0x19fd24: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x19fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19fd28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fd2c: 0x90631684  lbu         $v1, 0x1684($v1)
    ctx->pc = 0x19fd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5764)));
    // 0x19fd30: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19FD30u;
    {
        const bool branch_taken_0x19fd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19fd30) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD38u;
    // 0x19fd38: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x19FD38u;
    SET_GPR_U32(ctx, 31, 0x19FD40u);
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x19FD38u, 0x19FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD40u;
label_19fd40:
    // 0x19fd40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FD40u;
    {
        const bool branch_taken_0x19fd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD40u;
        // 0x19fd44: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd40) {
            ctx->pc = 0x19FD5Cu;
            goto label_19fd5c;
        }
    }
    ctx->pc = 0x19FD48u;
    // 0x19fd48: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FD48u;
    {
        const bool branch_taken_0x19fd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fd48) {
            ctx->pc = 0x19FD5Cu;
            goto label_19fd5c;
        }
    }
    ctx->pc = 0x19FD50u;
    // 0x19fd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd54: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19FD54u;
    {
        const bool branch_taken_0x19fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19fd54) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD5Cu;
label_19fd5c:
    // 0x19fd5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19FD5Cu;
    {
        const bool branch_taken_0x19fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD5Cu;
        // 0x19fd60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd5c) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD64u;
label_19fd64:
    // 0x19fd64: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fd68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FD68u;
    {
        const bool branch_taken_0x19fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD68u;
        // 0x19fd6c: 0x8c502830  lw          $s0, 0x2830($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd68) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD70u;
label_19fd70:
    // 0x19fd70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19FD70u;
    {
        const bool branch_taken_0x19fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD70u;
        // 0x19fd74: 0x8c900698  lw          $s0, 0x698($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd70) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD78u;
label_19fd78:
    // 0x19fd78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD78u;
    {
        const bool branch_taken_0x19fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD78u;
        // 0x19fd7c: 0x8c9006a0  lw          $s0, 0x6A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd78) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD80u;
label_19fd80:
    // 0x19fd80: 0x8c900320  lw          $s0, 0x320($a0)
    ctx->pc = 0x19fd80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x19fd84: 0x0  nop
    ctx->pc = 0x19fd84u;
    // NOP
label_19fd88:
    // 0x19fd88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19fd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd8c:
    // 0x19fd8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd94: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD94u;
        // 0x19fd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FD9Cu;
}
