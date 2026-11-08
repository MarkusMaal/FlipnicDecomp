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

// Function: initializeAfterRanksSaveData
// Address: 0x190520 - 0x190820
void initializeAfterRanksSaveData_0x190520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initializeAfterRanksSaveData_0x190520");
#endif

    switch (ctx->pc) {
        case 0x190544u: goto label_190544;
        case 0x19054cu: goto label_19054c;
        case 0x190590u: goto label_190590;
        case 0x1905f0u: goto label_1905f0;
        case 0x19069cu: goto label_19069c;
        case 0x1906d8u: goto label_1906d8;
        case 0x190724u: goto label_190724;
        case 0x1907b8u: goto label_1907b8;
        case 0x1907ccu: goto label_1907cc;
        default: break;
    }

    ctx->pc = 0x190520u;

    // 0x190520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19052c: 0x240616b4  addiu       $a2, $zero, 0x16B4
    ctx->pc = 0x19052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5812));
    // 0x190530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190534: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x190538: 0x245010c8  addiu       $s0, $v0, 0x10C8
    ctx->pc = 0x190538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x19053c: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x19053Cu;
    SET_GPR_U32(ctx, 31, 0x190544u);
    ctx->pc = 0x190540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19053Cu;
    // 0x190540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x19053Cu, 0x190544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190544u;
label_190544:
    // 0x190544: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x190544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19054c:
    // 0x19054c: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x19054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x190550: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x190554: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x190554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x190558: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x190558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19055c: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x19055cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x190560: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x190564: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x190564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x190568: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x190568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x19056c: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x19056cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x190570: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x190570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x190574: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x190574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x190578: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x190578u;
    {
        const bool branch_taken_0x190578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190578u;
        // 0x19057c: 0xaca00060  sw          $zero, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190578) {
            ctx->pc = 0x19054Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19054c;
        }
    }
    ctx->pc = 0x190580u;
    // 0x190580: 0x8f848380  lw          $a0, -0x7C80($gp)
    ctx->pc = 0x190580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x190584: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x190588: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x190588u;
    SET_GPR_U32(ctx, 31, 0x190590u);
    ctx->pc = 0x19058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190588u;
    // 0x19058c: 0x24a5fdf0  addiu       $a1, $a1, -0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x190588u, 0x190590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190590u;
label_190590:
    // 0x190590: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190590u;
    {
        const bool branch_taken_0x190590 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x190594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190590u;
        // 0x190594: 0x8f858380  lw          $a1, -0x7C80($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190590) {
            ctx->pc = 0x1905A0u;
            goto label_1905a0;
        }
    }
    ctx->pc = 0x190598u;
    // 0x190598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190598u;
    {
        const bool branch_taken_0x190598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190598u;
        // 0x19059c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190598) {
            ctx->pc = 0x1905B8u;
            goto label_1905b8;
        }
    }
    ctx->pc = 0x1905A0u;
label_1905a0:
    // 0x1905a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1905a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1905a4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1905a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1905a8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1905a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1905ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1905acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1905b0: 0x84660008  lh          $a2, 0x8($v1)
    ctx->pc = 0x1905b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1905b4: 0x0  nop
    ctx->pc = 0x1905b4u;
    // NOP
label_1905b8:
    // 0x1905b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1905bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1905c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1905c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1905c4: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x1905c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1905c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1905c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1905ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1905d0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1905d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1905d4: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x1905d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1905d8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1905D8u;
    {
        const bool branch_taken_0x1905d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905D8u;
        // 0x1905dc: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905d8) {
            ctx->pc = 0x1906C8u;
            goto label_1906c8;
        }
    }
    ctx->pc = 0x1905E0u;
    // 0x1905e0: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1905e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1905e4: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1905E4u;
    {
        const bool branch_taken_0x1905e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1905E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905E4u;
        // 0x1905e8: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905e4) {
            ctx->pc = 0x19068Cu;
            goto label_19068c;
        }
    }
    ctx->pc = 0x1905ECu;
    // 0x1905ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1905ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1905f0:
    // 0x1905f0: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x1905f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1905f4: 0x2085021  addu        $t2, $s0, $t0
    ctx->pc = 0x1905f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1905f8: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1905fc: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x190600: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x190600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190604: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x190604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x190608: 0xad440004  sw          $a0, 0x4($t2)
    ctx->pc = 0x190608u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 4));
    // 0x19060c: 0xa1201684  sb          $zero, 0x1684($t1)
    ctx->pc = 0x19060cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x190610: 0xa1201694  sb          $zero, 0x1694($t1)
    ctx->pc = 0x190610u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5780), (uint8_t)GPR_U32(ctx, 0));
    // 0x190614: 0x8ce40044  lw          $a0, 0x44($a3)
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x190618: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x190618u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x19061c: 0xa1201685  sb          $zero, 0x1685($t1)
    ctx->pc = 0x19061cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5765), (uint8_t)GPR_U32(ctx, 0));
    // 0x190620: 0xa1201695  sb          $zero, 0x1695($t1)
    ctx->pc = 0x190620u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5781), (uint8_t)GPR_U32(ctx, 0));
    // 0x190624: 0x8ce40068  lw          $a0, 0x68($a3)
    ctx->pc = 0x190624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x190628: 0xad44000c  sw          $a0, 0xC($t2)
    ctx->pc = 0x190628u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 4));
    // 0x19062c: 0xa1201686  sb          $zero, 0x1686($t1)
    ctx->pc = 0x19062cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5766), (uint8_t)GPR_U32(ctx, 0));
    // 0x190630: 0xa1201696  sb          $zero, 0x1696($t1)
    ctx->pc = 0x190630u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5782), (uint8_t)GPR_U32(ctx, 0));
    // 0x190634: 0x8ce4008c  lw          $a0, 0x8C($a3)
    ctx->pc = 0x190634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x190638: 0xad440010  sw          $a0, 0x10($t2)
    ctx->pc = 0x190638u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 4));
    // 0x19063c: 0xa1201687  sb          $zero, 0x1687($t1)
    ctx->pc = 0x19063cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5767), (uint8_t)GPR_U32(ctx, 0));
    // 0x190640: 0xa1201697  sb          $zero, 0x1697($t1)
    ctx->pc = 0x190640u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5783), (uint8_t)GPR_U32(ctx, 0));
    // 0x190644: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x190648: 0xad440014  sw          $a0, 0x14($t2)
    ctx->pc = 0x190648u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 4));
    // 0x19064c: 0xa1201688  sb          $zero, 0x1688($t1)
    ctx->pc = 0x19064cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5768), (uint8_t)GPR_U32(ctx, 0));
    // 0x190650: 0xa1201698  sb          $zero, 0x1698($t1)
    ctx->pc = 0x190650u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5784), (uint8_t)GPR_U32(ctx, 0));
    // 0x190654: 0x8ce400d4  lw          $a0, 0xD4($a3)
    ctx->pc = 0x190654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x190658: 0xad440018  sw          $a0, 0x18($t2)
    ctx->pc = 0x190658u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 4));
    // 0x19065c: 0xa1201689  sb          $zero, 0x1689($t1)
    ctx->pc = 0x19065cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5769), (uint8_t)GPR_U32(ctx, 0));
    // 0x190660: 0xa1201699  sb          $zero, 0x1699($t1)
    ctx->pc = 0x190660u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5785), (uint8_t)GPR_U32(ctx, 0));
    // 0x190664: 0x8ce400f8  lw          $a0, 0xF8($a3)
    ctx->pc = 0x190664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x190668: 0xad44001c  sw          $a0, 0x1C($t2)
    ctx->pc = 0x190668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 4));
    // 0x19066c: 0xa120168a  sb          $zero, 0x168A($t1)
    ctx->pc = 0x19066cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5770), (uint8_t)GPR_U32(ctx, 0));
    // 0x190670: 0xa120169a  sb          $zero, 0x169A($t1)
    ctx->pc = 0x190670u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5786), (uint8_t)GPR_U32(ctx, 0));
    // 0x190674: 0x8ce4011c  lw          $a0, 0x11C($a3)
    ctx->pc = 0x190674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
    // 0x190678: 0xad440020  sw          $a0, 0x20($t2)
    ctx->pc = 0x190678u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 4));
    // 0x19067c: 0x24e70120  addiu       $a3, $a3, 0x120
    ctx->pc = 0x19067cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x190680: 0xa120168b  sb          $zero, 0x168B($t1)
    ctx->pc = 0x190680u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5771), (uint8_t)GPR_U32(ctx, 0));
    // 0x190684: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x190684u;
    {
        const bool branch_taken_0x190684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190684u;
        // 0x190688: 0xa120169b  sb          $zero, 0x169B($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 5787), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190684) {
            ctx->pc = 0x1905F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1905f0;
        }
    }
    ctx->pc = 0x19068Cu;
label_19068c:
    // 0x19068c: 0x0  nop
    ctx->pc = 0x19068cu;
    // NOP
    // 0x190690: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x190690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x190694: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x190694u;
    {
        const bool branch_taken_0x190694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190694u;
        // 0x190698: 0x24080  sll         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190694) {
            ctx->pc = 0x1906C8u;
            goto label_1906c8;
        }
    }
    ctx->pc = 0x19069Cu;
label_19069c:
    // 0x19069c: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1906a0: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x1906a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1906a4: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1906a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1906ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1906b0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1906b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1906b4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1906b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1906b8: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x1906bc: 0xa1201684  sb          $zero, 0x1684($t1)
    ctx->pc = 0x1906bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x1906c0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1906C0u;
    {
        const bool branch_taken_0x1906c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1906C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906C0u;
        // 0x1906c4: 0xa1201694  sb          $zero, 0x1694($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 5780), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906c0) {
            ctx->pc = 0x19069Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19069c;
        }
    }
    ctx->pc = 0x1906C8u;
label_1906c8:
    // 0x1906c8: 0x8f848380  lw          $a0, -0x7C80($gp)
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x1906cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1906d0: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1906D0u;
    SET_GPR_U32(ctx, 31, 0x1906D8u);
    ctx->pc = 0x1906D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906D0u;
    // 0x1906d4: 0x24a5fdf8  addiu       $a1, $a1, -0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1906D0u, 0x1906D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906D8u;
label_1906d8:
    // 0x1906d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1906D8u;
    {
        const bool branch_taken_0x1906d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1906DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906D8u;
        // 0x1906dc: 0x8f858380  lw          $a1, -0x7C80($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906d8) {
            ctx->pc = 0x1906E8u;
            goto label_1906e8;
        }
    }
    ctx->pc = 0x1906E0u;
    // 0x1906e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1906E0u;
    {
        const bool branch_taken_0x1906e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1906E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906E0u;
        // 0x1906e4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906e0) {
            ctx->pc = 0x190700u;
            goto label_190700;
        }
    }
    ctx->pc = 0x1906E8u;
label_1906e8:
    // 0x1906e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1906ec: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1906f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1906f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1906f8: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1906f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1906fc: 0x0  nop
    ctx->pc = 0x1906fcu;
    // NOP
label_190700:
    // 0x190700: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190704: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190708: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19070c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19070cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190710: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x190710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x190714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190718: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19071c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x19071Cu;
    {
        const bool branch_taken_0x19071c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19071Cu;
        // 0x190720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19071c) {
            ctx->pc = 0x1907A0u;
            goto label_1907a0;
        }
    }
    ctx->pc = 0x190724u;
label_190724:
    // 0x190724: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190728: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19072c: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x19072cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190730: 0xa3302a  slt         $a2, $a1, $v1
    ctx->pc = 0x190730u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190734: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x190734u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x190738: 0xc39c0  sll         $a3, $t4, 7
    ctx->pc = 0x190738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
    // 0x19073c: 0x2085821  addu        $t3, $s0, $t0
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x190740: 0x2074821  addu        $t1, $s0, $a3
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x190744: 0x8d6d0044  lw          $t5, 0x44($t3)
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 68)));
    // 0x190748: 0xc3980  sll         $a3, $t4, 6
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x19074c: 0x2074021  addu        $t0, $s0, $a3
    ctx->pc = 0x19074cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x190750: 0xc3940  sll         $a3, $t4, 5
    ctx->pc = 0x190750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x190754: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x190758: 0xed6021  addu        $t4, $a3, $t5
    ctx->pc = 0x190758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x19075c: 0xd3880  sll         $a3, $t5, 2
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x190760: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x190764: 0xad2a0084  sw          $t2, 0x84($t1)
    ctx->pc = 0x190764u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 10));
    // 0x190768: 0xd3840  sll         $a3, $t5, 1
    ctx->pc = 0x190768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x19076c: 0x84890004  lh          $t1, 0x4($a0)
    ctx->pc = 0x19076cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190770: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x190770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x190774: 0x25a70001  addiu       $a3, $t5, 0x1
    ctx->pc = 0x190774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x190778: 0xa5090884  sh          $t1, 0x884($t0)
    ctx->pc = 0x190778u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2180), (uint16_t)GPR_U32(ctx, 9));
    // 0x19077c: 0x90880006  lbu         $t0, 0x6($a0)
    ctx->pc = 0x19077cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x190780: 0xa1880c84  sb          $t0, 0xC84($t4)
    ctx->pc = 0x190780u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3204), (uint8_t)GPR_U32(ctx, 8));
    // 0x190784: 0x90880007  lbu         $t0, 0x7($a0)
    ctx->pc = 0x190784u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x190788: 0xa1880e84  sb          $t0, 0xE84($t4)
    ctx->pc = 0x190788u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3716), (uint8_t)GPR_U32(ctx, 8));
    // 0x19078c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x19078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x190790: 0xa1801084  sb          $zero, 0x1084($t4)
    ctx->pc = 0x190790u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4228), (uint8_t)GPR_U32(ctx, 0));
    // 0x190794: 0xa1801284  sb          $zero, 0x1284($t4)
    ctx->pc = 0x190794u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4740), (uint8_t)GPR_U32(ctx, 0));
    // 0x190798: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x190798u;
    {
        const bool branch_taken_0x190798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190798u;
        // 0x19079c: 0xad670044  sw          $a3, 0x44($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 68), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190798) {
            ctx->pc = 0x190724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190724;
        }
    }
    ctx->pc = 0x1907A0u;
label_1907a0:
    // 0x1907a0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1907a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1907a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1907a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1907a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1907acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1907B0u;
    {
        const bool branch_taken_0x1907b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907B0u;
        // 0x1907b4: 0x246610c8  addiu       $a2, $v1, 0x10C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907b0) {
            ctx->pc = 0x1907FCu;
            goto label_1907fc;
        }
    }
    ctx->pc = 0x1907B8u;
label_1907b8:
    // 0x1907b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1907b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907bc: 0xa06016a4  sb          $zero, 0x16A4($v1)
    ctx->pc = 0x1907bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5796), (uint8_t)GPR_U32(ctx, 0));
    // 0x1907c0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1907c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1907c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1907C4u;
    {
        const bool branch_taken_0x1907c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907C4u;
        // 0x1907c8: 0xca2021  addu        $a0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907c4) {
            ctx->pc = 0x1907DCu;
            goto label_1907dc;
        }
    }
    ctx->pc = 0x1907CCu;
label_1907cc:
    // 0x1907cc: 0x0  nop
    ctx->pc = 0x1907ccu;
    // NOP
    // 0x1907d0: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1907d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1907d4: 0xa0601484  sb          $zero, 0x1484($v1)
    ctx->pc = 0x1907d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5252), (uint8_t)GPR_U32(ctx, 0));
    // 0x1907d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1907d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1907dc:
    // 0x1907dc: 0x0  nop
    ctx->pc = 0x1907dcu;
    // NOP
    // 0x1907e0: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1907e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1907e4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1907e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1907e8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1907E8u;
    {
        const bool branch_taken_0x1907e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907e8) {
            ctx->pc = 0x1907CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1907cc;
        }
    }
    ctx->pc = 0x1907F0u;
    // 0x1907f0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1907f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1907f4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1907f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1907f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1907f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1907fc:
    // 0x1907fc: 0x0  nop
    ctx->pc = 0x1907fcu;
    // NOP
    // 0x190800: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x190800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190804: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x190804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190808: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x190808u;
    {
        const bool branch_taken_0x190808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190808u;
        // 0x19080c: 0xc81821  addu        $v1, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190808) {
            ctx->pc = 0x1907B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1907b8;
        }
    }
    ctx->pc = 0x190810u;
    // 0x190810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190818: 0x3e00008  jr          $ra
    ctx->pc = 0x190818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190818u;
        // 0x19081c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190820u;
}
