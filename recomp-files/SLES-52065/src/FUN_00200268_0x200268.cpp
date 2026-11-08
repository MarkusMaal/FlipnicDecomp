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

// Function: FUN_00200268
// Address: 0x200268 - 0x2003e0
void FUN_00200268_0x200268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200268_0x200268");
#endif

    switch (ctx->pc) {
        case 0x2002c0u: goto label_2002c0;
        case 0x2002f4u: goto label_2002f4;
        case 0x200308u: goto label_200308;
        case 0x200348u: goto label_200348;
        case 0x200388u: goto label_200388;
        case 0x2003b4u: goto label_2003b4;
        default: break;
    }

    ctx->pc = 0x200268u;

    // 0x200268: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x200268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20026c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x20026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x200270: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x200270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x200274: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x200274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200278: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20027c: 0x6a143  sra         $s4, $a2, 5
    ctx->pc = 0x20027cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x200280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200288: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x200288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20028c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x20028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x200290: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x200290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x200294: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200298: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x200298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20029c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2002a0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2002a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2002a4: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x2002a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2002a8: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x2002a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2002ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2002ACu;
    {
        const bool branch_taken_0x2002ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002ACu;
        // 0x2002b0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002ac) {
            ctx->pc = 0x2002E4u;
            goto label_2002e4;
        }
    }
    ctx->pc = 0x2002B4u;
    // 0x2002b4: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x2002b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x2002b8: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x2002b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2002bc: 0x0  nop
    ctx->pc = 0x2002bcu;
    // NOP
label_2002c0:
    // 0x2002c0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2002c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2002c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2002c8: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x2002c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2002cc: 0x0  nop
    ctx->pc = 0x2002ccu;
    // NOP
    // 0x2002d0: 0x0  nop
    ctx->pc = 0x2002d0u;
    // NOP
    // 0x2002d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2002D4u;
    {
        const bool branch_taken_0x2002d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2002d4) {
            ctx->pc = 0x2002C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2002c0;
        }
    }
    ctx->pc = 0x2002DCu;
    // 0x2002dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2002DCu;
    {
        const bool branch_taken_0x2002dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2002dc) {
            ctx->pc = 0x2002ECu;
            goto label_2002ec;
        }
    }
    ctx->pc = 0x2002E4u;
label_2002e4:
    // 0x2002e4: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x2002e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x2002e8: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x2002e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2002ec:
    // 0x2002ec: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x2002ECu;
    SET_GPR_U32(ctx, 31, 0x2002F4u);
    ctx->pc = 0x2002F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002ECu;
    // 0x2002f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x2002ECu, 0x2002F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002F4u;
label_2002f4:
    // 0x2002f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2002f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002f8: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2002F8u;
    {
        const bool branch_taken_0x2002f8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F8u;
        // 0x2002fc: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002f8) {
            ctx->pc = 0x200324u;
            goto label_200324;
        }
    }
    ctx->pc = 0x200300u;
    // 0x200300: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x200300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200304: 0x0  nop
    ctx->pc = 0x200304u;
    // NOP
label_200308:
    // 0x200308: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x200308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x20030c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20030cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x200310: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x200314: 0x0  nop
    ctx->pc = 0x200314u;
    // NOP
    // 0x200318: 0x0  nop
    ctx->pc = 0x200318u;
    // NOP
    // 0x20031c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20031Cu;
    {
        const bool branch_taken_0x20031c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x20031c) {
            ctx->pc = 0x200308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200308;
        }
    }
    ctx->pc = 0x200324u;
label_200324:
    // 0x200324: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x200328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20032c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200330: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x200330u;
    {
        const bool branch_taken_0x200330 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x200334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200330u;
        // 0x200334: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200330) {
            ctx->pc = 0x200380u;
            goto label_200380;
        }
    }
    ctx->pc = 0x200338u;
    // 0x200338: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20033c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20033cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200340: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x200344: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x200344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_200348:
    // 0x200348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x200348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20034c: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x200350: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x200350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x200354: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x200354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x200358: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x20035c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200360: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x200360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x200364: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x200364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x200368: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x200368u;
    {
        const bool branch_taken_0x200368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200368u;
        // 0x20036c: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200368) {
            ctx->pc = 0x200348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200348;
        }
    }
    ctx->pc = 0x200370u;
    // 0x200370: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x200370u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x200374: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x200374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x200378: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x200378u;
    {
        const bool branch_taken_0x200378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200378u;
        // 0x20037c: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200378) {
            ctx->pc = 0x2003A4u;
            goto label_2003a4;
        }
    }
    ctx->pc = 0x200380u;
label_200380:
    // 0x200380: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x200384: 0x0  nop
    ctx->pc = 0x200384u;
    // NOP
label_200388:
    // 0x200388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20038c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x200390: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x200390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x200394: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x200394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x200398: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x200398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x20039c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20039Cu;
    {
        const bool branch_taken_0x20039c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20039c) {
            ctx->pc = 0x200388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200388;
        }
    }
    ctx->pc = 0x2003A4u;
label_2003a4:
    // 0x2003a4: 0xaea50010  sw          $a1, 0x10($s5)
    ctx->pc = 0x2003a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x2003a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2003a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003ac: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2003ACu;
    SET_GPR_U32(ctx, 31, 0x2003B4u);
    ctx->pc = 0x2003B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003ACu;
    // 0x2003b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2003ACu, 0x2003B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003B4u;
label_2003b4:
    // 0x2003b4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2003b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2003b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2003bc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2003bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2003c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2003c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2003c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2003c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2003c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2003c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2003cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2003ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2003d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2003d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2003d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2003d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2003d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2003D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2003DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003D8u;
        // 0x2003dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2003D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2003E0u;
}
