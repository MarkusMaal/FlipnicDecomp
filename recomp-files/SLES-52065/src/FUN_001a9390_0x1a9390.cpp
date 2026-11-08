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

// Function: FUN_001a9390
// Address: 0x1a9390 - 0x1a946c
void FUN_001a9390_0x1a9390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9390_0x1a9390");
#endif

    switch (ctx->pc) {
        case 0x1a9390u: goto label_1a9390;
        case 0x1a9394u: goto label_1a9394;
        case 0x1a9398u: goto label_1a9398;
        case 0x1a939cu: goto label_1a939c;
        case 0x1a93a0u: goto label_1a93a0;
        case 0x1a93a4u: goto label_1a93a4;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93acu: goto label_1a93ac;
        case 0x1a93b0u: goto label_1a93b0;
        case 0x1a93b4u: goto label_1a93b4;
        case 0x1a93b8u: goto label_1a93b8;
        case 0x1a93bcu: goto label_1a93bc;
        case 0x1a93c0u: goto label_1a93c0;
        case 0x1a93c4u: goto label_1a93c4;
        case 0x1a93c8u: goto label_1a93c8;
        case 0x1a93ccu: goto label_1a93cc;
        case 0x1a93d0u: goto label_1a93d0;
        case 0x1a93d4u: goto label_1a93d4;
        case 0x1a93d8u: goto label_1a93d8;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93e0u: goto label_1a93e0;
        case 0x1a93e4u: goto label_1a93e4;
        case 0x1a93e8u: goto label_1a93e8;
        case 0x1a93ecu: goto label_1a93ec;
        case 0x1a93f0u: goto label_1a93f0;
        case 0x1a93f4u: goto label_1a93f4;
        case 0x1a93f8u: goto label_1a93f8;
        case 0x1a93fcu: goto label_1a93fc;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a9404u: goto label_1a9404;
        case 0x1a9408u: goto label_1a9408;
        case 0x1a940cu: goto label_1a940c;
        case 0x1a9410u: goto label_1a9410;
        case 0x1a9414u: goto label_1a9414;
        case 0x1a9418u: goto label_1a9418;
        case 0x1a941cu: goto label_1a941c;
        case 0x1a9420u: goto label_1a9420;
        case 0x1a9424u: goto label_1a9424;
        case 0x1a9428u: goto label_1a9428;
        case 0x1a942cu: goto label_1a942c;
        case 0x1a9430u: goto label_1a9430;
        case 0x1a9434u: goto label_1a9434;
        case 0x1a9438u: goto label_1a9438;
        case 0x1a943cu: goto label_1a943c;
        case 0x1a9440u: goto label_1a9440;
        case 0x1a9444u: goto label_1a9444;
        case 0x1a9448u: goto label_1a9448;
        case 0x1a944cu: goto label_1a944c;
        case 0x1a9450u: goto label_1a9450;
        case 0x1a9454u: goto label_1a9454;
        case 0x1a9458u: goto label_1a9458;
        case 0x1a945cu: goto label_1a945c;
        case 0x1a9460u: goto label_1a9460;
        case 0x1a9464u: goto label_1a9464;
        case 0x1a9468u: goto label_1a9468;
        default: break;
    }

    ctx->pc = 0x1a9390u;

label_1a9390:
    // 0x1a9390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a9390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a9394:
    // 0x1a9394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a9398:
    // 0x1a9398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a939c:
    // 0x1a939c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a939cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a93a0:
    // 0x1a93a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a93a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a93a4:
    // 0x1a93a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a93a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a93a8:
    // 0x1a93a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a93a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a93ac:
    // 0x1a93ac: 0xac9109b8  sw          $s1, 0x9B8($a0)
    ctx->pc = 0x1a93acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2488), GPR_U32(ctx, 17));
label_1a93b0:
    // 0x1a93b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a93b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a93b4:
    // 0x1a93b4: 0xac8609bc  sw          $a2, 0x9BC($a0)
    ctx->pc = 0x1a93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2492), GPR_U32(ctx, 6));
label_1a93b8:
    // 0x1a93b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a93b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a93bc:
    // 0x1a93bc: 0xac800a80  sw          $zero, 0xA80($a0)
    ctx->pc = 0x1a93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2688), GPR_U32(ctx, 0));
label_1a93c0:
    // 0x1a93c0: 0xac800a78  sw          $zero, 0xA78($a0)
    ctx->pc = 0x1a93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2680), GPR_U32(ctx, 0));
label_1a93c4:
    // 0x1a93c4: 0xac800a74  sw          $zero, 0xA74($a0)
    ctx->pc = 0x1a93c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2676), GPR_U32(ctx, 0));
label_1a93c8:
    // 0x1a93c8: 0xac820a7c  sw          $v0, 0xA7C($a0)
    ctx->pc = 0x1a93c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2684), GPR_U32(ctx, 2));
label_1a93cc:
    // 0x1a93cc: 0xa0800a88  sb          $zero, 0xA88($a0)
    ctx->pc = 0x1a93ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2696), (uint8_t)GPR_U32(ctx, 0));
label_1a93d0:
    // 0x1a93d0: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1a93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1a93d4:
    // 0x1a93d4: 0x8f8680fc  lw          $a2, -0x7F04($gp)
    ctx->pc = 0x1a93d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934780)));
label_1a93d8:
    // 0x1a93d8: 0xc06cf34  jal         func_1B3CD0
label_1a93dc:
    if (ctx->pc == 0x1A93DCu) {
        ctx->pc = 0x1A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93D8u;
        // 0x1a93dc: 0x24a507b0  addiu       $a1, $a1, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93E0u;
        goto label_1a93e0;
    }
    ctx->pc = 0x1A93D8u;
    SET_GPR_U32(ctx, 31, 0x1A93E0u);
    ctx->pc = 0x1A93DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93D8u;
    // 0x1a93dc: 0x24a507b0  addiu       $a1, $a1, 0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1A93D8u, 0x1A93E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A93E0u;
label_1a93e0:
    // 0x1a93e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a93e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a93e4:
    // 0x1a93e4: 0xc069ac8  jal         func_1A6B20
label_1a93e8:
    if (ctx->pc == 0x1A93E8u) {
        ctx->pc = 0x1A93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93E4u;
        // 0x1a93e8: 0x26040a70  addiu       $a0, $s0, 0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93ECu;
        goto label_1a93ec;
    }
    ctx->pc = 0x1A93E4u;
    SET_GPR_U32(ctx, 31, 0x1A93ECu);
    ctx->pc = 0x1A93E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93E4u;
    // 0x1a93e8: 0x26040a70  addiu       $a0, $s0, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1A93E4u, 0x1A93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A93ECu;
label_1a93ec:
    // 0x1a93ec: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a93f0:
    // 0x1a93f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a93f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a93f4:
    // 0x1a93f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a93f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a93f8:
    // 0x1a93f8: 0xc069ac0  jal         func_1A6B00
label_1a93fc:
    if (ctx->pc == 0x1A93FCu) {
        ctx->pc = 0x1A93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93F8u;
        // 0x1a93fc: 0x26040a70  addiu       $a0, $s0, 0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9400u;
        goto label_1a9400;
    }
    ctx->pc = 0x1A93F8u;
    SET_GPR_U32(ctx, 31, 0x1A9400u);
    ctx->pc = 0x1A93FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93F8u;
    // 0x1a93fc: 0x26040a70  addiu       $a0, $s0, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1A93F8u, 0x1A9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9400u;
label_1a9400:
    // 0x1a9400: 0xae000a74  sw          $zero, 0xA74($s0)
    ctx->pc = 0x1a9400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2676), GPR_U32(ctx, 0));
label_1a9404:
    // 0x1a9404: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a9404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a9408:
    // 0x1a9408: 0xae020a78  sw          $v0, 0xA78($s0)
    ctx->pc = 0x1a9408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2680), GPR_U32(ctx, 2));
label_1a940c:
    // 0x1a940c: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x1a940cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
label_1a9410:
    // 0x1a9410: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a9410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a9414:
    // 0x1a9414: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a9414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1a9418:
    // 0x1a9418: 0x24422c70  addiu       $v0, $v0, 0x2C70
    ctx->pc = 0x1a9418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
label_1a941c:
    // 0x1a941c: 0xae040a7c  sw          $a0, 0xA7C($s0)
    ctx->pc = 0x1a941cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2684), GPR_U32(ctx, 4));
label_1a9420:
    // 0x1a9420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9424:
    // 0x1a9424: 0xc062114  jal         func_188450
label_1a9428:
    if (ctx->pc == 0x1A9428u) {
        ctx->pc = 0x1A9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9424u;
        // 0x1a9428: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A942Cu;
        goto label_1a942c;
    }
    ctx->pc = 0x1A9424u;
    SET_GPR_U32(ctx, 31, 0x1A942Cu);
    ctx->pc = 0x1A9428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9424u;
    // 0x1a9428: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A9424u, 0x1A942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A942Cu;
label_1a942c:
    // 0x1a942c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9430:
    // 0x1a9430: 0xc0620fc  jal         func_1883F0
label_1a9434:
    if (ctx->pc == 0x1A9434u) {
        ctx->pc = 0x1A9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9430u;
        // 0x1a9434: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9438u;
        goto label_1a9438;
    }
    ctx->pc = 0x1A9430u;
    SET_GPR_U32(ctx, 31, 0x1A9438u);
    ctx->pc = 0x1A9434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9430u;
    // 0x1a9434: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1A9430u, 0x1A9438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9438u;
label_1a9438:
    // 0x1a9438: 0x8e040a70  lw          $a0, 0xA70($s0)
    ctx->pc = 0x1a9438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
label_1a943c:
    // 0x1a943c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1a9440:
    if (ctx->pc == 0x1A9440u) {
        ctx->pc = 0x1A9444u;
        goto label_1a9444;
    }
    ctx->pc = 0x1A943Cu;
    {
        const bool branch_taken_0x1a943c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a943c) {
            ctx->pc = 0x1A9458u;
            goto label_1a9458;
        }
    }
    ctx->pc = 0x1A9444u;
label_1a9444:
    // 0x1a9444: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a9444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9448:
    // 0x1a9448: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a9448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a944c:
    // 0x1a944c: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a944cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a9450:
    // 0x1a9450: 0x320f809  jalr        $t9
label_1a9454:
    if (ctx->pc == 0x1A9454u) {
        ctx->pc = 0x1A9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9450u;
        // 0x1a9454: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9458u;
        goto label_1a9458;
    }
    ctx->pc = 0x1A9450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9458u);
        ctx->pc = 0x1A9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9450u;
        // 0x1a9454: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9450u, 0x1A9458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9458u;
label_1a9458:
    // 0x1a9458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a945c:
    // 0x1a945c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a945cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9460:
    // 0x1a9460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9464:
    // 0x1a9464: 0x3e00008  jr          $ra
label_1a9468:
    if (ctx->pc == 0x1A9468u) {
        ctx->pc = 0x1A9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9464u;
        // 0x1a9468: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A946Cu;
        goto label_fallthrough_0x1a9464;
    }
    ctx->pc = 0x1A9464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9464u;
        // 0x1a9468: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9464:
    ctx->pc = 0x1A946Cu;
}
