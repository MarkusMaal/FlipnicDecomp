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

// Function: FUN_00108230
// Address: 0x108230 - 0x108388
void FUN_00108230_0x108230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108230_0x108230");
#endif

    switch (ctx->pc) {
        case 0x10824cu: goto label_10824c;
        case 0x1082a8u: goto label_1082a8;
        case 0x1082dcu: goto label_1082dc;
        case 0x10835cu: goto label_10835c;
        default: break;
    }

    ctx->pc = 0x108230u;

    // 0x108230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10823c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10823cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108244: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x108248: 0x24a5fd90  addiu       $a1, $a1, -0x270
    ctx->pc = 0x108248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966672));
label_10824c:
    // 0x10824c: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x10824cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x108250: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x108250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x108254: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108254u;
    {
        const bool branch_taken_0x108254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108254) {
            ctx->pc = 0x1082BCu;
            goto label_1082bc;
        }
    }
    ctx->pc = 0x10825Cu;
    // 0x10825c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x10825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x108260: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x108260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108264: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x108264u;
    {
        const bool branch_taken_0x108264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108264) {
            ctx->pc = 0x1082BCu;
            goto label_1082bc;
        }
    }
    ctx->pc = 0x10826Cu;
    // 0x10826c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x10826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x108270: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x108270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108274: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x108274u;
    {
        const bool branch_taken_0x108274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108274u;
        // 0x108278: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108274) {
            ctx->pc = 0x1082BCu;
            goto label_1082bc;
        }
    }
    ctx->pc = 0x10827Cu;
    // 0x10827c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x10827cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x108280: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x108280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x108284: 0x3c02468c  lui         $v0, 0x468C
    ctx->pc = 0x108284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18060 << 16));
    // 0x108288: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x108288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10828c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x10828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x108290: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x108290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108294: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x108294u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x108298: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x108298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10829c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x10829cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1082a0: 0xc041ddc  jal         func_107770
    ctx->pc = 0x1082A0u;
    SET_GPR_U32(ctx, 31, 0x1082A8u);
    ctx->pc = 0x1082A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082A0u;
    // 0x1082a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x1082A0u, 0x1082A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082A8u;
label_1082a8:
    // 0x1082a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1082a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1082ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1082acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1082b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1082b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1082b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1082B4u;
    {
        const bool branch_taken_0x1082b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082B4u;
        // 0x1082b8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082b4) {
            ctx->pc = 0x108378u;
            goto label_108378;
        }
    }
    ctx->pc = 0x1082BCu;
label_1082bc:
    // 0x1082bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1082bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1082c0: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1082c4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1082C4u;
    {
        const bool branch_taken_0x1082c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082C4u;
        // 0x1082c8: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082c4) {
            ctx->pc = 0x10824Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10824c;
        }
    }
    ctx->pc = 0x1082CCu;
    // 0x1082cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1082ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1082d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1082d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1082d8: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x1082d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
label_1082dc:
    // 0x1082dc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1082dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1082e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1082e4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1082E4u;
    {
        const bool branch_taken_0x1082e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082E4u;
        // 0x1082e8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082e4) {
            ctx->pc = 0x108364u;
            goto label_108364;
        }
    }
    ctx->pc = 0x1082ECu;
    // 0x1082ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1082ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1082f0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1082f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1082f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1082f8: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1082fc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1082fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108300: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x108300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x108304: 0x2442fd94  addiu       $v0, $v0, -0x26C
    ctx->pc = 0x108304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966676));
    // 0x108308: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x108308u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x10830c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x10830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x108310: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108314: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x108314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x108318: 0x2442fd98  addiu       $v0, $v0, -0x268
    ctx->pc = 0x108318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966680));
    // 0x10831c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x10831cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108320: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x108320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x108324: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108328: 0x2442fda4  addiu       $v0, $v0, -0x25C
    ctx->pc = 0x108328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966692));
    // 0x10832c: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x10832cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x108330: 0x3c02468c  lui         $v0, 0x468C
    ctx->pc = 0x108330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18060 << 16));
    // 0x108334: 0x3443a000  ori         $v1, $v0, 0xA000
    ctx->pc = 0x108334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x108338: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x108338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x10833c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x108340: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x108340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x108344: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x108344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108348: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x108348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10834c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x10834cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x108350: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x108350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x108354: 0xc041ddc  jal         func_107770
    ctx->pc = 0x108354u;
    SET_GPR_U32(ctx, 31, 0x10835Cu);
    ctx->pc = 0x108358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108354u;
    // 0x108358: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x108354u, 0x10835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10835Cu;
label_10835c:
    // 0x10835c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10835Cu;
    {
        const bool branch_taken_0x10835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10835Cu;
        // 0x108360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10835c) {
            ctx->pc = 0x108378u;
            goto label_108378;
        }
    }
    ctx->pc = 0x108364u;
label_108364:
    // 0x108364: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x108364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x108368: 0x28e20018  slti        $v0, $a3, 0x18
    ctx->pc = 0x108368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x10836c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x10836Cu;
    {
        const bool branch_taken_0x10836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10836Cu;
        // 0x108370: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10836c) {
            ctx->pc = 0x1082DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1082dc;
        }
    }
    ctx->pc = 0x108374u;
    // 0x108374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108378:
    // 0x108378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10837c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10837cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108380: 0x3e00008  jr          $ra
    ctx->pc = 0x108380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108380u;
        // 0x108384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108388u;
}
