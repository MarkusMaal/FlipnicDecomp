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

// Function: FUN_001ee168
// Address: 0x1ee168 - 0x1ee21c
void FUN_001ee168_0x1ee168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee168_0x1ee168");
#endif

    switch (ctx->pc) {
        case 0x1ee168u: goto label_1ee168;
        case 0x1ee16cu: goto label_1ee16c;
        case 0x1ee170u: goto label_1ee170;
        case 0x1ee174u: goto label_1ee174;
        case 0x1ee178u: goto label_1ee178;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee180u: goto label_1ee180;
        case 0x1ee184u: goto label_1ee184;
        case 0x1ee188u: goto label_1ee188;
        case 0x1ee18cu: goto label_1ee18c;
        case 0x1ee190u: goto label_1ee190;
        case 0x1ee194u: goto label_1ee194;
        case 0x1ee198u: goto label_1ee198;
        case 0x1ee19cu: goto label_1ee19c;
        case 0x1ee1a0u: goto label_1ee1a0;
        case 0x1ee1a4u: goto label_1ee1a4;
        case 0x1ee1a8u: goto label_1ee1a8;
        case 0x1ee1acu: goto label_1ee1ac;
        case 0x1ee1b0u: goto label_1ee1b0;
        case 0x1ee1b4u: goto label_1ee1b4;
        case 0x1ee1b8u: goto label_1ee1b8;
        case 0x1ee1bcu: goto label_1ee1bc;
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1c4u: goto label_1ee1c4;
        case 0x1ee1c8u: goto label_1ee1c8;
        case 0x1ee1ccu: goto label_1ee1cc;
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        case 0x1ee210u: goto label_1ee210;
        case 0x1ee214u: goto label_1ee214;
        case 0x1ee218u: goto label_1ee218;
        default: break;
    }

    ctx->pc = 0x1ee168u;

label_1ee168:
    // 0x1ee168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee16c:
    // 0x1ee16c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1ee170:
    // 0x1ee170: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ee170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ee174:
    // 0x1ee174: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1ee174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1ee178:
    // 0x1ee178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee17c:
    // 0x1ee17c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee180:
    // 0x1ee180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ee184:
    // 0x1ee184: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1ee184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ee188:
    // 0x1ee188: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1ee18c:
    if (ctx->pc == 0x1EE18Cu) {
        ctx->pc = 0x1EE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE188u;
        // 0x1ee18c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE190u;
        goto label_1ee190;
    }
    ctx->pc = 0x1EE188u;
    {
        const bool branch_taken_0x1ee188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE188u;
        // 0x1ee18c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee188) {
            ctx->pc = 0x1EE1B0u;
            goto label_1ee1b0;
        }
    }
    ctx->pc = 0x1EE190u;
label_1ee190:
    // 0x1ee190: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1ee194:
    if (ctx->pc == 0x1EE194u) {
        ctx->pc = 0x1EE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE190u;
        // 0x1ee194: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE198u;
        goto label_1ee198;
    }
    ctx->pc = 0x1EE190u;
    {
        const bool branch_taken_0x1ee190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee190) {
            ctx->pc = 0x1EE194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE190u;
            // 0x1ee194: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE1E8u;
            goto label_1ee1e8;
        }
    }
    ctx->pc = 0x1EE198u;
label_1ee198:
    // 0x1ee198: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1ee19c:
    // 0x1ee19c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1ee19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_1ee1a0:
    // 0x1ee1a0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_1ee1a4:
    if (ctx->pc == 0x1EE1A4u) {
        ctx->pc = 0x1EE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1A0u;
        // 0x1ee1a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1A8u;
        goto label_1ee1a8;
    }
    ctx->pc = 0x1EE1A0u;
    {
        const bool branch_taken_0x1ee1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ee1a0) {
            ctx->pc = 0x1EE1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE1A0u;
            // 0x1ee1a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE1D0u;
            goto label_1ee1d0;
        }
    }
    ctx->pc = 0x1EE1A8u;
label_1ee1a8:
    // 0x1ee1a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ee1ac:
    if (ctx->pc == 0x1EE1ACu) {
        ctx->pc = 0x1EE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1A8u;
        // 0x1ee1ac: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1B0u;
        goto label_1ee1b0;
    }
    ctx->pc = 0x1EE1A8u;
    {
        const bool branch_taken_0x1ee1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1A8u;
        // 0x1ee1ac: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1a8) {
            ctx->pc = 0x1EE1E8u;
            goto label_1ee1e8;
        }
    }
    ctx->pc = 0x1EE1B0u;
label_1ee1b0:
    // 0x1ee1b0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ee1b4:
    // 0x1ee1b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ee1b8:
    // 0x1ee1b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1ee1bc:
    if (ctx->pc == 0x1EE1BCu) {
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1B8u;
        // 0x1ee1bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1C0u;
        goto label_1ee1c0;
    }
    ctx->pc = 0x1EE1B8u;
    {
        const bool branch_taken_0x1ee1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1b8) {
            ctx->pc = 0x1EE1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE1B8u;
            // 0x1ee1bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE1ECu;
            goto label_1ee1ec;
        }
    }
    ctx->pc = 0x1EE1C0u;
label_1ee1c0:
    // 0x1ee1c0: 0x40f809  jalr        $v0
label_1ee1c4:
    if (ctx->pc == 0x1EE1C4u) {
        ctx->pc = 0x1EE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C0u;
        // 0x1ee1c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1C8u;
        goto label_1ee1c8;
    }
    ctx->pc = 0x1EE1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE1C8u);
        ctx->pc = 0x1EE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C0u;
        // 0x1ee1c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE1C0u, 0x1EE1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE1C8u;
label_1ee1c8:
    // 0x1ee1c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ee1cc:
    if (ctx->pc == 0x1EE1CCu) {
        ctx->pc = 0x1EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C8u;
        // 0x1ee1cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1D0u;
        goto label_1ee1d0;
    }
    ctx->pc = 0x1EE1C8u;
    {
        const bool branch_taken_0x1ee1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C8u;
        // 0x1ee1cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1c8) {
            ctx->pc = 0x1EE1E8u;
            goto label_1ee1e8;
        }
    }
    ctx->pc = 0x1EE1D0u;
label_1ee1d0:
    // 0x1ee1d0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ee1d4:
    // 0x1ee1d4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ee1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ee1d8:
    // 0x1ee1d8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1ee1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1ee1dc:
    // 0x1ee1dc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1ee1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1ee1e0:
    // 0x1ee1e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ee1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ee1e4:
    // 0x1ee1e4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1ee1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1ee1e8:
    // 0x1ee1e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ee1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ee1ec:
    // 0x1ee1ec: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_1ee1f0:
    if (ctx->pc == 0x1EE1F0u) {
        ctx->pc = 0x1EE1F4u;
        goto label_1ee1f4;
    }
    ctx->pc = 0x1EE1ECu;
    {
        const bool branch_taken_0x1ee1ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1ee1ec) {
            ctx->pc = 0x1EE1FCu;
            goto label_1ee1fc;
        }
    }
    ctx->pc = 0x1EE1F4u;
label_1ee1f4:
    // 0x1ee1f4: 0xc07ad94  jal         func_1EB650
label_1ee1f8:
    if (ctx->pc == 0x1EE1F8u) {
        ctx->pc = 0x1EE1FCu;
        goto label_1ee1fc;
    }
    ctx->pc = 0x1EE1F4u;
    SET_GPR_U32(ctx, 31, 0x1EE1FCu);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EE1F4u, 0x1EE1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1FCu;
label_1ee1fc:
    // 0x1ee1fc: 0xc07b836  jal         func_1EE0D8
label_1ee200:
    if (ctx->pc == 0x1EE200u) {
        ctx->pc = 0x1EE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1FCu;
        // 0x1ee200: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE204u;
        goto label_1ee204;
    }
    ctx->pc = 0x1EE1FCu;
    SET_GPR_U32(ctx, 31, 0x1EE204u);
    ctx->pc = 0x1EE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1FCu;
    // 0x1ee200: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE1FCu, 0x1EE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE204u;
label_1ee204:
    // 0x1ee204: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ee204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ee208:
    // 0x1ee208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee20c:
    // 0x1ee20c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ee20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee210:
    // 0x1ee210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee214:
    // 0x1ee214: 0x3e00008  jr          $ra
label_1ee218:
    if (ctx->pc == 0x1EE218u) {
        ctx->pc = 0x1EE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE214u;
        // 0x1ee218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE21Cu;
        goto label_fallthrough_0x1ee214;
    }
    ctx->pc = 0x1EE214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE214u;
        // 0x1ee218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee214:
    ctx->pc = 0x1EE21Cu;
}
