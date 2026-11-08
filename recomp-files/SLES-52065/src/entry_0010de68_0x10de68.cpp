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

// Function: entry_0010de68
// Address: 0x10de68 - 0x10df24
void entry_0010de68_0x10de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de68_0x10de68");
#endif

    switch (ctx->pc) {
        case 0x10dea8u: goto label_10dea8;
        case 0x10debcu: goto label_10debc;
        case 0x10df0cu: goto label_10df0c;
        case 0x10df20u: goto label_10df20;
        default: break;
    }

    ctx->pc = 0x10de68u;

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
    ctx->pc = 0x10df24u;
}
