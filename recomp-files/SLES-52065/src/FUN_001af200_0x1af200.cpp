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

// Function: FUN_001af200
// Address: 0x1af200 - 0x1af3f0
void FUN_001af200_0x1af200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af200_0x1af200");
#endif

    switch (ctx->pc) {
        case 0x1af218u: goto label_1af218;
        case 0x1af32cu: goto label_1af32c;
        case 0x1af364u: goto label_1af364;
        case 0x1af370u: goto label_1af370;
        case 0x1af384u: goto label_1af384;
        case 0x1af394u: goto label_1af394;
        case 0x1af3b4u: goto label_1af3b4;
        case 0x1af3ccu: goto label_1af3cc;
        case 0x1af3d8u: goto label_1af3d8;
        default: break;
    }

    ctx->pc = 0x1af200u;

    // 0x1af200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af210: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1AF210u;
    SET_GPR_U32(ctx, 31, 0x1AF218u);
    ctx->pc = 0x1AF214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF210u;
    // 0x1af214: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1AF210u, 0x1AF218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF218u;
label_1af218:
    // 0x1af218: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1af218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1af21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af220: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AF220u;
    {
        const bool branch_taken_0x1af220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF220u;
        // 0x1af224: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af220) {
            ctx->pc = 0x1AF29Cu;
            goto label_1af29c;
        }
    }
    ctx->pc = 0x1AF228u;
    // 0x1af228: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF228u;
    {
        const bool branch_taken_0x1af228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af228) {
            ctx->pc = 0x1AF238u;
            goto label_1af238;
        }
    }
    ctx->pc = 0x1AF230u;
    // 0x1af230: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1AF230u;
    {
        const bool branch_taken_0x1af230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF230u;
        // 0x1af234: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af230) {
            ctx->pc = 0x1AF3DCu;
            goto label_1af3dc;
        }
    }
    ctx->pc = 0x1AF238u;
label_1af238:
    // 0x1af238: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x1af238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1af23c: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1af23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1af240: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1af240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1af244: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1af244u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af248: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1af24c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1af24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af250: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1af250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1af254: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF254u;
    {
        const bool branch_taken_0x1af254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1af254) {
            ctx->pc = 0x1AF264u;
            goto label_1af264;
        }
    }
    ctx->pc = 0x1AF25Cu;
    // 0x1af25c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF25Cu;
    {
        const bool branch_taken_0x1af25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af25c) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF264u;
label_1af264:
    // 0x1af264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af268:
    // 0x1af268: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF268u;
    {
        const bool branch_taken_0x1af268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af268) {
            ctx->pc = 0x1AF294u;
            goto label_1af294;
        }
    }
    ctx->pc = 0x1AF270u;
    // 0x1af270: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1af270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1af274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af278: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF278u;
    {
        const bool branch_taken_0x1af278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af278) {
            ctx->pc = 0x1AF288u;
            goto label_1af288;
        }
    }
    ctx->pc = 0x1AF280u;
    // 0x1af280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF280u;
    {
        const bool branch_taken_0x1af280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af280) {
            ctx->pc = 0x1AF28Cu;
            goto label_1af28c;
        }
    }
    ctx->pc = 0x1AF288u;
label_1af288:
    // 0x1af288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af28c:
    // 0x1af28c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1AF28Cu;
    {
        const bool branch_taken_0x1af28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af28c) {
            ctx->pc = 0x1AF3D8u;
            goto label_1af3d8;
        }
    }
    ctx->pc = 0x1AF294u;
label_1af294:
    // 0x1af294: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1AF294u;
    {
        const bool branch_taken_0x1af294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF294u;
        // 0x1af298: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af294) {
            ctx->pc = 0x1AF3D8u;
            goto label_1af3d8;
        }
    }
    ctx->pc = 0x1AF29Cu;
label_1af29c:
    // 0x1af29c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1af29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1af2a0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1af2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1af2a4: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1af2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1af2a8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1af2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1af2ac: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1af2acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1af2b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af2b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1af2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1af2b8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1af2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1af2bc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF2BCu;
    {
        const bool branch_taken_0x1af2bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1AF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2BCu;
        // 0x1af2c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2bc) {
            ctx->pc = 0x1AF2C8u;
            goto label_1af2c8;
        }
    }
    ctx->pc = 0x1AF2C4u;
    // 0x1af2c4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1af2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1af2c8:
    // 0x1af2c8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1af2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1af2cc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AF2CCu;
    {
        const bool branch_taken_0x1af2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af2cc) {
            ctx->pc = 0x1AF320u;
            goto label_1af320;
        }
    }
    ctx->pc = 0x1AF2D4u;
    // 0x1af2d4: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1af2d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1af2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af2dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF2DCu;
    {
        const bool branch_taken_0x1af2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af2dc) {
            ctx->pc = 0x1AF2ECu;
            goto label_1af2ec;
        }
    }
    ctx->pc = 0x1AF2E4u;
    // 0x1af2e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF2E4u;
    {
        const bool branch_taken_0x1af2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af2e4) {
            ctx->pc = 0x1AF2F0u;
            goto label_1af2f0;
        }
    }
    ctx->pc = 0x1AF2ECu;
label_1af2ec:
    // 0x1af2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af2f0:
    // 0x1af2f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF2F0u;
    {
        const bool branch_taken_0x1af2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af2f0) {
            ctx->pc = 0x1AF31Cu;
            goto label_1af31c;
        }
    }
    ctx->pc = 0x1AF2F8u;
    // 0x1af2f8: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x1af2f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1af2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af300: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF300u;
    {
        const bool branch_taken_0x1af300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af300) {
            ctx->pc = 0x1AF310u;
            goto label_1af310;
        }
    }
    ctx->pc = 0x1AF308u;
    // 0x1af308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF308u;
    {
        const bool branch_taken_0x1af308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af308) {
            ctx->pc = 0x1AF314u;
            goto label_1af314;
        }
    }
    ctx->pc = 0x1AF310u;
label_1af310:
    // 0x1af310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af314:
    // 0x1af314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF314u;
    {
        const bool branch_taken_0x1af314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af314) {
            ctx->pc = 0x1AF320u;
            goto label_1af320;
        }
    }
    ctx->pc = 0x1AF31Cu;
label_1af31c:
    // 0x1af31c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1af31cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1af320:
    // 0x1af320: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x1af320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1af324: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1AF324u;
    SET_GPR_U32(ctx, 31, 0x1AF32Cu);
    ctx->pc = 0x1AF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF324u;
    // 0x1af328: 0x262406d0  addiu       $a0, $s1, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AF324u, 0x1AF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF32Cu;
label_1af32c:
    // 0x1af32c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1af32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1af330: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1af330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1af334: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF334u;
    {
        const bool branch_taken_0x1af334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF334u;
        // 0x1af338: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af334) {
            ctx->pc = 0x1AF344u;
            goto label_1af344;
        }
    }
    ctx->pc = 0x1AF33Cu;
    // 0x1af33c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF33Cu;
    {
        const bool branch_taken_0x1af33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF33Cu;
        // 0x1af340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af33c) {
            ctx->pc = 0x1AF35Cu;
            goto label_1af35c;
        }
    }
    ctx->pc = 0x1AF344u;
label_1af344:
    // 0x1af344: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1af344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af34c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1af350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af354: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1af354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1af358: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1af358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1af35c:
    // 0x1af35c: 0xc055c40  jal         func_157100
    ctx->pc = 0x1AF35Cu;
    SET_GPR_U32(ctx, 31, 0x1AF364u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AF35Cu, 0x1AF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF364u;
label_1af364:
    // 0x1af364: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af368: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1AF368u;
    SET_GPR_U32(ctx, 31, 0x1AF370u);
    ctx->pc = 0x1AF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF368u;
    // 0x1af36c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1AF368u, 0x1AF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF370u;
label_1af370:
    // 0x1af370: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1af370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af374: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af378: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1af378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1af37c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1AF37Cu;
    SET_GPR_U32(ctx, 31, 0x1AF384u);
    ctx->pc = 0x1AF380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF37Cu;
    // 0x1af380: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1AF37Cu, 0x1AF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF384u;
label_1af384:
    // 0x1af384: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1af384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1af388: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1af388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af38c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1AF38Cu;
    SET_GPR_U32(ctx, 31, 0x1AF394u);
    ctx->pc = 0x1AF390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF38Cu;
    // 0x1af390: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1AF38Cu, 0x1AF394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF394u;
label_1af394:
    // 0x1af394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1af394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1af398: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af39c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1af39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af3a0: 0x0  nop
    ctx->pc = 0x1af3a0u;
    // NOP
    // 0x1af3a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1af3a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1af3a8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1af3a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1af3ac: 0xc062860  jal         func_18A180
    ctx->pc = 0x1AF3ACu;
    SET_GPR_U32(ctx, 31, 0x1AF3B4u);
    ctx->pc = 0x1AF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3ACu;
    // 0x1af3b0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1AF3ACu, 0x1AF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3B4u;
label_1af3b4:
    // 0x1af3b4: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1af3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1af3b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1af3bc: 0x8e27068c  lw          $a3, 0x68C($s1)
    ctx->pc = 0x1af3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1af3c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1af3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af3c4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1AF3C4u;
    SET_GPR_U32(ctx, 31, 0x1AF3CCu);
    ctx->pc = 0x1AF3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3C4u;
    // 0x1af3c8: 0x24a50b48  addiu       $a1, $a1, 0xB48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1AF3C4u, 0x1AF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3CCu;
label_1af3cc:
    // 0x1af3cc: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af3d0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1AF3D0u;
    SET_GPR_U32(ctx, 31, 0x1AF3D8u);
    ctx->pc = 0x1AF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3D0u;
    // 0x1af3d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1AF3D0u, 0x1AF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3D8u;
label_1af3d8:
    // 0x1af3d8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1af3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1af3dc:
    // 0x1af3dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3E8u;
        // 0x1af3ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF3F0u;
}
