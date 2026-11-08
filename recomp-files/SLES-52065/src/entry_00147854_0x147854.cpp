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

// Function: entry_00147854
// Address: 0x147854 - 0x147988
void entry_00147854_0x147854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147854_0x147854");
#endif

    switch (ctx->pc) {
        case 0x14785cu: goto label_14785c;
        case 0x147864u: goto label_147864;
        case 0x147878u: goto label_147878;
        case 0x147908u: goto label_147908;
        case 0x147920u: goto label_147920;
        default: break;
    }

    ctx->pc = 0x147854u;

label_147854:
    // 0x147854: 0xc07d3ac  jal         func_1F4EB0
label_147858:
    if (ctx->pc == 0x147858u) {
        ctx->pc = 0x14785Cu;
        goto label_14785c;
    }
    ctx->pc = 0x147854u;
    SET_GPR_U32(ctx, 31, 0x14785Cu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x147854u, 0x14785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14785Cu;
label_14785c:
    // 0x14785c: 0xc061c54  jal         func_187150
label_147860:
    if (ctx->pc == 0x147860u) {
        ctx->pc = 0x147860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14785Cu;
        // 0x147860: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147864u;
        goto label_147864;
    }
    ctx->pc = 0x14785Cu;
    SET_GPR_U32(ctx, 31, 0x147864u);
    ctx->pc = 0x147860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14785Cu;
    // 0x147860: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187150u, 0x14785Cu, 0x147864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147864u;
label_147864:
    // 0x147864: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x147864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_147868:
    // 0x147868: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x147868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_14786c:
    // 0x14786c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x14786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_147870:
    // 0x147870: 0xc061bd0  jal         func_186F40
label_147874:
    if (ctx->pc == 0x147874u) {
        ctx->pc = 0x147874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147870u;
        // 0x147874: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147878u;
        goto label_147878;
    }
    ctx->pc = 0x147870u;
    SET_GPR_U32(ctx, 31, 0x147878u);
    ctx->pc = 0x147874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147870u;
    // 0x147874: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x147870u, 0x147878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147878u;
label_147878:
    // 0x147878: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_14787c:
    // 0x14787c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x14787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_147880:
    // 0x147880: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x147880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_147884:
    // 0x147884: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x147884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_147888:
    // 0x147888: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x147888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_14788c:
    // 0x14788c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14788cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_147890:
    // 0x147890: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x147890u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
label_147894:
    // 0x147894: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x147894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_147898:
    // 0x147898: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x147898u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
label_14789c:
    // 0x14789c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14789cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1478a0:
    // 0x1478a0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1478a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1478a4:
    // 0x1478a4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1478a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478a8:
    // 0x1478a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1478ac:
    // 0x1478ac: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1478acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1478b0:
    // 0x1478b0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1478b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478b4:
    // 0x1478b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1478b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1478b8:
    // 0x1478b8: 0x8f8385d4  lw          $v1, -0x7A2C($gp)
    ctx->pc = 0x1478b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_1478bc:
    // 0x1478bc: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_1478c0:
    if (ctx->pc == 0x1478C0u) {
        ctx->pc = 0x1478C4u;
        goto label_1478c4;
    }
    ctx->pc = 0x1478BCu;
    {
        const bool branch_taken_0x1478bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1478bc) {
            ctx->pc = 0x147988u;
            return;
        }
    }
    ctx->pc = 0x1478C4u;
label_1478c4:
    // 0x1478c4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1478c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478c8:
    // 0x1478c8: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x1478c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1478cc:
    // 0x1478cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1478ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1478d0:
    // 0x1478d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1478d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1478d4:
    // 0x1478d4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1478d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1478d8:
    // 0x1478d8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1478d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1478dc:
    // 0x1478dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1478dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1478e0:
    // 0x1478e0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1478e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_1478e4:
    // 0x1478e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1478e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1478e8:
    // 0x1478e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1478e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1478ec:
    // 0x1478ec: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1478ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478f0:
    // 0x1478f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1478f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1478f4:
    // 0x1478f4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1478f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1478f8:
    // 0x1478f8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1478f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478fc:
    // 0x1478fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1478fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_147900:
    // 0x147900: 0xc0485c0  jal         func_121700
label_147904:
    if (ctx->pc == 0x147904u) {
        ctx->pc = 0x147904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147900u;
        // 0x147904: 0x8e8502c0  lw          $a1, 0x2C0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147908u;
        goto label_147908;
    }
    ctx->pc = 0x147900u;
    SET_GPR_U32(ctx, 31, 0x147908u);
    ctx->pc = 0x147904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147900u;
    // 0x147904: 0x8e8502c0  lw          $a1, 0x2C0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x147900u, 0x147908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147908u;
label_147908:
    // 0x147908: 0x8e8402c0  lw          $a0, 0x2C0($s4)
    ctx->pc = 0x147908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_14790c:
    // 0x14790c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x14790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147910:
    // 0x147910: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x147910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_147914:
    // 0x147914: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x147914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_147918:
    // 0x147918: 0x320f809  jalr        $t9
label_14791c:
    if (ctx->pc == 0x14791Cu) {
        ctx->pc = 0x14791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147918u;
        // 0x14791c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147920u;
        goto label_147920;
    }
    ctx->pc = 0x147918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x147920u);
        ctx->pc = 0x14791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147918u;
        // 0x14791c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147918u, 0x147920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x147920u;
label_147920:
    // 0x147920: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147924:
    // 0x147924: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x147924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_147928:
    // 0x147928: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x147928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_14792c:
    // 0x14792c: 0x8f858594  lw          $a1, -0x7A6C($gp)
    ctx->pc = 0x14792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
label_147930:
    // 0x147930: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_147934:
    // 0x147934: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_147938:
    // 0x147938: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14793c:
    // 0x14793c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147940:
    // 0x147940: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x147940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_147944:
    // 0x147944: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x147944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_147948:
    // 0x147948: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x147948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_14794c:
    // 0x14794c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_147950:
    // 0x147950: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x147950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_147954:
    // 0x147954: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_147958:
    // 0x147958: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x147958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_14795c:
    // 0x14795c: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x14795cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_147960:
    // 0x147960: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x147960u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_147964:
    // 0x147964: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x147964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_147968:
    // 0x147968: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x147968u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
label_14796c:
    // 0x14796c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x14796cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_147970:
    // 0x147970: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x147970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_147974:
    // 0x147974: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147978:
    // 0x147978: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x147978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14797c:
    // 0x14797c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x14797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_147980:
    // 0x147980: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147984:
    // 0x147984: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x147984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x147988u;
}
