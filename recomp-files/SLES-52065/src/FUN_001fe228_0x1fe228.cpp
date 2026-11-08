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

// Function: FUN_001fe228
// Address: 0x1fe228 - 0x1fe324
void FUN_001fe228_0x1fe228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe228_0x1fe228");
#endif

    switch (ctx->pc) {
        case 0x1fe228u: goto label_1fe228;
        case 0x1fe22cu: goto label_1fe22c;
        case 0x1fe230u: goto label_1fe230;
        case 0x1fe234u: goto label_1fe234;
        case 0x1fe238u: goto label_1fe238;
        case 0x1fe23cu: goto label_1fe23c;
        case 0x1fe240u: goto label_1fe240;
        case 0x1fe244u: goto label_1fe244;
        case 0x1fe248u: goto label_1fe248;
        case 0x1fe24cu: goto label_1fe24c;
        case 0x1fe250u: goto label_1fe250;
        case 0x1fe254u: goto label_1fe254;
        case 0x1fe258u: goto label_1fe258;
        case 0x1fe25cu: goto label_1fe25c;
        case 0x1fe260u: goto label_1fe260;
        case 0x1fe264u: goto label_1fe264;
        case 0x1fe268u: goto label_1fe268;
        case 0x1fe26cu: goto label_1fe26c;
        case 0x1fe270u: goto label_1fe270;
        case 0x1fe274u: goto label_1fe274;
        case 0x1fe278u: goto label_1fe278;
        case 0x1fe27cu: goto label_1fe27c;
        case 0x1fe280u: goto label_1fe280;
        case 0x1fe284u: goto label_1fe284;
        case 0x1fe288u: goto label_1fe288;
        case 0x1fe28cu: goto label_1fe28c;
        case 0x1fe290u: goto label_1fe290;
        case 0x1fe294u: goto label_1fe294;
        case 0x1fe298u: goto label_1fe298;
        case 0x1fe29cu: goto label_1fe29c;
        case 0x1fe2a0u: goto label_1fe2a0;
        case 0x1fe2a4u: goto label_1fe2a4;
        case 0x1fe2a8u: goto label_1fe2a8;
        case 0x1fe2acu: goto label_1fe2ac;
        case 0x1fe2b0u: goto label_1fe2b0;
        case 0x1fe2b4u: goto label_1fe2b4;
        case 0x1fe2b8u: goto label_1fe2b8;
        case 0x1fe2bcu: goto label_1fe2bc;
        case 0x1fe2c0u: goto label_1fe2c0;
        case 0x1fe2c4u: goto label_1fe2c4;
        case 0x1fe2c8u: goto label_1fe2c8;
        case 0x1fe2ccu: goto label_1fe2cc;
        case 0x1fe2d0u: goto label_1fe2d0;
        case 0x1fe2d4u: goto label_1fe2d4;
        case 0x1fe2d8u: goto label_1fe2d8;
        case 0x1fe2dcu: goto label_1fe2dc;
        case 0x1fe2e0u: goto label_1fe2e0;
        case 0x1fe2e4u: goto label_1fe2e4;
        case 0x1fe2e8u: goto label_1fe2e8;
        case 0x1fe2ecu: goto label_1fe2ec;
        case 0x1fe2f0u: goto label_1fe2f0;
        case 0x1fe2f4u: goto label_1fe2f4;
        case 0x1fe2f8u: goto label_1fe2f8;
        case 0x1fe2fcu: goto label_1fe2fc;
        case 0x1fe300u: goto label_1fe300;
        case 0x1fe304u: goto label_1fe304;
        case 0x1fe308u: goto label_1fe308;
        case 0x1fe30cu: goto label_1fe30c;
        case 0x1fe310u: goto label_1fe310;
        case 0x1fe314u: goto label_1fe314;
        case 0x1fe318u: goto label_1fe318;
        case 0x1fe31cu: goto label_1fe31c;
        case 0x1fe320u: goto label_1fe320;
        default: break;
    }

    ctx->pc = 0x1fe228u;

label_1fe228:
    // 0x1fe228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fe22c:
    // 0x1fe22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fe230:
    // 0x1fe230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fe234:
    // 0x1fe234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe238:
    // 0x1fe238: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1fe238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1fe23c:
    // 0x1fe23c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1fe240:
    if (ctx->pc == 0x1FE240u) {
        ctx->pc = 0x1FE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE23Cu;
        // 0x1fe240: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE244u;
        goto label_1fe244;
    }
    ctx->pc = 0x1FE23Cu;
    {
        const bool branch_taken_0x1fe23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe23c) {
            ctx->pc = 0x1FE240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE23Cu;
            // 0x1fe240: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE258u;
            goto label_1fe258;
        }
    }
    ctx->pc = 0x1FE244u;
label_1fe244:
    // 0x1fe244: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fe244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1fe248:
    // 0x1fe248: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x1fe248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957484)));
label_1fe24c:
    // 0x1fe24c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1fe24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1fe250:
    // 0x1fe250: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1fe250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1fe254:
    // 0x1fe254: 0x0  nop
    ctx->pc = 0x1fe254u;
    // NOP
label_1fe258:
    // 0x1fe258: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1fe25c:
    if (ctx->pc == 0x1FE25Cu) {
        ctx->pc = 0x1FE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE258u;
        // 0x1fe25c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE260u;
        goto label_1fe260;
    }
    ctx->pc = 0x1FE258u;
    {
        const bool branch_taken_0x1fe258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe258) {
            ctx->pc = 0x1FE25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE258u;
            // 0x1fe25c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE26Cu;
            goto label_1fe26c;
        }
    }
    ctx->pc = 0x1FE260u;
label_1fe260:
    // 0x1fe260: 0xc07f5b0  jal         func_1FD6C0
label_1fe264:
    if (ctx->pc == 0x1FE264u) {
        ctx->pc = 0x1FE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE260u;
        // 0x1fe264: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE268u;
        goto label_1fe268;
    }
    ctx->pc = 0x1FE260u;
    SET_GPR_U32(ctx, 31, 0x1FE268u);
    ctx->pc = 0x1FE264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE260u;
    // 0x1fe264: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x1FE260u, 0x1FE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE268u;
label_1fe268:
    // 0x1fe268: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fe268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1fe26c:
    // 0x1fe26c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1fe270:
    if (ctx->pc == 0x1FE270u) {
        ctx->pc = 0x1FE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE26Cu;
        // 0x1fe270: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE274u;
        goto label_1fe274;
    }
    ctx->pc = 0x1FE26Cu;
    {
        const bool branch_taken_0x1fe26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE26Cu;
        // 0x1fe270: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe26c) {
            ctx->pc = 0x1FE284u;
            goto label_1fe284;
        }
    }
    ctx->pc = 0x1FE274u;
label_1fe274:
    // 0x1fe274: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1fe278:
    // 0x1fe278: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe27c:
    // 0x1fe27c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1fe280:
    if (ctx->pc == 0x1FE280u) {
        ctx->pc = 0x1FE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE27Cu;
        // 0x1fe280: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE284u;
        goto label_1fe284;
    }
    ctx->pc = 0x1FE27Cu;
    {
        const bool branch_taken_0x1fe27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE27Cu;
        // 0x1fe280: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe27c) {
            ctx->pc = 0x1FE314u;
            goto label_1fe314;
        }
    }
    ctx->pc = 0x1FE284u;
label_1fe284:
    // 0x1fe284: 0xc07f4fc  jal         func_1FD3F0
label_1fe288:
    if (ctx->pc == 0x1FE288u) {
        ctx->pc = 0x1FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE284u;
        // 0x1fe288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE28Cu;
        goto label_1fe28c;
    }
    ctx->pc = 0x1FE284u;
    SET_GPR_U32(ctx, 31, 0x1FE28Cu);
    ctx->pc = 0x1FE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE284u;
    // 0x1fe288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE284u, 0x1FE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE28Cu;
label_1fe28c:
    // 0x1fe28c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1fe28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe290:
    // 0x1fe290: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x1fe290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_1fe294:
    // 0x1fe294: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1fe298:
    if (ctx->pc == 0x1FE298u) {
        ctx->pc = 0x1FE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE294u;
        // 0x1fe298: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE29Cu;
        goto label_1fe29c;
    }
    ctx->pc = 0x1FE294u;
    {
        const bool branch_taken_0x1fe294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe294) {
            ctx->pc = 0x1FE298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE294u;
            // 0x1fe298: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE2C8u;
            goto label_1fe2c8;
        }
    }
    ctx->pc = 0x1FE29Cu;
label_1fe29c:
    // 0x1fe29c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fe29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1fe2a0:
    // 0x1fe2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2a4:
    // 0x1fe2a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fe2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fe2a8:
    // 0x1fe2a8: 0x40f809  jalr        $v0
label_1fe2ac:
    if (ctx->pc == 0x1FE2ACu) {
        ctx->pc = 0x1FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2A8u;
        // 0x1fe2ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2B0u;
        goto label_1fe2b0;
    }
    ctx->pc = 0x1FE2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE2B0u);
        ctx->pc = 0x1FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2A8u;
        // 0x1fe2ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2A8u, 0x1FE2B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE2B0u;
label_1fe2b0:
    // 0x1fe2b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2b4:
    // 0x1fe2b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe2b8:
    // 0x1fe2b8: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
label_1fe2bc:
    if (ctx->pc == 0x1FE2BCu) {
        ctx->pc = 0x1FE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2B8u;
        // 0x1fe2bc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2C0u;
        goto label_1fe2c0;
    }
    ctx->pc = 0x1FE2B8u;
    {
        const bool branch_taken_0x1fe2b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe2b8) {
            ctx->pc = 0x1FE2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE2B8u;
            // 0x1fe2bc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE2C8u;
            goto label_1fe2c8;
        }
    }
    ctx->pc = 0x1FE2C0u;
label_1fe2c0:
    // 0x1fe2c0: 0x10000015  b           . + 4 + (0x15 << 2)
label_1fe2c4:
    if (ctx->pc == 0x1FE2C4u) {
        ctx->pc = 0x1FE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2C0u;
        // 0x1fe2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2C8u;
        goto label_1fe2c8;
    }
    ctx->pc = 0x1FE2C0u;
    {
        const bool branch_taken_0x1fe2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2C0u;
        // 0x1fe2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2c0) {
            ctx->pc = 0x1FE318u;
            goto label_1fe318;
        }
    }
    ctx->pc = 0x1FE2C8u;
label_1fe2c8:
    // 0x1fe2c8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1fe2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1fe2cc:
    // 0x1fe2cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1fe2d0:
    if (ctx->pc == 0x1FE2D0u) {
        ctx->pc = 0x1FE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2CCu;
        // 0x1fe2d0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2D4u;
        goto label_1fe2d4;
    }
    ctx->pc = 0x1FE2CCu;
    {
        const bool branch_taken_0x1fe2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2CCu;
        // 0x1fe2d0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2cc) {
            ctx->pc = 0x1FE2F0u;
            goto label_1fe2f0;
        }
    }
    ctx->pc = 0x1FE2D4u;
label_1fe2d4:
    // 0x1fe2d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe2d8:
    // 0x1fe2d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1fe2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fe2dc:
    // 0x1fe2dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1fe2e0:
    if (ctx->pc == 0x1FE2E0u) {
        ctx->pc = 0x1FE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2DCu;
        // 0x1fe2e0: 0xa2282f  dsubu       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2E4u;
        goto label_1fe2e4;
    }
    ctx->pc = 0x1FE2DCu;
    {
        const bool branch_taken_0x1fe2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2DCu;
        // 0x1fe2e0: 0xa2282f  dsubu       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2dc) {
            ctx->pc = 0x1FE310u;
            goto label_1fe310;
        }
    }
    ctx->pc = 0x1FE2E4u;
label_1fe2e4:
    // 0x1fe2e4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1fe2e8:
    // 0x1fe2e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fe2ec:
    if (ctx->pc == 0x1FE2ECu) {
        ctx->pc = 0x1FE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2E8u;
        // 0x1fe2ec: 0xa2282f  dsubu       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2F0u;
        goto label_1fe2f0;
    }
    ctx->pc = 0x1FE2E8u;
    {
        const bool branch_taken_0x1fe2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2E8u;
        // 0x1fe2ec: 0xa2282f  dsubu       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2e8) {
            ctx->pc = 0x1FE310u;
            goto label_1fe310;
        }
    }
    ctx->pc = 0x1FE2F0u;
label_1fe2f0:
    // 0x1fe2f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1fe2f4:
    if (ctx->pc == 0x1FE2F4u) {
        ctx->pc = 0x1FE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2F0u;
        // 0x1fe2f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2F8u;
        goto label_1fe2f8;
    }
    ctx->pc = 0x1FE2F0u;
    {
        const bool branch_taken_0x1fe2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2F0u;
        // 0x1fe2f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2f0) {
            ctx->pc = 0x1FE314u;
            goto label_1fe314;
        }
    }
    ctx->pc = 0x1FE2F8u;
label_1fe2f8:
    // 0x1fe2f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fe2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fe2fc:
    // 0x1fe2fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1fe300:
    if (ctx->pc == 0x1FE300u) {
        ctx->pc = 0x1FE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2FCu;
        // 0x1fe300: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE304u;
        goto label_1fe304;
    }
    ctx->pc = 0x1FE2FCu;
    {
        const bool branch_taken_0x1fe2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2FCu;
        // 0x1fe300: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2fc) {
            ctx->pc = 0x1FE318u;
            goto label_1fe318;
        }
    }
    ctx->pc = 0x1FE304u;
label_1fe304:
    // 0x1fe304: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1fe304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fe308:
    // 0x1fe308: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fe308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fe30c:
    // 0x1fe30c: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x1fe30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_1fe310:
    // 0x1fe310: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fe310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe314:
    // 0x1fe314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe318:
    // 0x1fe318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe31c:
    // 0x1fe31c: 0x3e00008  jr          $ra
label_1fe320:
    if (ctx->pc == 0x1FE320u) {
        ctx->pc = 0x1FE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE31Cu;
        // 0x1fe320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE324u;
        goto label_fallthrough_0x1fe31c;
    }
    ctx->pc = 0x1FE31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE31Cu;
        // 0x1fe320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe31c:
    ctx->pc = 0x1FE324u;
}
