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

// Function: FUN_0010ddd0
// Address: 0x10ddd0 - 0x10df58
void FUN_0010ddd0_0x10ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ddd0_0x10ddd0");
#endif

    switch (ctx->pc) {
        case 0x10ddd0u: goto label_10ddd0;
        case 0x10ddd4u: goto label_10ddd4;
        case 0x10ddd8u: goto label_10ddd8;
        case 0x10dddcu: goto label_10dddc;
        case 0x10dde0u: goto label_10dde0;
        case 0x10dde4u: goto label_10dde4;
        case 0x10dde8u: goto label_10dde8;
        case 0x10ddecu: goto label_10ddec;
        case 0x10ddf0u: goto label_10ddf0;
        case 0x10ddf4u: goto label_10ddf4;
        case 0x10ddf8u: goto label_10ddf8;
        case 0x10ddfcu: goto label_10ddfc;
        case 0x10de00u: goto label_10de00;
        case 0x10de04u: goto label_10de04;
        case 0x10de08u: goto label_10de08;
        case 0x10de0cu: goto label_10de0c;
        case 0x10de10u: goto label_10de10;
        case 0x10de14u: goto label_10de14;
        case 0x10de18u: goto label_10de18;
        case 0x10de1cu: goto label_10de1c;
        case 0x10de20u: goto label_10de20;
        case 0x10de24u: goto label_10de24;
        case 0x10de28u: goto label_10de28;
        case 0x10de2cu: goto label_10de2c;
        case 0x10de30u: goto label_10de30;
        case 0x10de34u: goto label_10de34;
        case 0x10de38u: goto label_10de38;
        case 0x10de3cu: goto label_10de3c;
        case 0x10de40u: goto label_10de40;
        case 0x10de44u: goto label_10de44;
        case 0x10de48u: goto label_10de48;
        case 0x10de4cu: goto label_10de4c;
        case 0x10de50u: goto label_10de50;
        case 0x10de54u: goto label_10de54;
        case 0x10de58u: goto label_10de58;
        case 0x10de5cu: goto label_10de5c;
        case 0x10de60u: goto label_10de60;
        case 0x10de64u: goto label_10de64;
        case 0x10de68u: goto label_10de68;
        case 0x10de6cu: goto label_10de6c;
        case 0x10de70u: goto label_10de70;
        case 0x10de74u: goto label_10de74;
        case 0x10de78u: goto label_10de78;
        case 0x10de7cu: goto label_10de7c;
        case 0x10de80u: goto label_10de80;
        case 0x10de84u: goto label_10de84;
        case 0x10de88u: goto label_10de88;
        case 0x10de8cu: goto label_10de8c;
        case 0x10de90u: goto label_10de90;
        case 0x10de94u: goto label_10de94;
        case 0x10de98u: goto label_10de98;
        case 0x10de9cu: goto label_10de9c;
        case 0x10dea0u: goto label_10dea0;
        case 0x10dea4u: goto label_10dea4;
        case 0x10dea8u: goto label_10dea8;
        case 0x10deacu: goto label_10deac;
        case 0x10deb0u: goto label_10deb0;
        case 0x10deb4u: goto label_10deb4;
        case 0x10deb8u: goto label_10deb8;
        case 0x10debcu: goto label_10debc;
        case 0x10dec0u: goto label_10dec0;
        case 0x10dec4u: goto label_10dec4;
        case 0x10dec8u: goto label_10dec8;
        case 0x10deccu: goto label_10decc;
        case 0x10ded0u: goto label_10ded0;
        case 0x10ded4u: goto label_10ded4;
        case 0x10ded8u: goto label_10ded8;
        case 0x10dedcu: goto label_10dedc;
        case 0x10dee0u: goto label_10dee0;
        case 0x10dee4u: goto label_10dee4;
        case 0x10dee8u: goto label_10dee8;
        case 0x10deecu: goto label_10deec;
        case 0x10def0u: goto label_10def0;
        case 0x10def4u: goto label_10def4;
        case 0x10def8u: goto label_10def8;
        case 0x10defcu: goto label_10defc;
        case 0x10df00u: goto label_10df00;
        case 0x10df04u: goto label_10df04;
        case 0x10df08u: goto label_10df08;
        case 0x10df0cu: goto label_10df0c;
        case 0x10df10u: goto label_10df10;
        case 0x10df14u: goto label_10df14;
        case 0x10df18u: goto label_10df18;
        case 0x10df1cu: goto label_10df1c;
        case 0x10df20u: goto label_10df20;
        case 0x10df24u: goto label_10df24;
        case 0x10df28u: goto label_10df28;
        case 0x10df2cu: goto label_10df2c;
        case 0x10df30u: goto label_10df30;
        case 0x10df34u: goto label_10df34;
        case 0x10df38u: goto label_10df38;
        case 0x10df3cu: goto label_10df3c;
        case 0x10df40u: goto label_10df40;
        case 0x10df44u: goto label_10df44;
        case 0x10df48u: goto label_10df48;
        case 0x10df4cu: goto label_10df4c;
        case 0x10df50u: goto label_10df50;
        case 0x10df54u: goto label_10df54;
        default: break;
    }

    ctx->pc = 0x10ddd0u;

label_10ddd0:
    // 0x10ddd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10ddd4:
    // 0x10ddd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10ddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10ddd8:
    // 0x10ddd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10ddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10dddc:
    // 0x10dddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10dddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10dde0:
    // 0x10dde0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10dde4:
    // 0x10dde4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10dde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10dde8:
    // 0x10dde8: 0x10000017  b           . + 4 + (0x17 << 2)
label_10ddec:
    if (ctx->pc == 0x10DDECu) {
        ctx->pc = 0x10DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDE8u;
        // 0x10ddec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDF0u;
        goto label_10ddf0;
    }
    ctx->pc = 0x10DDE8u;
    {
        const bool branch_taken_0x10dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDE8u;
        // 0x10ddec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dde8) {
            ctx->pc = 0x10DE48u;
            goto label_10de48;
        }
    }
    ctx->pc = 0x10DDF0u;
label_10ddf0:
    // 0x10ddf0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10ddf4:
    // 0x10ddf4: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x10ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10ddf8:
    // 0x10ddf8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ddfc:
    // 0x10ddfc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x10ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_10de00:
    // 0x10de00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10de00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10de04:
    // 0x10de04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10de08:
    // 0x10de08: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10de08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10de0c:
    // 0x10de0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10de10:
    // 0x10de10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10de14:
    // 0x10de14: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x10de14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10de18:
    // 0x10de18: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10de18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10de1c:
    // 0x10de1c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10de1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10de20:
    // 0x10de20: 0x320f809  jalr        $t9
label_10de24:
    if (ctx->pc == 0x10DE24u) {
        ctx->pc = 0x10DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE20u;
        // 0x10de24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE28u;
        goto label_10de28;
    }
    ctx->pc = 0x10DE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DE28u);
        ctx->pc = 0x10DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE20u;
        // 0x10de24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE20u, 0x10DE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DE28u;
label_10de28:
    // 0x10de28: 0xa64001fa  sh          $zero, 0x1FA($s2)
    ctx->pc = 0x10de28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 506), (uint16_t)GPR_U32(ctx, 0));
label_10de2c:
    // 0x10de2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10de30:
    // 0x10de30: 0xae4001fc  sw          $zero, 0x1FC($s2)
    ctx->pc = 0x10de30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 0));
label_10de34:
    // 0x10de34: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10de34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10de38:
    // 0x10de38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10de38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10de3c:
    // 0x10de3c: 0x320f809  jalr        $t9
label_10de40:
    if (ctx->pc == 0x10DE40u) {
        ctx->pc = 0x10DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE3Cu;
        // 0x10de40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE44u;
        goto label_10de44;
    }
    ctx->pc = 0x10DE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DE44u);
        ctx->pc = 0x10DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE3Cu;
        // 0x10de40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE3Cu, 0x10DE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DE44u;
label_10de44:
    // 0x10de44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10de44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10de48:
    // 0x10de48: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x10de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_10de4c:
    // 0x10de4c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10de4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10de50:
    // 0x10de50: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_10de54:
    if (ctx->pc == 0x10DE54u) {
        ctx->pc = 0x10DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE50u;
        // 0x10de54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE58u;
        goto label_10de58;
    }
    ctx->pc = 0x10DE50u;
    {
        const bool branch_taken_0x10de50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE50u;
        // 0x10de54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de50) {
            ctx->pc = 0x10DDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ddf0;
        }
    }
    ctx->pc = 0x10DE58u;
label_10de58:
    // 0x10de58: 0xc0438f0  jal         func_10E3C0
label_10de5c:
    if (ctx->pc == 0x10DE5Cu) {
        ctx->pc = 0x10DE60u;
        goto label_10de60;
    }
    ctx->pc = 0x10DE58u;
    SET_GPR_U32(ctx, 31, 0x10DE60u);
    ctx->pc = 0x10E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3C0u, 0x10DE58u, 0x10DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE60u;
label_10de60:
    // 0x10de60: 0x10000030  b           . + 4 + (0x30 << 2)
label_10de64:
    if (ctx->pc == 0x10DE64u) {
        ctx->pc = 0x10DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE60u;
        // 0x10de64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE68u;
        goto label_10de68;
    }
    ctx->pc = 0x10DE60u;
    {
        const bool branch_taken_0x10de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE60u;
        // 0x10de64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de60) {
            ctx->pc = 0x10DF24u;
            goto label_10df24;
        }
    }
    ctx->pc = 0x10DE68u;
label_10de68:
    // 0x10de68: 0x8e250220  lw          $a1, 0x220($s1)
    ctx->pc = 0x10de68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10de6c:
    // 0x10de6c: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x10de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_10de70:
    // 0x10de70: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x10de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10de74:
    // 0x10de74: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10de78:
    // 0x10de78: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x10de78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_10de7c:
    // 0x10de7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10de80:
    // 0x10de80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10de80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10de84:
    // 0x10de84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10de88:
    // 0x10de88: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10de88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10de8c:
    // 0x10de8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10de90:
    // 0x10de90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10de94:
    // 0x10de94: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x10de94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10de98:
    // 0x10de98: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10de98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10de9c:
    // 0x10de9c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10de9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10dea0:
    // 0x10dea0: 0x320f809  jalr        $t9
label_10dea4:
    if (ctx->pc == 0x10DEA4u) {
        ctx->pc = 0x10DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEA0u;
        // 0x10dea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEA8u;
        goto label_10dea8;
    }
    ctx->pc = 0x10DEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DEA8u);
        ctx->pc = 0x10DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEA0u;
        // 0x10dea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DEA0u, 0x10DEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DEA8u;
label_10dea8:
    // 0x10dea8: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10dea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10deac:
    // 0x10deac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10deb0:
    // 0x10deb0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10deb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10deb4:
    // 0x10deb4: 0x320f809  jalr        $t9
label_10deb8:
    if (ctx->pc == 0x10DEB8u) {
        ctx->pc = 0x10DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEB4u;
        // 0x10deb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEBCu;
        goto label_10debc;
    }
    ctx->pc = 0x10DEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DEBCu);
        ctx->pc = 0x10DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEB4u;
        // 0x10deb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DEB4u, 0x10DEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DEBCu;
label_10debc:
    // 0x10debc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10dec0:
    // 0x10dec0: 0xa6420222  sh          $v0, 0x222($s2)
    ctx->pc = 0x10dec0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 546), (uint16_t)GPR_U32(ctx, 2));
label_10dec4:
    // 0x10dec4: 0x8e260220  lw          $a2, 0x220($s1)
    ctx->pc = 0x10dec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10dec8:
    // 0x10dec8: 0x8e250224  lw          $a1, 0x224($s1)
    ctx->pc = 0x10dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_10decc:
    // 0x10decc: 0x8e240228  lw          $a0, 0x228($s1)
    ctx->pc = 0x10deccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_10ded0:
    // 0x10ded0: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x10ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10ded4:
    // 0x10ded4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ded8:
    // 0x10ded8: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x10ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_10dedc:
    // 0x10dedc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x10dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_10dee0:
    // 0x10dee0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10dee4:
    // 0x10dee4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10dee8:
    // 0x10dee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10deec:
    // 0x10deec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10deecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10def0:
    // 0x10def0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10def0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10def4:
    // 0x10def4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10def4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10def8:
    // 0x10def8: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x10def8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10defc:
    // 0x10defc: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10defcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10df00:
    // 0x10df00: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10df00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10df04:
    // 0x10df04: 0x320f809  jalr        $t9
label_10df08:
    if (ctx->pc == 0x10DF08u) {
        ctx->pc = 0x10DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF04u;
        // 0x10df08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF0Cu;
        goto label_10df0c;
    }
    ctx->pc = 0x10DF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DF0Cu);
        ctx->pc = 0x10DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF04u;
        // 0x10df08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF04u, 0x10DF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DF0Cu;
label_10df0c:
    // 0x10df0c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10df0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10df10:
    // 0x10df10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10df14:
    // 0x10df14: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10df14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10df18:
    // 0x10df18: 0x320f809  jalr        $t9
label_10df1c:
    if (ctx->pc == 0x10DF1Cu) {
        ctx->pc = 0x10DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF18u;
        // 0x10df1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF20u;
        goto label_10df20;
    }
    ctx->pc = 0x10DF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DF20u);
        ctx->pc = 0x10DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF18u;
        // 0x10df1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF18u, 0x10DF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DF20u;
label_10df20:
    // 0x10df20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10df20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10df24:
    // 0x10df24: 0x0  nop
    ctx->pc = 0x10df24u;
    // NOP
label_10df28:
    // 0x10df28: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x10df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_10df2c:
    // 0x10df2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10df2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10df30:
    // 0x10df30: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_10df34:
    if (ctx->pc == 0x10DF34u) {
        ctx->pc = 0x10DF38u;
        goto label_10df38;
    }
    ctx->pc = 0x10DF30u;
    {
        const bool branch_taken_0x10df30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10df30) {
            ctx->pc = 0x10DE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10de68;
        }
    }
    ctx->pc = 0x10DF38u;
label_10df38:
    // 0x10df38: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x10df38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
label_10df3c:
    // 0x10df3c: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x10df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
label_10df40:
    // 0x10df40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10df40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10df44:
    // 0x10df44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10df44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10df48:
    // 0x10df48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10df48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10df4c:
    // 0x10df4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10df4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10df50:
    // 0x10df50: 0x3e00008  jr          $ra
label_10df54:
    if (ctx->pc == 0x10DF54u) {
        ctx->pc = 0x10DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF50u;
        // 0x10df54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF58u;
        goto label_fallthrough_0x10df50;
    }
    ctx->pc = 0x10DF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF50u;
        // 0x10df54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10df50:
    ctx->pc = 0x10DF58u;
}
