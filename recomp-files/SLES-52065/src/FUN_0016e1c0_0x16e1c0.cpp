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

// Function: FUN_0016e1c0
// Address: 0x16e1c0 - 0x16e2f0
void FUN_0016e1c0_0x16e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e1c0_0x16e1c0");
#endif

    switch (ctx->pc) {
        case 0x16e1c0u: goto label_16e1c0;
        case 0x16e1c4u: goto label_16e1c4;
        case 0x16e1c8u: goto label_16e1c8;
        case 0x16e1ccu: goto label_16e1cc;
        case 0x16e1d0u: goto label_16e1d0;
        case 0x16e1d4u: goto label_16e1d4;
        case 0x16e1d8u: goto label_16e1d8;
        case 0x16e1dcu: goto label_16e1dc;
        case 0x16e1e0u: goto label_16e1e0;
        case 0x16e1e4u: goto label_16e1e4;
        case 0x16e1e8u: goto label_16e1e8;
        case 0x16e1ecu: goto label_16e1ec;
        case 0x16e1f0u: goto label_16e1f0;
        case 0x16e1f4u: goto label_16e1f4;
        case 0x16e1f8u: goto label_16e1f8;
        case 0x16e1fcu: goto label_16e1fc;
        case 0x16e200u: goto label_16e200;
        case 0x16e204u: goto label_16e204;
        case 0x16e208u: goto label_16e208;
        case 0x16e20cu: goto label_16e20c;
        case 0x16e210u: goto label_16e210;
        case 0x16e214u: goto label_16e214;
        case 0x16e218u: goto label_16e218;
        case 0x16e21cu: goto label_16e21c;
        case 0x16e220u: goto label_16e220;
        case 0x16e224u: goto label_16e224;
        case 0x16e228u: goto label_16e228;
        case 0x16e22cu: goto label_16e22c;
        case 0x16e230u: goto label_16e230;
        case 0x16e234u: goto label_16e234;
        case 0x16e238u: goto label_16e238;
        case 0x16e23cu: goto label_16e23c;
        case 0x16e240u: goto label_16e240;
        case 0x16e244u: goto label_16e244;
        case 0x16e248u: goto label_16e248;
        case 0x16e24cu: goto label_16e24c;
        case 0x16e250u: goto label_16e250;
        case 0x16e254u: goto label_16e254;
        case 0x16e258u: goto label_16e258;
        case 0x16e25cu: goto label_16e25c;
        case 0x16e260u: goto label_16e260;
        case 0x16e264u: goto label_16e264;
        case 0x16e268u: goto label_16e268;
        case 0x16e26cu: goto label_16e26c;
        case 0x16e270u: goto label_16e270;
        case 0x16e274u: goto label_16e274;
        case 0x16e278u: goto label_16e278;
        case 0x16e27cu: goto label_16e27c;
        case 0x16e280u: goto label_16e280;
        case 0x16e284u: goto label_16e284;
        case 0x16e288u: goto label_16e288;
        case 0x16e28cu: goto label_16e28c;
        case 0x16e290u: goto label_16e290;
        case 0x16e294u: goto label_16e294;
        case 0x16e298u: goto label_16e298;
        case 0x16e29cu: goto label_16e29c;
        case 0x16e2a0u: goto label_16e2a0;
        case 0x16e2a4u: goto label_16e2a4;
        case 0x16e2a8u: goto label_16e2a8;
        case 0x16e2acu: goto label_16e2ac;
        case 0x16e2b0u: goto label_16e2b0;
        case 0x16e2b4u: goto label_16e2b4;
        case 0x16e2b8u: goto label_16e2b8;
        case 0x16e2bcu: goto label_16e2bc;
        case 0x16e2c0u: goto label_16e2c0;
        case 0x16e2c4u: goto label_16e2c4;
        case 0x16e2c8u: goto label_16e2c8;
        case 0x16e2ccu: goto label_16e2cc;
        case 0x16e2d0u: goto label_16e2d0;
        case 0x16e2d4u: goto label_16e2d4;
        case 0x16e2d8u: goto label_16e2d8;
        case 0x16e2dcu: goto label_16e2dc;
        case 0x16e2e0u: goto label_16e2e0;
        case 0x16e2e4u: goto label_16e2e4;
        case 0x16e2e8u: goto label_16e2e8;
        case 0x16e2ecu: goto label_16e2ec;
        default: break;
    }

    ctx->pc = 0x16e1c0u;

label_16e1c0:
    // 0x16e1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16e1c4:
    // 0x16e1c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16e1c8:
    // 0x16e1c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16e1cc:
    // 0x16e1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16e1d0:
    // 0x16e1d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16e1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e1d4:
    // 0x16e1d4: 0xc0563cc  jal         func_158F30
label_16e1d8:
    if (ctx->pc == 0x16E1D8u) {
        ctx->pc = 0x16E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1D4u;
        // 0x16e1d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1DCu;
        goto label_16e1dc;
    }
    ctx->pc = 0x16E1D4u;
    SET_GPR_U32(ctx, 31, 0x16E1DCu);
    ctx->pc = 0x16E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1D4u;
    // 0x16e1d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16E1D4u, 0x16E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1DCu;
label_16e1dc:
    // 0x16e1dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e1e0:
    // 0x16e1e0: 0x80420025  lb          $v0, 0x25($v0)
    ctx->pc = 0x16e1e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 37)));
label_16e1e4:
    // 0x16e1e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16e1e8:
    if (ctx->pc == 0x16E1E8u) {
        ctx->pc = 0x16E1ECu;
        goto label_16e1ec;
    }
    ctx->pc = 0x16E1E4u;
    {
        const bool branch_taken_0x16e1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e1e4) {
            ctx->pc = 0x16E1F8u;
            goto label_16e1f8;
        }
    }
    ctx->pc = 0x16E1ECu;
label_16e1ec:
    // 0x16e1ec: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x16e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_16e1f0:
    // 0x16e1f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_16e1f4:
    if (ctx->pc == 0x16E1F4u) {
        ctx->pc = 0x16E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1F0u;
        // 0x16e1f4: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1F8u;
        goto label_16e1f8;
    }
    ctx->pc = 0x16E1F0u;
    {
        const bool branch_taken_0x16e1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1F0u;
        // 0x16e1f4: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1f0) {
            ctx->pc = 0x16E1FCu;
            goto label_16e1fc;
        }
    }
    ctx->pc = 0x16E1F8u;
label_16e1f8:
    // 0x16e1f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16e1fc:
    // 0x16e1fc: 0xa6420214  sh          $v0, 0x214($s2)
    ctx->pc = 0x16e1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 532), (uint16_t)GPR_U32(ctx, 2));
label_16e200:
    // 0x16e200: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e204:
    // 0x16e204: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e208:
    // 0x16e208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16e20c:
    if (ctx->pc == 0x16E20Cu) {
        ctx->pc = 0x16E210u;
        goto label_16e210;
    }
    ctx->pc = 0x16E208u;
    {
        const bool branch_taken_0x16e208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e208) {
            ctx->pc = 0x16E21Cu;
            goto label_16e21c;
        }
    }
    ctx->pc = 0x16E210u;
label_16e210:
    // 0x16e210: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16e210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e214:
    // 0x16e214: 0x10000002  b           . + 4 + (0x2 << 2)
label_16e218:
    if (ctx->pc == 0x16E218u) {
        ctx->pc = 0x16E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E214u;
        // 0x16e218: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E21Cu;
        goto label_16e21c;
    }
    ctx->pc = 0x16E214u;
    {
        const bool branch_taken_0x16e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E214u;
        // 0x16e218: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e214) {
            ctx->pc = 0x16E220u;
            goto label_16e220;
        }
    }
    ctx->pc = 0x16E21Cu;
label_16e21c:
    // 0x16e21c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x16e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_16e220:
    // 0x16e220: 0xa6420218  sh          $v0, 0x218($s2)
    ctx->pc = 0x16e220u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 536), (uint16_t)GPR_U32(ctx, 2));
label_16e224:
    // 0x16e224: 0xa6400216  sh          $zero, 0x216($s2)
    ctx->pc = 0x16e224u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 534), (uint16_t)GPR_U32(ctx, 0));
label_16e228:
    // 0x16e228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e22c:
    // 0x16e22c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e230:
    // 0x16e230: 0x80630022  lb          $v1, 0x22($v1)
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_16e234:
    // 0x16e234: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_16e238:
    if (ctx->pc == 0x16E238u) {
        ctx->pc = 0x16E23Cu;
        goto label_16e23c;
    }
    ctx->pc = 0x16E234u;
    {
        const bool branch_taken_0x16e234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16e234) {
            ctx->pc = 0x16E258u;
            goto label_16e258;
        }
    }
    ctx->pc = 0x16E23Cu;
label_16e23c:
    // 0x16e23c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16e23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_16e240:
    // 0x16e240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e244:
    // 0x16e244: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16e244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16e248:
    // 0x16e248: 0x320f809  jalr        $t9
label_16e24c:
    if (ctx->pc == 0x16E24Cu) {
        ctx->pc = 0x16E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E248u;
        // 0x16e24c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E250u;
        goto label_16e250;
    }
    ctx->pc = 0x16E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E250u);
        ctx->pc = 0x16E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E248u;
        // 0x16e24c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E248u, 0x16E250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E250u;
label_16e250:
    // 0x16e250: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e254:
    if (ctx->pc == 0x16E254u) {
        ctx->pc = 0x16E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E250u;
        // 0x16e254: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E258u;
        goto label_16e258;
    }
    ctx->pc = 0x16E250u;
    {
        const bool branch_taken_0x16e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E250u;
        // 0x16e254: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e250) {
            ctx->pc = 0x16E270u;
            goto label_16e270;
        }
    }
    ctx->pc = 0x16E258u;
label_16e258:
    // 0x16e258: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16e258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_16e25c:
    // 0x16e25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e260:
    // 0x16e260: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16e260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16e264:
    // 0x16e264: 0x320f809  jalr        $t9
label_16e268:
    if (ctx->pc == 0x16E268u) {
        ctx->pc = 0x16E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E264u;
        // 0x16e268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E26Cu;
        goto label_16e26c;
    }
    ctx->pc = 0x16E264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E26Cu);
        ctx->pc = 0x16E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E264u;
        // 0x16e268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E264u, 0x16E26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E26Cu;
label_16e26c:
    // 0x16e26c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16e26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e270:
    // 0x16e270: 0x10000015  b           . + 4 + (0x15 << 2)
label_16e274:
    if (ctx->pc == 0x16E274u) {
        ctx->pc = 0x16E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E270u;
        // 0x16e274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E278u;
        goto label_16e278;
    }
    ctx->pc = 0x16E270u;
    {
        const bool branch_taken_0x16e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E270u;
        // 0x16e274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e270) {
            ctx->pc = 0x16E2C8u;
            goto label_16e2c8;
        }
    }
    ctx->pc = 0x16E278u;
label_16e278:
    // 0x16e278: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_16e27c:
    // 0x16e27c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_16e280:
    // 0x16e280: 0x84630080  lh          $v1, 0x80($v1)
    ctx->pc = 0x16e280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16e284:
    // 0x16e284: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_16e288:
    if (ctx->pc == 0x16E288u) {
        ctx->pc = 0x16E28Cu;
        goto label_16e28c;
    }
    ctx->pc = 0x16E284u;
    {
        const bool branch_taken_0x16e284 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e284) {
            ctx->pc = 0x16E2BCu;
            goto label_16e2bc;
        }
    }
    ctx->pc = 0x16E28Cu;
label_16e28c:
    // 0x16e28c: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e290:
    // 0x16e290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16e294:
    // 0x16e294: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e298:
    // 0x16e298: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e29c:
    // 0x16e29c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e2a0:
    // 0x16e2a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e2a4:
    // 0x16e2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e2a8:
    // 0x16e2a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e2ac:
    // 0x16e2ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e2b0:
    // 0x16e2b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e2b4:
    // 0x16e2b4: 0x320f809  jalr        $t9
label_16e2b8:
    if (ctx->pc == 0x16E2B8u) {
        ctx->pc = 0x16E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B4u;
        // 0x16e2b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2BCu;
        goto label_16e2bc;
    }
    ctx->pc = 0x16E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E2BCu);
        ctx->pc = 0x16E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B4u;
        // 0x16e2b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E2B4u, 0x16E2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E2BCu;
label_16e2bc:
    // 0x16e2bc: 0x0  nop
    ctx->pc = 0x16e2bcu;
    // NOP
label_16e2c0:
    // 0x16e2c0: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_16e2c4:
    // 0x16e2c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e2c8:
    // 0x16e2c8: 0x86430214  lh          $v1, 0x214($s2)
    ctx->pc = 0x16e2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 532)));
label_16e2cc:
    // 0x16e2cc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e2ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16e2d0:
    // 0x16e2d0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_16e2d4:
    if (ctx->pc == 0x16E2D4u) {
        ctx->pc = 0x16E2D8u;
        goto label_16e2d8;
    }
    ctx->pc = 0x16E2D0u;
    {
        const bool branch_taken_0x16e2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e2d0) {
            ctx->pc = 0x16E278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e278;
        }
    }
    ctx->pc = 0x16E2D8u;
label_16e2d8:
    // 0x16e2d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16e2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e2dc:
    // 0x16e2dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16e2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e2e0:
    // 0x16e2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e2e4:
    // 0x16e2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16e2e8:
    // 0x16e2e8: 0x3e00008  jr          $ra
label_16e2ec:
    if (ctx->pc == 0x16E2ECu) {
        ctx->pc = 0x16E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E8u;
        // 0x16e2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2F0u;
        goto label_fallthrough_0x16e2e8;
    }
    ctx->pc = 0x16E2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E8u;
        // 0x16e2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e2e8:
    ctx->pc = 0x16E2F0u;
}
