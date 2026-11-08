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

// Function: fmv_start_pressed
// Address: 0x11e0b0 - 0x11e368
void fmv_start_pressed_0x11e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fmv_start_pressed_0x11e0b0");
#endif

    switch (ctx->pc) {
        case 0x11e118u: goto label_11e118;
        case 0x11e120u: goto label_11e120;
        case 0x11e128u: goto label_11e128;
        case 0x11e13cu: goto label_11e13c;
        case 0x11e150u: goto label_11e150;
        case 0x11e164u: goto label_11e164;
        case 0x11e178u: goto label_11e178;
        case 0x11e18cu: goto label_11e18c;
        case 0x11e19cu: goto label_11e19c;
        case 0x11e1a4u: goto label_11e1a4;
        case 0x11e1b8u: goto label_11e1b8;
        case 0x11e1c0u: goto label_11e1c0;
        case 0x11e1c8u: goto label_11e1c8;
        case 0x11e1dcu: goto label_11e1dc;
        case 0x11e1f0u: goto label_11e1f0;
        case 0x11e204u: goto label_11e204;
        case 0x11e218u: goto label_11e218;
        case 0x11e22cu: goto label_11e22c;
        case 0x11e23cu: goto label_11e23c;
        case 0x11e250u: goto label_11e250;
        case 0x11e264u: goto label_11e264;
        case 0x11e278u: goto label_11e278;
        case 0x11e28cu: goto label_11e28c;
        case 0x11e2a0u: goto label_11e2a0;
        case 0x11e2bcu: goto label_11e2bc;
        case 0x11e2d0u: goto label_11e2d0;
        case 0x11e2e4u: goto label_11e2e4;
        case 0x11e2f8u: goto label_11e2f8;
        case 0x11e30cu: goto label_11e30c;
        case 0x11e31cu: goto label_11e31c;
        case 0x11e32cu: goto label_11e32c;
        case 0x11e334u: goto label_11e334;
        case 0x11e348u: goto label_11e348;
        case 0x11e354u: goto label_11e354;
        default: break;
    }

    ctx->pc = 0x11e0b0u;

    // 0x11e0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e0b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11e0b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e0bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11e0c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11e0c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0c8: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x11e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x11e0cc: 0x10620095  beq         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x11E0CCu;
    {
        const bool branch_taken_0x11e0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0CCu;
        // 0x11e0d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0cc) {
            ctx->pc = 0x11E324u;
            goto label_11e324;
        }
    }
    ctx->pc = 0x11E0D4u;
    // 0x11e0d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e0d8: 0x1062008e  beq         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x11E0D8u;
    {
        const bool branch_taken_0x11e0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0D8u;
        // 0x11e0dc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0d8) {
            ctx->pc = 0x11E314u;
            goto label_11e314;
        }
    }
    ctx->pc = 0x11E0E0u;
    // 0x11e0e0: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x11E0E0u;
    {
        const bool branch_taken_0x11e0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e0e0) {
            ctx->pc = 0x11E2A8u;
            goto label_11e2a8;
        }
    }
    ctx->pc = 0x11E0E8u;
    // 0x11e0e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e0ec: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x11E0ECu;
    {
        const bool branch_taken_0x11e0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0ECu;
        // 0x11e0f0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0ec) {
            ctx->pc = 0x11E234u;
            goto label_11e234;
        }
    }
    ctx->pc = 0x11E0F4u;
    // 0x11e0f4: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x11E0F4u;
    {
        const bool branch_taken_0x11e0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0F4u;
        // 0x11e0f8: 0x26040108  addiu       $a0, $s0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0f4) {
            ctx->pc = 0x11E194u;
            goto label_11e194;
        }
    }
    ctx->pc = 0x11E0FCu;
    // 0x11e0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e100: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E100u;
    {
        const bool branch_taken_0x11e100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e100) {
            ctx->pc = 0x11E110u;
            goto label_11e110;
        }
    }
    ctx->pc = 0x11E108u;
    // 0x11e108: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x11E108u;
    {
        const bool branch_taken_0x11e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E108u;
        // 0x11e10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e108) {
            ctx->pc = 0x11E34Cu;
            goto label_11e34c;
        }
    }
    ctx->pc = 0x11E110u;
label_11e110:
    // 0x11e110: 0xc040150  jal         func_100540
    ctx->pc = 0x11E110u;
    SET_GPR_U32(ctx, 31, 0x11E118u);
    ctx->pc = 0x11E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E110u;
    // 0x11e114: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E110u, 0x11E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E118u;
label_11e118:
    // 0x11e118: 0xc040150  jal         func_100540
    ctx->pc = 0x11E118u;
    SET_GPR_U32(ctx, 31, 0x11E120u);
    ctx->pc = 0x11E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E118u;
    // 0x11e11c: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E118u, 0x11E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E120u;
label_11e120:
    // 0x11e120: 0xc040150  jal         func_100540
    ctx->pc = 0x11E120u;
    SET_GPR_U32(ctx, 31, 0x11E128u);
    ctx->pc = 0x11E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E120u;
    // 0x11e124: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E120u, 0x11E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E128u;
label_11e128:
    // 0x11e128: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e12c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E12Cu;
    {
        const bool branch_taken_0x11e12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e12c) {
            ctx->pc = 0x11E13Cu;
            goto label_11e13c;
        }
    }
    ctx->pc = 0x11E134u;
    // 0x11e134: 0xc040150  jal         func_100540
    ctx->pc = 0x11E134u;
    SET_GPR_U32(ctx, 31, 0x11E13Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E134u, 0x11E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E13Cu;
label_11e13c:
    // 0x11e13c: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x11e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x11e140: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E140u;
    {
        const bool branch_taken_0x11e140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e140) {
            ctx->pc = 0x11E150u;
            goto label_11e150;
        }
    }
    ctx->pc = 0x11E148u;
    // 0x11e148: 0xc040150  jal         func_100540
    ctx->pc = 0x11E148u;
    SET_GPR_U32(ctx, 31, 0x11E150u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E148u, 0x11E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E150u;
label_11e150:
    // 0x11e150: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x11e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11e154: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E154u;
    {
        const bool branch_taken_0x11e154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e154) {
            ctx->pc = 0x11E164u;
            goto label_11e164;
        }
    }
    ctx->pc = 0x11E15Cu;
    // 0x11e15c: 0xc040150  jal         func_100540
    ctx->pc = 0x11E15Cu;
    SET_GPR_U32(ctx, 31, 0x11E164u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E15Cu, 0x11E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E164u;
label_11e164:
    // 0x11e164: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x11e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11e168: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E168u;
    {
        const bool branch_taken_0x11e168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e168) {
            ctx->pc = 0x11E178u;
            goto label_11e178;
        }
    }
    ctx->pc = 0x11E170u;
    // 0x11e170: 0xc040150  jal         func_100540
    ctx->pc = 0x11E170u;
    SET_GPR_U32(ctx, 31, 0x11E178u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E170u, 0x11E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E178u;
label_11e178:
    // 0x11e178: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e17c: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x11E17Cu;
    {
        const bool branch_taken_0x11e17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e17c) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E184u;
    // 0x11e184: 0xc040150  jal         func_100540
    ctx->pc = 0x11E184u;
    SET_GPR_U32(ctx, 31, 0x11E18Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E184u, 0x11E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E18Cu;
label_11e18c:
    // 0x11e18c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x11E18Cu;
    {
        const bool branch_taken_0x11e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e18c) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E194u;
label_11e194:
    // 0x11e194: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11E194u;
    SET_GPR_U32(ctx, 31, 0x11E19Cu);
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11E194u, 0x11E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E19Cu;
label_11e19c:
    // 0x11e19c: 0xc07c9bc  jal         func_1F26F0
    ctx->pc = 0x11E19Cu;
    SET_GPR_U32(ctx, 31, 0x11E1A4u);
    ctx->pc = 0x11E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E19Cu;
    // 0x11e1a0: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26F0u, 0x11E19Cu, 0x11E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1A4u;
label_11e1a4:
    // 0x11e1a4: 0x820203ec  lb          $v0, 0x3EC($s0)
    ctx->pc = 0x11e1a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x11e1a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E1A8u;
    {
        const bool branch_taken_0x11e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1A8u;
        // 0x11e1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1a8) {
            ctx->pc = 0x11E1B8u;
            goto label_11e1b8;
        }
    }
    ctx->pc = 0x11E1B0u;
    // 0x11e1b0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x11E1B0u;
    SET_GPR_U32(ctx, 31, 0x11E1B8u);
    ctx->pc = 0x11E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1B0u;
    // 0x11e1b4: 0x260503ec  addiu       $a1, $s0, 0x3EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x11E1B0u, 0x11E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1B8u;
label_11e1b8:
    // 0x11e1b8: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1B8u;
    SET_GPR_U32(ctx, 31, 0x11E1C0u);
    ctx->pc = 0x11E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1B8u;
    // 0x11e1bc: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1B8u, 0x11E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1C0u;
label_11e1c0:
    // 0x11e1c0: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1C0u;
    SET_GPR_U32(ctx, 31, 0x11E1C8u);
    ctx->pc = 0x11E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1C0u;
    // 0x11e1c4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1C0u, 0x11E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1C8u;
label_11e1c8:
    // 0x11e1c8: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e1cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E1CCu;
    {
        const bool branch_taken_0x11e1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e1cc) {
            ctx->pc = 0x11E1DCu;
            goto label_11e1dc;
        }
    }
    ctx->pc = 0x11E1D4u;
    // 0x11e1d4: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1D4u;
    SET_GPR_U32(ctx, 31, 0x11E1DCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1D4u, 0x11E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1DCu;
label_11e1dc:
    // 0x11e1dc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x11e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x11e1e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E1E0u;
    {
        const bool branch_taken_0x11e1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e1e0) {
            ctx->pc = 0x11E1F0u;
            goto label_11e1f0;
        }
    }
    ctx->pc = 0x11E1E8u;
    // 0x11e1e8: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1E8u;
    SET_GPR_U32(ctx, 31, 0x11E1F0u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1E8u, 0x11E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1F0u;
label_11e1f0:
    // 0x11e1f0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x11e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11e1f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E1F4u;
    {
        const bool branch_taken_0x11e1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e1f4) {
            ctx->pc = 0x11E204u;
            goto label_11e204;
        }
    }
    ctx->pc = 0x11E1FCu;
    // 0x11e1fc: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1FCu;
    SET_GPR_U32(ctx, 31, 0x11E204u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1FCu, 0x11E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E204u;
label_11e204:
    // 0x11e204: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x11e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11e208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E208u;
    {
        const bool branch_taken_0x11e208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e208) {
            ctx->pc = 0x11E218u;
            goto label_11e218;
        }
    }
    ctx->pc = 0x11E210u;
    // 0x11e210: 0xc040150  jal         func_100540
    ctx->pc = 0x11E210u;
    SET_GPR_U32(ctx, 31, 0x11E218u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E210u, 0x11E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E218u;
label_11e218:
    // 0x11e218: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e21c: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x11E21Cu;
    {
        const bool branch_taken_0x11e21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e21c) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E224u;
    // 0x11e224: 0xc040150  jal         func_100540
    ctx->pc = 0x11E224u;
    SET_GPR_U32(ctx, 31, 0x11E22Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E224u, 0x11E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E22Cu;
label_11e22c:
    // 0x11e22c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11E22Cu;
    {
        const bool branch_taken_0x11e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e22c) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E234u;
label_11e234:
    // 0x11e234: 0xc040150  jal         func_100540
    ctx->pc = 0x11E234u;
    SET_GPR_U32(ctx, 31, 0x11E23Cu);
    ctx->pc = 0x11E238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E234u;
    // 0x11e238: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E234u, 0x11E23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E23Cu;
label_11e23c:
    // 0x11e23c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e240: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E240u;
    {
        const bool branch_taken_0x11e240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e240) {
            ctx->pc = 0x11E250u;
            goto label_11e250;
        }
    }
    ctx->pc = 0x11E248u;
    // 0x11e248: 0xc040150  jal         func_100540
    ctx->pc = 0x11E248u;
    SET_GPR_U32(ctx, 31, 0x11E250u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E248u, 0x11E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E250u;
label_11e250:
    // 0x11e250: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x11e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x11e254: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E254u;
    {
        const bool branch_taken_0x11e254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e254) {
            ctx->pc = 0x11E264u;
            goto label_11e264;
        }
    }
    ctx->pc = 0x11E25Cu;
    // 0x11e25c: 0xc040150  jal         func_100540
    ctx->pc = 0x11E25Cu;
    SET_GPR_U32(ctx, 31, 0x11E264u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E25Cu, 0x11E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E264u;
label_11e264:
    // 0x11e264: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x11e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11e268: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E268u;
    {
        const bool branch_taken_0x11e268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e268) {
            ctx->pc = 0x11E278u;
            goto label_11e278;
        }
    }
    ctx->pc = 0x11E270u;
    // 0x11e270: 0xc040150  jal         func_100540
    ctx->pc = 0x11E270u;
    SET_GPR_U32(ctx, 31, 0x11E278u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E270u, 0x11E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E278u;
label_11e278:
    // 0x11e278: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x11e278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11e27c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E27Cu;
    {
        const bool branch_taken_0x11e27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e27c) {
            ctx->pc = 0x11E28Cu;
            goto label_11e28c;
        }
    }
    ctx->pc = 0x11E284u;
    // 0x11e284: 0xc040150  jal         func_100540
    ctx->pc = 0x11E284u;
    SET_GPR_U32(ctx, 31, 0x11E28Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E284u, 0x11E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E28Cu;
label_11e28c:
    // 0x11e28c: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e290: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11E290u;
    {
        const bool branch_taken_0x11e290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e290) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E298u;
    // 0x11e298: 0xc040150  jal         func_100540
    ctx->pc = 0x11E298u;
    SET_GPR_U32(ctx, 31, 0x11E2A0u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E298u, 0x11E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2A0u;
label_11e2a0:
    // 0x11e2a0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11E2A0u;
    {
        const bool branch_taken_0x11e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2a0) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E2A8u;
label_11e2a8:
    // 0x11e2a8: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e2ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2ACu;
    {
        const bool branch_taken_0x11e2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2ac) {
            ctx->pc = 0x11E2BCu;
            goto label_11e2bc;
        }
    }
    ctx->pc = 0x11E2B4u;
    // 0x11e2b4: 0xc040150  jal         func_100540
    ctx->pc = 0x11E2B4u;
    SET_GPR_U32(ctx, 31, 0x11E2BCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E2B4u, 0x11E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2BCu;
label_11e2bc:
    // 0x11e2bc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x11e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x11e2c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2C0u;
    {
        const bool branch_taken_0x11e2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2c0) {
            ctx->pc = 0x11E2D0u;
            goto label_11e2d0;
        }
    }
    ctx->pc = 0x11E2C8u;
    // 0x11e2c8: 0xc040150  jal         func_100540
    ctx->pc = 0x11E2C8u;
    SET_GPR_U32(ctx, 31, 0x11E2D0u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E2C8u, 0x11E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2D0u;
label_11e2d0:
    // 0x11e2d0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x11e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11e2d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2D4u;
    {
        const bool branch_taken_0x11e2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2d4) {
            ctx->pc = 0x11E2E4u;
            goto label_11e2e4;
        }
    }
    ctx->pc = 0x11E2DCu;
    // 0x11e2dc: 0xc040150  jal         func_100540
    ctx->pc = 0x11E2DCu;
    SET_GPR_U32(ctx, 31, 0x11E2E4u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E2DCu, 0x11E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2E4u;
label_11e2e4:
    // 0x11e2e4: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x11e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11e2e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2E8u;
    {
        const bool branch_taken_0x11e2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2e8) {
            ctx->pc = 0x11E2F8u;
            goto label_11e2f8;
        }
    }
    ctx->pc = 0x11E2F0u;
    // 0x11e2f0: 0xc040150  jal         func_100540
    ctx->pc = 0x11E2F0u;
    SET_GPR_U32(ctx, 31, 0x11E2F8u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E2F0u, 0x11E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2F8u;
label_11e2f8:
    // 0x11e2f8: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e2fc: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E2FCu;
    {
        const bool branch_taken_0x11e2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2fc) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E304u;
    // 0x11e304: 0xc040150  jal         func_100540
    ctx->pc = 0x11E304u;
    SET_GPR_U32(ctx, 31, 0x11E30Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E304u, 0x11E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E30Cu;
label_11e30c:
    // 0x11e30c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11E30Cu;
    {
        const bool branch_taken_0x11e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e30c) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E314u;
label_11e314:
    // 0x11e314: 0xc040150  jal         func_100540
    ctx->pc = 0x11E314u;
    SET_GPR_U32(ctx, 31, 0x11E31Cu);
    ctx->pc = 0x11E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E314u;
    // 0x11e318: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E314u, 0x11E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E31Cu;
label_11e31c:
    // 0x11e31c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E31Cu;
    {
        const bool branch_taken_0x11e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e31c) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E324u;
label_11e324:
    // 0x11e324: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11E324u;
    SET_GPR_U32(ctx, 31, 0x11E32Cu);
    ctx->pc = 0x11E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E324u;
    // 0x11e328: 0x26040108  addiu       $a0, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11E324u, 0x11E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E32Cu;
label_11e32c:
    // 0x11e32c: 0xc07c9bc  jal         func_1F26F0
    ctx->pc = 0x11E32Cu;
    SET_GPR_U32(ctx, 31, 0x11E334u);
    ctx->pc = 0x11E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E32Cu;
    // 0x11e330: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26F0u, 0x11E32Cu, 0x11E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E334u;
label_11e334:
    // 0x11e334: 0x820203ec  lb          $v0, 0x3EC($s0)
    ctx->pc = 0x11e334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x11e338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E338u;
    {
        const bool branch_taken_0x11e338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E338u;
        // 0x11e33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e338) {
            ctx->pc = 0x11E348u;
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E340u;
    // 0x11e340: 0xc046c14  jal         func_11B050
    ctx->pc = 0x11E340u;
    SET_GPR_U32(ctx, 31, 0x11E348u);
    ctx->pc = 0x11E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E340u;
    // 0x11e344: 0x260503ec  addiu       $a1, $s0, 0x3EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x11E340u, 0x11E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E348u;
label_11e348:
    // 0x11e348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e34c:
    // 0x11e34c: 0xc040150  jal         func_100540
    ctx->pc = 0x11E34Cu;
    SET_GPR_U32(ctx, 31, 0x11E354u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E34Cu, 0x11E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E354u;
label_11e354:
    // 0x11e354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e360: 0x3e00008  jr          $ra
    ctx->pc = 0x11E360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E360u;
        // 0x11e364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E368u;
}
