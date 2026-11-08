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

// Function: FUN_001b4210
// Address: 0x1b4210 - 0x1b434c
void FUN_001b4210_0x1b4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4210_0x1b4210");
#endif

    switch (ctx->pc) {
        case 0x1b4290u: goto label_1b4290;
        case 0x1b42c4u: goto label_1b42c4;
        case 0x1b42d8u: goto label_1b42d8;
        default: break;
    }

    ctx->pc = 0x1b4210u;

    // 0x1b4210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4214: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1b4214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1b4218: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b421c: 0x2442b8e8  addiu       $v0, $v0, -0x4718
    ctx->pc = 0x1b421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949096));
    // 0x1b4220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b422c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1b422cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1b4230: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b4230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4234: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1b4234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1b4238: 0x3443544f  ori         $v1, $v0, 0x544F
    ctx->pc = 0x1b4238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1b423c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b423cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b4240: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4244: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x1b4244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x1b4248: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1b4248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1b424c: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x1b424cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x1b4250: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1b4250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1b4254: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1b4254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1b4258: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1b4258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1b425c: 0x8f82871c  lw          $v0, -0x78E4($gp)
    ctx->pc = 0x1b425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936348)));
    // 0x1b4260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4264: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4264u;
    {
        const bool branch_taken_0x1b4264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4264u;
        // 0x1b4268: 0xaf82871c  sw          $v0, -0x78E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4264) {
            ctx->pc = 0x1B4278u;
            goto label_1b4278;
        }
    }
    ctx->pc = 0x1B426Cu;
    // 0x1b426c: 0x8f82871c  lw          $v0, -0x78E4($gp)
    ctx->pc = 0x1b426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936348)));
    // 0x1b4270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4274: 0xaf82871c  sw          $v0, -0x78E4($gp)
    ctx->pc = 0x1b4274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
label_1b4278:
    // 0x1b4278: 0x8f82871c  lw          $v0, -0x78E4($gp)
    ctx->pc = 0x1b4278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936348)));
    // 0x1b427c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b427cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4280: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b4280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b4284: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1b4284u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1b4288: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4288u;
    {
        const bool branch_taken_0x1b4288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4288u;
        // 0x1b428c: 0xfe200010  sd          $zero, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4288) {
            ctx->pc = 0x1B429Cu;
            goto label_1b429c;
        }
    }
    ctx->pc = 0x1B4290u;
label_1b4290:
    // 0x1b4290: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1b4290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b4294: 0xa0440010  sb          $a0, 0x10($v0)
    ctx->pc = 0x1b4294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b4298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b429c:
    // 0x1b429c: 0x0  nop
    ctx->pc = 0x1b429cu;
    // NOP
    // 0x1b42a0: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x1b42a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b42a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B42A4u;
    {
        const bool branch_taken_0x1b42a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42A4u;
        // 0x1b42a8: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42a4) {
            ctx->pc = 0x1B42B8u;
            goto label_1b42b8;
        }
    }
    ctx->pc = 0x1B42ACu;
    // 0x1b42ac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1b42acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b42b0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B42B0u;
    {
        const bool branch_taken_0x1b42b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42b0) {
            ctx->pc = 0x1B4290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4290;
        }
    }
    ctx->pc = 0x1B42B8u;
label_1b42b8:
    // 0x1b42b8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1b42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b42bc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1B42BCu;
    SET_GPR_U32(ctx, 31, 0x1B42C4u);
    ctx->pc = 0x1B42C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42BCu;
    // 0x1b42c0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1B42BCu, 0x1B42C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42C4u;
label_1b42c4:
    // 0x1b42c4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1b42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1b42c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b42c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42cc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1b42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1b42d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D0u;
        // 0x1b42d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42ECu;
            goto label_1b42ec;
        }
    }
    ctx->pc = 0x1B42D8u;
label_1b42d8:
    // 0x1b42d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b42dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b42e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b42e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b42e8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b42ec:
    // 0x1b42ec: 0x0  nop
    ctx->pc = 0x1b42ecu;
    // NOP
    // 0x1b42f0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1b42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b42f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b42f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b42f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B42F8u;
    {
        const bool branch_taken_0x1b42f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42f8) {
            ctx->pc = 0x1B42D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b42d8;
        }
    }
    ctx->pc = 0x1B4300u;
    // 0x1b4300: 0x8f828718  lw          $v0, -0x78E8($gp)
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x1b4304: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4304u;
    {
        const bool branch_taken_0x1b4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4304) {
            ctx->pc = 0x1B4320u;
            goto label_1b4320;
        }
    }
    ctx->pc = 0x1B430Cu;
    // 0x1b430c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1b430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b4310: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b4310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b4314: 0x8f828718  lw          $v0, -0x78E8($gp)
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x1b4318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4318u;
    {
        const bool branch_taken_0x1b4318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4318u;
        // 0x1b431c: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4318) {
            ctx->pc = 0x1B4324u;
            goto label_1b4324;
        }
    }
    ctx->pc = 0x1B4320u;
label_1b4320:
    // 0x1b4320: 0xae310008  sw          $s1, 0x8($s1)
    ctx->pc = 0x1b4320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 17));
label_1b4324:
    // 0x1b4324: 0xaf918718  sw          $s1, -0x78E8($gp)
    ctx->pc = 0x1b4324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U32(ctx, 17));
    // 0x1b4328: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b4328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b432c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b432cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b4330: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b4334: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1b4334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1b4338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b433c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b433cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4344: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4344u;
        // 0x1b4348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B434Cu;
}
