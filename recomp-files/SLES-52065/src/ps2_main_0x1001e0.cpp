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

// Function: main
// Address: 0x1001e0 - 0x100340
void ps2_main_0x1001e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_main_0x1001e0");
#endif

    switch (ctx->pc) {
        case 0x1001e0u: goto label_1001e0;
        case 0x1001e4u: goto label_1001e4;
        case 0x1001e8u: goto label_1001e8;
        case 0x1001ecu: goto label_1001ec;
        case 0x1001f0u: goto label_1001f0;
        case 0x1001f4u: goto label_1001f4;
        case 0x1001f8u: goto label_1001f8;
        case 0x1001fcu: goto label_1001fc;
        case 0x100200u: goto label_100200;
        case 0x100204u: goto label_100204;
        case 0x100208u: goto label_100208;
        case 0x10020cu: goto label_10020c;
        case 0x100210u: goto label_100210;
        case 0x100214u: goto label_100214;
        case 0x100218u: goto label_100218;
        case 0x10021cu: goto label_10021c;
        case 0x100220u: goto label_100220;
        case 0x100224u: goto label_100224;
        case 0x100228u: goto label_100228;
        case 0x10022cu: goto label_10022c;
        case 0x100230u: goto label_100230;
        case 0x100234u: goto label_100234;
        case 0x100238u: goto label_100238;
        case 0x10023cu: goto label_10023c;
        case 0x100240u: goto label_100240;
        case 0x100244u: goto label_100244;
        case 0x100248u: goto label_100248;
        case 0x10024cu: goto label_10024c;
        case 0x100250u: goto label_100250;
        case 0x100254u: goto label_100254;
        case 0x100258u: goto label_100258;
        case 0x10025cu: goto label_10025c;
        case 0x100260u: goto label_100260;
        case 0x100264u: goto label_100264;
        case 0x100268u: goto label_100268;
        case 0x10026cu: goto label_10026c;
        case 0x100270u: goto label_100270;
        case 0x100274u: goto label_100274;
        case 0x100278u: goto label_100278;
        case 0x10027cu: goto label_10027c;
        case 0x100280u: goto label_100280;
        case 0x100284u: goto label_100284;
        case 0x100288u: goto label_100288;
        case 0x10028cu: goto label_10028c;
        case 0x100290u: goto label_100290;
        case 0x100294u: goto label_100294;
        case 0x100298u: goto label_100298;
        case 0x10029cu: goto label_10029c;
        case 0x1002a0u: goto label_1002a0;
        case 0x1002a4u: goto label_1002a4;
        case 0x1002a8u: goto label_1002a8;
        case 0x1002acu: goto label_1002ac;
        case 0x1002b0u: goto label_1002b0;
        case 0x1002b4u: goto label_1002b4;
        case 0x1002b8u: goto label_1002b8;
        case 0x1002bcu: goto label_1002bc;
        case 0x1002c0u: goto label_1002c0;
        case 0x1002c4u: goto label_1002c4;
        case 0x1002c8u: goto label_1002c8;
        case 0x1002ccu: goto label_1002cc;
        case 0x1002d0u: goto label_1002d0;
        case 0x1002d4u: goto label_1002d4;
        case 0x1002d8u: goto label_1002d8;
        case 0x1002dcu: goto label_1002dc;
        case 0x1002e0u: goto label_1002e0;
        case 0x1002e4u: goto label_1002e4;
        case 0x1002e8u: goto label_1002e8;
        case 0x1002ecu: goto label_1002ec;
        case 0x1002f0u: goto label_1002f0;
        case 0x1002f4u: goto label_1002f4;
        case 0x1002f8u: goto label_1002f8;
        case 0x1002fcu: goto label_1002fc;
        case 0x100300u: goto label_100300;
        case 0x100304u: goto label_100304;
        case 0x100308u: goto label_100308;
        case 0x10030cu: goto label_10030c;
        case 0x100310u: goto label_100310;
        case 0x100314u: goto label_100314;
        case 0x100318u: goto label_100318;
        case 0x10031cu: goto label_10031c;
        case 0x100320u: goto label_100320;
        case 0x100324u: goto label_100324;
        case 0x100328u: goto label_100328;
        case 0x10032cu: goto label_10032c;
        case 0x100330u: goto label_100330;
        case 0x100334u: goto label_100334;
        case 0x100338u: goto label_100338;
        case 0x10033cu: goto label_10033c;
        default: break;
    }

    ctx->pc = 0x1001e0u;

label_1001e0:
    // 0x1001e0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1001e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_1001e4:
    // 0x1001e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1001e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1001e8:
    // 0x1001e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1001e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1001ec:
    // 0x1001ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1001ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1001f0:
    // 0x1001f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1001f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1001f4:
    // 0x1001f4: 0xc040104  jal         func_100410
label_1001f8:
    if (ctx->pc == 0x1001F8u) {
        ctx->pc = 0x1001F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1001F4u;
        // 0x1001f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1001FCu;
        goto label_1001fc;
    }
    ctx->pc = 0x1001F4u;
    SET_GPR_U32(ctx, 31, 0x1001FCu);
    ctx->pc = 0x1001F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001F4u;
    // 0x1001f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100410u, 0x1001F4u, 0x1001FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001FCu;
label_1001fc:
    // 0x1001fc: 0xc07ac70  jal         func_1EB1C0
label_100200:
    if (ctx->pc == 0x100200u) {
        ctx->pc = 0x100204u;
        goto label_100204;
    }
    ctx->pc = 0x1001FCu;
    SET_GPR_U32(ctx, 31, 0x100204u);
    ctx->pc = 0x1EB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB1C0u, 0x1001FCu, 0x100204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100204u;
label_100204:
    // 0x100204: 0xc0467d8  jal         func_119F60
label_100208:
    if (ctx->pc == 0x100208u) {
        ctx->pc = 0x10020Cu;
        goto label_10020c;
    }
    ctx->pc = 0x100204u;
    SET_GPR_U32(ctx, 31, 0x10020Cu);
    ctx->pc = 0x119F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F60u, 0x100204u, 0x10020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10020Cu;
label_10020c:
    // 0x10020c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10020cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100210:
    // 0x100210: 0xc0458f8  jal         func_1163E0
label_100214:
    if (ctx->pc == 0x100214u) {
        ctx->pc = 0x100214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100210u;
        // 0x100214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100218u;
        goto label_100218;
    }
    ctx->pc = 0x100210u;
    SET_GPR_U32(ctx, 31, 0x100218u);
    ctx->pc = 0x100214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100210u;
    // 0x100214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163E0u, 0x100210u, 0x100218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100218u;
label_100218:
    // 0x100218: 0xc0401bc  jal         func_1006F0
label_10021c:
    if (ctx->pc == 0x10021Cu) {
        ctx->pc = 0x10021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100218u;
        // 0x10021c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100220u;
        goto label_100220;
    }
    ctx->pc = 0x100218u;
    SET_GPR_U32(ctx, 31, 0x100220u);
    ctx->pc = 0x10021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100218u;
    // 0x10021c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x100218u, 0x100220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100220u;
label_100220:
    // 0x100220: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_100224:
    if (ctx->pc == 0x100224u) {
        ctx->pc = 0x100224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100220u;
        // 0x100224: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100228u;
        goto label_100228;
    }
    ctx->pc = 0x100220u;
    {
        const bool branch_taken_0x100220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100220u;
        // 0x100224: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100220) {
            ctx->pc = 0x10023Cu;
            goto label_10023c;
        }
    }
    ctx->pc = 0x100228u;
label_100228:
    // 0x100228: 0xc045c98  jal         func_117260
label_10022c:
    if (ctx->pc == 0x10022Cu) {
        ctx->pc = 0x10022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100228u;
        // 0x10022c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100230u;
        goto label_100230;
    }
    ctx->pc = 0x100228u;
    SET_GPR_U32(ctx, 31, 0x100230u);
    ctx->pc = 0x10022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100228u;
    // 0x10022c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x100228u, 0x100230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100230u;
label_100230:
    // 0x100230: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_100234:
    // 0x100234: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x100234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
label_100238:
    // 0x100238: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x100238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_10023c:
    // 0x10023c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_100240:
    // 0x100240: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x100240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_100244:
    // 0x100244: 0x2484df80  addiu       $a0, $a0, -0x2080
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958976));
label_100248:
    // 0x100248: 0xc045f58  jal         func_117D60
label_10024c:
    if (ctx->pc == 0x10024Cu) {
        ctx->pc = 0x10024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100248u;
        // 0x10024c: 0x24a5df88  addiu       $a1, $a1, -0x2078 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100250u;
        goto label_100250;
    }
    ctx->pc = 0x100248u;
    SET_GPR_U32(ctx, 31, 0x100250u);
    ctx->pc = 0x10024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100248u;
    // 0x10024c: 0x24a5df88  addiu       $a1, $a1, -0x2078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D60u, 0x100248u, 0x100250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100250u;
label_100250:
    // 0x100250: 0xc045fa0  jal         func_117E80
label_100254:
    if (ctx->pc == 0x100254u) {
        ctx->pc = 0x100258u;
        goto label_100258;
    }
    ctx->pc = 0x100250u;
    SET_GPR_U32(ctx, 31, 0x100258u);
    ctx->pc = 0x117E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117E80u, 0x100250u, 0x100258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100258u;
label_100258:
    // 0x100258: 0xc047a3c  jal         func_11E8F0
label_10025c:
    if (ctx->pc == 0x10025Cu) {
        ctx->pc = 0x100260u;
        goto label_100260;
    }
    ctx->pc = 0x100258u;
    SET_GPR_U32(ctx, 31, 0x100260u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x100258u, 0x100260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100260u;
label_100260:
    // 0x100260: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
label_100264:
    // 0x100264: 0xc080702  jal         func_201C08
label_100268:
    if (ctx->pc == 0x100268u) {
        ctx->pc = 0x100268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100264u;
        // 0x100268: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10026Cu;
        goto label_10026c;
    }
    ctx->pc = 0x100264u;
    SET_GPR_U32(ctx, 31, 0x10026Cu);
    ctx->pc = 0x100268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100264u;
    // 0x100268: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x100264u, 0x10026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10026Cu;
label_10026c:
    // 0x10026c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10026cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_100270:
    // 0x100270: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_100274:
    // 0x100274: 0xc080664  jal         func_201990
label_100278:
    if (ctx->pc == 0x100278u) {
        ctx->pc = 0x100278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100274u;
        // 0x100278: 0x24a5df98  addiu       $a1, $a1, -0x2068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10027Cu;
        goto label_10027c;
    }
    ctx->pc = 0x100274u;
    SET_GPR_U32(ctx, 31, 0x10027Cu);
    ctx->pc = 0x100278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100274u;
    // 0x100278: 0x24a5df98  addiu       $a1, $a1, -0x2068 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x100274u, 0x10027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10027Cu;
label_10027c:
    // 0x10027c: 0xc047a50  jal         func_11E940
label_100280:
    if (ctx->pc == 0x100280u) {
        ctx->pc = 0x100284u;
        goto label_100284;
    }
    ctx->pc = 0x10027Cu;
    SET_GPR_U32(ctx, 31, 0x100284u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x10027Cu, 0x100284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100284u;
label_100284:
    // 0x100284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100288:
    // 0x100288: 0xc046b28  jal         func_11ACA0
label_10028c:
    if (ctx->pc == 0x10028Cu) {
        ctx->pc = 0x10028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100288u;
        // 0x10028c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100290u;
        goto label_100290;
    }
    ctx->pc = 0x100288u;
    SET_GPR_U32(ctx, 31, 0x100290u);
    ctx->pc = 0x10028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100288u;
    // 0x10028c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x100288u, 0x100290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100290u;
label_100290:
    // 0x100290: 0xc047a3c  jal         func_11E8F0
label_100294:
    if (ctx->pc == 0x100294u) {
        ctx->pc = 0x100298u;
        goto label_100298;
    }
    ctx->pc = 0x100290u;
    SET_GPR_U32(ctx, 31, 0x100298u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x100290u, 0x100298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100298u;
label_100298:
    // 0x100298: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
label_10029c:
    // 0x10029c: 0xc080702  jal         func_201C08
label_1002a0:
    if (ctx->pc == 0x1002A0u) {
        ctx->pc = 0x1002A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10029Cu;
        // 0x1002a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002A4u;
        goto label_1002a4;
    }
    ctx->pc = 0x10029Cu;
    SET_GPR_U32(ctx, 31, 0x1002A4u);
    ctx->pc = 0x1002A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10029Cu;
    // 0x1002a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x10029Cu, 0x1002A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002A4u;
label_1002a4:
    // 0x1002a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1002a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1002a8:
    // 0x1002a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1002ac:
    // 0x1002ac: 0xc080664  jal         func_201990
label_1002b0:
    if (ctx->pc == 0x1002B0u) {
        ctx->pc = 0x1002B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002ACu;
        // 0x1002b0: 0x24a5dfa0  addiu       $a1, $a1, -0x2060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002B4u;
        goto label_1002b4;
    }
    ctx->pc = 0x1002ACu;
    SET_GPR_U32(ctx, 31, 0x1002B4u);
    ctx->pc = 0x1002B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002ACu;
    // 0x1002b0: 0x24a5dfa0  addiu       $a1, $a1, -0x2060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1002ACu, 0x1002B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002B4u;
label_1002b4:
    // 0x1002b4: 0xc047a64  jal         func_11E990
label_1002b8:
    if (ctx->pc == 0x1002B8u) {
        ctx->pc = 0x1002BCu;
        goto label_1002bc;
    }
    ctx->pc = 0x1002B4u;
    SET_GPR_U32(ctx, 31, 0x1002BCu);
    ctx->pc = 0x11E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E990u, 0x1002B4u, 0x1002BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002BCu;
label_1002bc:
    // 0x1002bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1002bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1002c0:
    // 0x1002c0: 0xc046b28  jal         func_11ACA0
label_1002c4:
    if (ctx->pc == 0x1002C4u) {
        ctx->pc = 0x1002C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002C0u;
        // 0x1002c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002C8u;
        goto label_1002c8;
    }
    ctx->pc = 0x1002C0u;
    SET_GPR_U32(ctx, 31, 0x1002C8u);
    ctx->pc = 0x1002C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002C0u;
    // 0x1002c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1002C0u, 0x1002C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002C8u;
label_1002c8:
    // 0x1002c8: 0xc06cf8c  jal         func_1B3E30
label_1002cc:
    if (ctx->pc == 0x1002CCu) {
        ctx->pc = 0x1002D0u;
        goto label_1002d0;
    }
    ctx->pc = 0x1002C8u;
    SET_GPR_U32(ctx, 31, 0x1002D0u);
    ctx->pc = 0x1B3E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E30u, 0x1002C8u, 0x1002D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002D0u;
label_1002d0:
    // 0x1002d0: 0xc06d400  jal         func_1B5000
label_1002d4:
    if (ctx->pc == 0x1002D4u) {
        ctx->pc = 0x1002D8u;
        goto label_1002d8;
    }
    ctx->pc = 0x1002D0u;
    SET_GPR_U32(ctx, 31, 0x1002D8u);
    ctx->pc = 0x1B5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5000u, 0x1002D0u, 0x1002D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002D8u;
label_1002d8:
    // 0x1002d8: 0xc06d298  jal         func_1B4A60
label_1002dc:
    if (ctx->pc == 0x1002DCu) {
        ctx->pc = 0x1002E0u;
        goto label_1002e0;
    }
    ctx->pc = 0x1002D8u;
    SET_GPR_U32(ctx, 31, 0x1002E0u);
    ctx->pc = 0x1B4A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A60u, 0x1002D8u, 0x1002E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002E0u;
label_1002e0:
    // 0x1002e0: 0xc0401bc  jal         func_1006F0
label_1002e4:
    if (ctx->pc == 0x1002E4u) {
        ctx->pc = 0x1002E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002E0u;
        // 0x1002e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002E8u;
        goto label_1002e8;
    }
    ctx->pc = 0x1002E0u;
    SET_GPR_U32(ctx, 31, 0x1002E8u);
    ctx->pc = 0x1002E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002E0u;
    // 0x1002e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1002E0u, 0x1002E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002E8u;
label_1002e8:
    // 0x1002e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1002ec:
    // 0x1002ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1002f0:
    if (ctx->pc == 0x1002F0u) {
        ctx->pc = 0x1002F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002ECu;
        // 0x1002f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002F4u;
        goto label_1002f4;
    }
    ctx->pc = 0x1002ECu;
    {
        const bool branch_taken_0x1002ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002ECu;
        // 0x1002f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002ec) {
            ctx->pc = 0x100300u;
            goto label_100300;
        }
    }
    ctx->pc = 0x1002F4u;
label_1002f4:
    // 0x1002f4: 0xc0404f8  jal         func_1013E0
label_1002f8:
    if (ctx->pc == 0x1002F8u) {
        ctx->pc = 0x1002FCu;
        goto label_1002fc;
    }
    ctx->pc = 0x1002F4u;
    SET_GPR_U32(ctx, 31, 0x1002FCu);
    ctx->pc = 0x1013E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013E0u, 0x1002F4u, 0x1002FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002FCu;
label_1002fc:
    // 0x1002fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1002fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100300:
    // 0x100300: 0xc040524  jal         func_101490
label_100304:
    if (ctx->pc == 0x100304u) {
        ctx->pc = 0x100304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100300u;
        // 0x100304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100308u;
        goto label_100308;
    }
    ctx->pc = 0x100300u;
    SET_GPR_U32(ctx, 31, 0x100308u);
    ctx->pc = 0x100304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100300u;
    // 0x100304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101490u, 0x100300u, 0x100308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100308u;
label_100308:
    // 0x100308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10030c:
    // 0x10030c: 0xc054660  jal         func_151980
label_100310:
    if (ctx->pc == 0x100310u) {
        ctx->pc = 0x100310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10030Cu;
        // 0x100310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100314u;
        goto label_100314;
    }
    ctx->pc = 0x10030Cu;
    SET_GPR_U32(ctx, 31, 0x100314u);
    ctx->pc = 0x100310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10030Cu;
    // 0x100310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x10030Cu, 0x100314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100314u;
label_100314:
    // 0x100314: 0xc0405d0  jal         func_101740
label_100318:
    if (ctx->pc == 0x100318u) {
        ctx->pc = 0x100318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100314u;
        // 0x100318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10031Cu;
        goto label_10031c;
    }
    ctx->pc = 0x100314u;
    SET_GPR_U32(ctx, 31, 0x10031Cu);
    ctx->pc = 0x100318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100314u;
    // 0x100318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101740u, 0x100314u, 0x10031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10031Cu;
label_10031c:
    // 0x10031c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_100320:
    if (ctx->pc == 0x100320u) {
        ctx->pc = 0x100324u;
        goto label_100324;
    }
    ctx->pc = 0x10031Cu;
    {
        const bool branch_taken_0x10031c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10031c) {
            ctx->pc = 0x1002D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1002d8;
        }
    }
    ctx->pc = 0x100324u;
label_100324:
    // 0x100324: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x100324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_100328:
    // 0x100328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10032c:
    // 0x10032c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10032cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_100330:
    // 0x100330: 0x320f809  jalr        $t9
label_100334:
    if (ctx->pc == 0x100334u) {
        ctx->pc = 0x100334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100330u;
        // 0x100334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100338u;
        goto label_100338;
    }
    ctx->pc = 0x100330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100338u);
        ctx->pc = 0x100334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100330u;
        // 0x100334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100330u, 0x100338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100338u;
label_100338:
    // 0x100338: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_10033c:
    if (ctx->pc == 0x10033Cu) {
        ctx->pc = 0x100340u;
        goto label_fallthrough_0x100338;
    }
    ctx->pc = 0x100338u;
    {
        const bool branch_taken_0x100338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100338) {
            ctx->pc = 0x1002D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1002d8;
        }
    }
label_fallthrough_0x100338:
    ctx->pc = 0x100340u;
}
